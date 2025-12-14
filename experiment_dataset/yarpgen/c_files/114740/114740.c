/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_14 [i_0 + 3] = ((arr_0 [i_2] [i_2]) | (!517000524));
                        arr_15 [i_0] [i_0] [i_2] = (((arr_13 [i_0 - 4] [i_1 - 1]) ^ (arr_13 [i_0 - 4] [i_1 - 1])));
                        var_19 = var_5;
                        arr_16 [i_0] = ((-(arr_1 [i_0] [i_1 - 1])));
                        var_20 ^= (arr_12 [i_0 + 1] [i_1] [i_2]);
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_19 [i_0] [i_1] [i_2] [5] = (max((((arr_6 [i_0 - 1] [i_0 - 1] [i_4]) ? var_18 : (arr_6 [3] [i_1] [i_1 - 1]))), 1221230497));
                        arr_20 [i_0] [i_1 - 1] = (-15823911161180015408 / 3599665441);
                        arr_21 [i_0] [i_1] [i_0] [i_4] [i_4] = ((((max((arr_18 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1]), 3599665441))) ? ((((var_10 && (arr_6 [i_0 + 2] [i_0 + 2] [i_1 + 1]))))) : (arr_6 [i_0 - 4] [i_0 - 2] [i_1 - 1])));
                    }

                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        arr_26 [i_0] [i_1 + 1] [i_2] [i_1 + 1] [i_1 + 1] = (((arr_3 [i_0] [i_0] [i_5 + 1]) ? ((((arr_23 [i_2] [i_2] [i_2] [i_5 + 3]) > 8533865467057370747))) : ((max((arr_24 [i_0 - 4] [i_0 - 4] [i_1 + 1] [i_1 + 1]), (arr_24 [i_0 - 3] [i_0 - 2] [i_1 - 1] [i_1 + 1]))))));
                        var_21 = -2622832912529536181;
                        var_22 *= max(((min((arr_24 [i_5 - 2] [i_0 - 3] [i_2] [i_5]), ((((arr_17 [i_0] [i_1 - 1] [i_0] [4] [i_5]) || 13860)))))), (max((arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_5 + 3]), 695301854)));
                        arr_27 [i_0] [i_1] [i_1] = ((~(~9271896838805316736)));
                        var_23 = (arr_4 [i_1] [i_1] [i_1]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    var_24 -= (arr_1 [i_6] [i_6]);
                    var_25 = ((arr_17 [0] [i_6] [0] [i_6] [10]) * (((arr_1 [6] [i_6]) / var_14)));
                    arr_33 [i_0] [4] [i_7] = var_10;
                    arr_34 [2] [i_6] [8] [i_0] |= (max((!var_17), ((!(!var_6)))));
                }
            }
        }
        arr_35 [i_0 - 4] = (arr_5 [i_0]);
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        arr_38 [12] [i_8] = (((arr_36 [i_8] [i_8]) ? (arr_36 [i_8] [i_8]) : (((arr_37 [i_8] [i_8]) ? (arr_36 [i_8] [i_8]) : (arr_37 [i_8] [i_8])))));
        arr_39 [i_8] = ((((((arr_36 [i_8] [i_8]) ? (arr_37 [i_8] [i_8]) : (((arr_37 [i_8] [i_8]) ? (arr_36 [i_8] [i_8]) : (arr_37 [i_8] [i_8])))))) ? ((max(var_6, 695301855))) : (max(-4125327518597713493, 15823911161180015413))));
    }
    var_26 = (max(var_0, 3599665428));
    #pragma endscop
}
