/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [1] [10] = (((((1 ? 25801 : 1))) ? var_7 : (((arr_3 [i_0] [i_1]) ^ (arr_3 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_3] [i_0] [i_3 + 2] = ((-7905166943461696389 && 1) || 1);
                            var_16 = (min(var_16, ((((arr_1 [i_2]) + (arr_8 [1]))))));
                        }
                    }
                }
                arr_11 [i_0] = (max((((var_8 + 52011) / (arr_0 [i_0] [i_0]))), ((((arr_1 [i_0]) || var_5)))));
                var_17 = (min(var_17, (((min(var_1, (arr_1 [i_1])))))));
                arr_12 [i_0] [i_0] [1] = ((+((var_4 ? (arr_2 [i_0]) : (arr_2 [i_0])))));
            }
        }
    }
    var_18 = (min(var_18, 1));
    var_19 *= (!var_0);
    var_20 = var_9;
    #pragma endscop
}
