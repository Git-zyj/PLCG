/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!((max(-var_1, -660750909)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_15 [0] [0] [i_1] [i_1] [i_1] [i_0] [i_0] = ((!((((1 ? var_4 : -111)) >= var_11))));
                                var_13 = ((~(~1)));
                                arr_16 [i_0] [i_0] [i_1] [11] [i_3] [i_4] [i_4] = 384;
                                var_14 = ((-1647465482 ? (~-889267966) : (((max(1104, var_9))))));
                                var_15 = (!5);
                            }
                        }
                    }
                }
                var_16 = 8184;
                arr_17 [i_1] = ((((max(65152, -var_0))) ? (~-var_0) : (((arr_12 [i_1 - 2] [i_1 - 2] [i_1]) ? (arr_12 [i_1 - 2] [i_1 - 1] [i_1]) : (arr_12 [i_1 + 1] [i_1 - 2] [i_1])))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_17 = 15593;
        var_18 = max(((-230620930580815651 ? ((8191 ? 1104 : (arr_18 [15] [i_5]))) : ((8559509144136154720 ? (arr_18 [i_5] [6]) : var_5)))), (max((((arr_19 [i_5] [i_5]) ? 8593682742288770483 : var_5)), (((1 ? (arr_19 [i_5] [i_5]) : (arr_19 [i_5] [i_5])))))));
    }
    var_19 = ((-(((var_7 ? var_8 : var_5)))));
    var_20 &= (((var_6 ? (((var_5 ? var_7 : var_6)) : var_10))));
    #pragma endscop
}
