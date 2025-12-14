/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((((var_9 + var_8) >= (max(3021460271, var_1))))), (((3021460271 ? var_11 : 3021460271)))));
    var_19 -= ((((((max(var_3, var_6))))) ? (((((var_16 ? var_8 : 1273507011)) <= 6384601490860736698))) : ((((((var_2 ? var_14 : var_6))) != var_10)))));
    var_20 = ((var_11 ? (((12633453181237451798 ? -15 : 0))) : ((var_3 & (min(var_1, var_10))))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            var_21 = (min(var_21, (arr_1 [i_0] [i_1])));
            var_22 = (min(var_22, (arr_3 [i_0] [i_0])));
            var_23 = (min(var_23, ((((!-6384601490860736702) ? (((((arr_4 [i_0]) || var_6)))) : 6384601490860736678)))));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_13 [15] [3] [3] [i_0 - 3] = (arr_2 [i_0] [i_0]);
                        arr_14 [i_0] [i_0] = (((arr_6 [4] [i_0 - 3] [i_4]) ^ (arr_5 [i_4])));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_24 = (arr_3 [i_3] [i_3]);
                            var_25 += (arr_10 [i_0 - 1] [i_2] [i_3] [i_4]);
                        }
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            var_26 *= (((arr_5 [0]) < (arr_19 [i_0] [10] [i_3] [i_4] [i_6] [i_3])));
                            var_27 -= var_10;
                        }
                        for (int i_7 = 4; i_7 < 16;i_7 += 1)
                        {
                            arr_24 [i_4] [i_4] [i_3] [i_4] [i_7] [i_4] [i_2] = (((((var_12 ? -46 : (arr_0 [i_0] [i_2])))) & (arr_19 [i_2] [i_4] [i_7] [i_7] [i_7] [i_7 - 3])));
                            arr_25 [16] [i_4] [i_0] [i_2] [i_0] [i_0] = (((arr_2 [i_0] [i_0 - 2]) & var_11));
                        }
                    }
                }
            }
            var_28 = var_14;
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 2; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 16;i_11 += 1)
                    {
                        {
                            var_29 = (max(var_29, (((4294967295 - ((((arr_31 [i_0] [i_8] [i_0] [i_8] [i_8]) - var_6))))))));
                            arr_35 [i_10 + 1] [i_8] [i_0] [i_8] |= ((-((var_12 ? (arr_27 [i_8]) : 12633453181237451786))));
                            var_30 |= ((((arr_26 [9] [i_8] [i_9 + 2]) != var_7)));
                            var_31 = (arr_32 [i_8] [i_9 - 1] [i_10 + 2] [i_10]);
                            var_32 += (((arr_23 [i_11 + 1] [i_0 + 4] [i_11] [i_0 + 4] [i_0] [i_0 - 4] [i_0 - 4]) - 28));
                        }
                    }
                }
            }
            var_33 -= (((arr_21 [i_0] [i_8] [i_0] [i_8] [i_0] [i_0]) - (((((arr_26 [15] [i_8] [i_8]) && (arr_6 [i_0] [i_0 + 2] [i_0])))))));
        }

        for (int i_12 = 1; i_12 < 14;i_12 += 1)
        {
            arr_40 [i_12] [i_12] = 28;
            arr_41 [i_12] [i_12] = (((var_11 ? (arr_31 [i_12] [i_12] [i_0 + 1] [i_12] [i_12]) : (arr_33 [i_0] [i_12] [i_12] [i_12] [6]))));
            var_34 = (arr_32 [i_12 + 2] [i_12] [i_0] [i_0 + 2]);
        }
        var_35 = (min(var_35, ((((((-21159 ? 4 : var_2))) | (((arr_26 [i_0] [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_11 [i_0]))))))));
    }
    var_36 = (max(var_36, 8093731152094795535));
    #pragma endscop
}
