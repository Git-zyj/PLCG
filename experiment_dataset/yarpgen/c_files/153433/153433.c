/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_19 = ((!((((arr_7 [i_3]) ? ((1 ? 13639507371989936430 : (arr_2 [i_1] [i_1]))) : (!134217728))))));
                            var_20 = (arr_1 [i_2]);
                            var_21 = ((!((4807236701719615186 != (arr_5 [i_0] [i_0] [i_0])))));
                            var_22 = var_13;
                        }
                    }
                }
                arr_10 [i_0] [i_0] = ((-0 ? ((((((min(49, (arr_1 [i_1])))) > 85)))) : 1));
            }
        }
    }
    #pragma endscop
}
