/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((-((((var_6 | var_0) > var_6)))));
    var_11 = (min(((~(!var_2))), var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_12 = arr_9 [i_0] [i_0] [i_0];
                                arr_12 [i_2] [i_2] [i_0] [i_2] [i_2] [i_2] [5] = ((+(((arr_11 [i_1 + 1] [i_1] [i_1 - 1] [12]) ? (!22821) : (arr_1 [i_1])))));
                            }
                        }
                    }
                    var_13 = (((((-(arr_7 [i_1 + 2] [i_0])))) ? ((((-(arr_1 [i_0]))) / ((max(var_3, (arr_7 [i_0] [i_1 + 2])))))) : (-32767 - 1)));
                }
            }
        }
    }
    var_14 = (min(var_14, ((((var_7 <= var_5) ? (var_7 <= var_0) : 32640)))));
    var_15 = var_6;
    #pragma endscop
}
