/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_8, (max(498046511, (1 - 212)))));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_16 = ((((((arr_0 [i_0 - 3] [i_0 - 3]) >> ((-(arr_0 [i_0] [i_0 + 1])))))) ? ((44 ? -var_4 : 18446744073709551615)) : (((min(var_8, (max(212, (arr_1 [i_0 + 1] [i_0 + 1])))))))));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_17 = (min(((max(var_2, ((max(3796920784, 1)))))), (min((arr_5 [i_0 - 3]), 63))));
            arr_6 [i_1 - 1] = ((((((min(48, var_10))) ? (max(-6267553198565481763, (arr_3 [i_0] [i_0]))) : 50842)) / var_2));
            var_18 = (min(var_18, (((1 ? (((((-(arr_1 [i_0] [i_1])))))) : (min(var_1, (min((arr_5 [i_0]), var_11)))))))));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_19 = ((((-(((arr_8 [i_0 + 1] [i_0 - 3]) ? (arr_3 [i_2] [i_3]) : (arr_2 [i_0]))))) & (((5944870390802961426 ? (arr_3 [i_2] [i_2]) : (~-67))))));
                            arr_16 [i_0 - 3] [i_2] [i_3] [i_4] [i_5] [i_5] [i_5] = (((max(14336, var_9)) - ((((max(var_9, var_3)) ? ((8032145597456547042 ? var_12 : 63)) : ((var_13 ? var_11 : 67)))))));
                            arr_17 [i_0 - 2] [0] [i_3] [i_4] [i_5] &= var_2;
                        }
                    }
                }
            }

            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                arr_20 [i_6] [i_2] [i_0] = (((arr_13 [i_6] [i_6] [i_6] [i_6]) ? (max(var_9, (arr_4 [i_0] [i_0 - 1] [i_0]))) : (arr_0 [i_0 - 3] [i_0 + 1])));
                var_20 = (arr_7 [i_0] [i_2]);
                var_21 = (min(var_21, 498046511));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_22 = (max((max((arr_15 [i_7] [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 + 1]), var_1)), (arr_3 [i_0] [i_6])));
                            var_23 = (i_7 % 2 == zero) ? ((((((arr_3 [i_8] [i_2]) + 2147483647)) << ((((((min((arr_0 [i_0] [i_2]), var_4))) ? (((arr_27 [i_8] [i_7] [i_7] [i_0 - 3]) & (arr_18 [i_0 - 3] [i_0 - 3] [i_6] [i_8]))) : (((arr_11 [i_7]) ? var_12 : (arr_22 [i_7] [i_2] [i_6] [i_7]))))) - 72))))) : ((((((arr_3 [i_8] [i_2]) + 2147483647)) << ((((((((min((arr_0 [i_0] [i_2]), var_4))) ? (((arr_27 [i_8] [i_7] [i_7] [i_0 - 3]) & (arr_18 [i_0 - 3] [i_0 - 3] [i_6] [i_8]))) : (((arr_11 [i_7]) ? var_12 : (arr_22 [i_7] [i_2] [i_6] [i_7]))))) - 72)) - 254039434)))));
                            var_24 = (((arr_11 [i_7]) ? (arr_11 [i_7]) : (arr_11 [i_7])));
                        }
                    }
                }
                arr_28 [i_0] [i_2] [i_6] = ((var_8 + ((((min(192, 7116253741471347107))) ? (((arr_25 [i_2] [i_2] [i_6] [i_6] [i_2] [i_2]) ? var_10 : (arr_3 [i_0] [i_6]))) : (arr_4 [i_2] [i_2] [i_6])))));
            }
            for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
            {
                var_25 = ((var_13 ? 971539971 : -95));
                var_26 = ((-(arr_2 [i_9])));
                var_27 = -498046501;
                var_28 = (min(((((((arr_18 [i_0] [i_9] [i_2] [i_2]) >= var_5)) || ((max(1, 3796920789)))))), (((arr_15 [0] [i_9] [i_2] [i_0 - 1] [0]) ? ((((arr_19 [i_2] [i_2] [i_2]) ? (arr_21 [2] [i_2] [i_9] [i_0] [i_9]) : 14694))) : (max(var_13, var_3))))));
                var_29 = (arr_4 [i_9] [i_2] [i_0]);
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
            {
                var_30 &= (((31 ? var_3 : var_12)));
                var_31 -= (1215046090 & 668152959);
            }
        }
    }
    var_32 = (max(var_32, ((((((var_12 ? var_10 : var_5)) - (11330490332238204526 < var_3)))))));
    var_33 = 6;
    #pragma endscop
}
