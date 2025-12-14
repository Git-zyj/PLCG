/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((15661898832081666080 ? ((var_9 ? var_7 : var_0)) : (!var_0)))) ? (((max(var_0, var_2)))) : ((var_10 ? var_6 : var_10))));
    var_12 &= ((var_0 ? ((((var_3 && (((17927853038258702216 ? var_8 : var_9))))))) : ((((var_4 ? var_2 : var_5)) * var_0))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = ((((max((arr_4 [i_0]), ((var_3 ? var_1 : var_3))))) < (max(((((arr_6 [i_0] [i_2]) << (var_1 - 89785184)))), 518891035450849380))));

                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_2] [i_2] [4] = (arr_9 [i_3 - 1] [i_3] [i_3 - 1] [i_1] [i_0] [1]);
                        var_14 -= (!((((arr_5 [0] [0]) ? (!518891035450849374) : (max((arr_4 [0]), var_7))))));
                        var_15 = (((~(arr_7 [i_0]))));
                        var_16 = (((arr_1 [i_1]) + var_3));
                        var_17 = ((((!(arr_2 [i_3 - 2] [i_3 + 2]))) ? var_6 : (arr_7 [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_18 = (max(((max((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [10]) ? (arr_4 [i_1]) : (arr_6 [i_0] [i_4]))), (1 == var_9)))), (max((arr_12 [i_1] [i_0]), (arr_5 [i_4] [i_2])))));
                        var_19 *= (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_19 [i_0] [i_1] [i_0] [i_1] [i_5] = var_8;
                            arr_20 [i_2] [i_1] [i_5] [i_2] [i_5] [i_2] = (((17927853038258702241 < (arr_3 [i_0]))));
                            var_20 = (((arr_12 [i_0] [i_2]) > (arr_17 [i_0] [i_1] [i_2] [i_4] [i_5])));
                            var_21 = (~518891035450849369);
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_22 = (269969401 / -16656);
                            arr_23 [i_6] [i_6] [1] [1] [i_6] [i_0] = (arr_14 [8] [i_4] [i_0]);
                            var_23 = max(((((var_7 ^ (arr_17 [i_4] [i_0] [i_2] [i_4] [i_6]))) & (((arr_9 [i_4] [1] [i_4] [i_4] [i_4] [i_4]) ? 109 : var_5)))), (((var_8 && ((max((arr_2 [i_0] [i_0]), var_0)))))));
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_24 &= ((((((1 ? (arr_22 [i_4] [i_1] [i_1]) : 17927853038258702211))) ? var_7 : -269969403)));
                            var_25 *= ((~((~(arr_3 [i_7])))));
                            var_26 = (arr_14 [i_0] [i_4] [i_4]);
                        }
                        arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = var_8;
                    }
                    var_27 = ((var_5 ? 17927853038258702206 : (arr_12 [i_1] [3])));
                }
            }
        }
    }
    var_28 = (((((var_2 ? var_4 : 5573771359896468808))) ? var_8 : var_6));
    #pragma endscop
}
