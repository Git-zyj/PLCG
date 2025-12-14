/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 += var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_0] [i_2] [i_1] [i_0] = (min((max((arr_2 [i_0]), (((arr_11 [i_0] [i_0]) ? 14486405180592616674 : var_3)))), ((max((arr_6 [i_2 - 4] [i_1 + 1]), ((min((arr_8 [i_0] [i_0]), var_9))))))));
                        arr_13 [i_0] [i_0] [i_1 - 2] [i_1 - 2] [i_0] = (max(((max(var_7, (arr_8 [12] [i_1 + 1])))), ((((max(6143952131505326741, 2147483635))) ? (arr_11 [6] [6]) : var_8))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_14 = ((((min((arr_17 [i_0] [i_0] [i_1] [i_1 - 1] [i_1 + 1] [i_5] [i_5]), (arr_17 [i_0] [i_0] [i_1] [i_1 - 2] [4] [i_1 - 2] [i_4 - 2])))) ? ((max((arr_10 [i_0] [i_1 + 1] [7] [i_5]), var_2))) : (max(3960338893116934921, var_8))));
                                arr_18 [i_0] [i_1] [i_1] [i_4 - 1] [i_1] = max((min(3960338893116934929, (arr_11 [i_1 + 1] [i_2 + 2]))), (arr_11 [i_1 - 1] [i_2 + 3]));
                            }
                        }
                    }
                    var_15 -= var_5;

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_16 &= var_5;
                        var_17 = (max(var_17, ((max(((min(var_11, (arr_6 [i_2 + 1] [i_1 - 1])))), (min(((((arr_17 [i_6] [i_6] [1] [i_2] [i_1] [i_0] [i_0]) ? var_11 : var_2))), (min(3960338893116934964, 14486405180592616662)))))))));

                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_18 = (max((max(((1326364190 ? -101 : -405073761)), ((min(var_7, var_3))))), var_1));
                            var_19 -= (((min(var_2, var_1))));
                        }
                        for (int i_8 = 2; i_8 < 12;i_8 += 1)
                        {
                            arr_26 [i_8] [i_6] [5] [2] [i_0] &= (max(((((arr_3 [i_1 + 1] [i_2 - 4] [i_8 - 1]) >= (arr_8 [i_8 - 2] [i_1 - 2])))), (arr_8 [i_8 - 2] [i_1 - 1])));
                            var_20 = (min(var_20, (arr_14 [i_2 - 4])));
                            var_21 = (max(((var_8 ? 4064 : (!var_3))), ((65520 ? var_4 : (arr_10 [i_2 + 1] [i_2 + 3] [i_2 + 3] [3])))));
                            var_22 = (((5058901745824491780 & 1) ? (min((max((arr_4 [i_0] [i_1]), (arr_14 [i_8]))), var_2)) : ((((arr_23 [i_8] [i_2 + 3] [i_1 - 2] [i_1] [i_0] [i_0] [i_0]) ? (arr_23 [0] [i_2 + 3] [i_1 + 1] [i_1] [i_1] [i_0] [i_0]) : (arr_23 [i_8 + 2] [i_2 - 2] [i_1 + 1] [i_1 + 1] [0] [i_1] [i_1]))))));
                        }
                        arr_27 [i_6] [4] [i_1] [i_0] = 19;
                        arr_28 [i_0] [i_0] [i_2 - 1] [i_6] = 61490;
                    }
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {

                        for (int i_10 = 1; i_10 < 11;i_10 += 1)
                        {
                            arr_34 [i_10] [i_9 - 1] [i_1] [i_0] [i_1] [i_1] [i_0] = (((arr_25 [i_2 - 1] [i_2 - 1]) / var_11));
                            var_23 = (max(var_23, 49800));
                            var_24 = (max(var_24, var_0));
                        }
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            var_25 *= (((arr_16 [i_2 + 1] [i_1] [i_2]) != -32038));
                            var_26 *= (((arr_4 [i_1] [i_1]) ? (arr_35 [i_1 - 2] [i_1] [1] [i_2 - 3] [1] [i_2 + 1]) : (var_11 && 0)));
                        }
                        var_27 = ((45 ? ((var_10 ? 6819700128197696995 : var_6)) : (arr_32 [i_2] [i_9 - 1] [10] [i_2 + 1] [i_1 + 1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
