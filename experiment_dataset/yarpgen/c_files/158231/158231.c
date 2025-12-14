/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] = (min((arr_0 [i_0]), (((arr_1 [i_0 + 1]) ? ((0 & (arr_0 [i_0]))) : (~0)))));
        arr_3 [i_0] = (max((min((arr_0 [i_0 + 1]), 986358109)), (((-(!127))))));
        var_13 = (max(var_13, (((-(max(8540, -1956617788)))))));
        var_14 = (max((((49893 * (arr_0 [i_0])))), -var_4));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_15 = var_8;
        var_16 = var_11;
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((!((((arr_5 [i_2]) ? 200 : 986358109)))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_17 = (!1);
                    var_18 = (min(var_18, (arr_13 [5] [i_4])));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_2] [i_2] [i_2] [i_4] [9] [9] = ((!((min((~-986358110), var_5)))));
                        arr_19 [i_5] [i_4] [4] [i_2] = var_10;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_6] [i_6] = 10147;
                        var_19 ^= (arr_17 [i_2] [i_4] [i_4] [i_3] [i_3] [i_2]);
                        var_20 = ((var_1 ^ var_3) / (arr_10 [11] [2] [i_4]));
                        var_21 *= 27804;
                        var_22 = (((arr_16 [i_2] [i_3] [i_4] [i_6] [i_6]) * (arr_6 [i_2])));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 1; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            var_23 = (max(var_23, 20));
                            var_24 = (min(var_24, var_2));
                        }
                        for (int i_9 = 1; i_9 < 17;i_9 += 1) /* same iter space */
                        {
                            arr_32 [i_9] [i_7] = (((arr_17 [i_2] [1] [i_2] [7] [7] [19]) ? 138 : var_0));
                            arr_33 [i_9] = (~var_2);
                            arr_34 [i_2] [i_9] [i_3] [i_4] [1] [i_4] [i_4] = -79;
                            var_25 = -112;
                            arr_35 [i_9] [i_7] [i_4] [5] [i_9] = (-762385303 % -60);
                        }
                        for (int i_10 = 1; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            var_26 = (min(var_26, ((((arr_27 [i_4] [i_10 + 3] [i_10] [i_10] [2]) ? (((~(arr_23 [1] [i_7] [1] [i_3] [i_2])))) : (~4194419788702950017))))));
                            var_27 = (arr_28 [6] [i_3] [i_4] [i_7] [i_7] [i_7] [i_10 + 3]);
                        }
                        var_28 = -66;
                        var_29 = (((var_9 < 32500) ? ((-5212 ? -60 : var_9)) : var_6));
                    }

                    for (int i_11 = 1; i_11 < 18;i_11 += 1)
                    {
                        var_30 = (min(var_30, (((-413386733509842106 ? (((((max(6144, -12591))) + -var_7))) : ((1147525204 ? 140735340871680 : 4194419788702950017)))))));
                        var_31 = (max(var_31, ((((((arr_27 [i_2] [i_2] [i_2] [i_11 + 2] [i_11 + 2]) ? (arr_37 [i_11 - 1] [i_2] [i_4] [i_11 + 2]) : 1023)) << var_6)))));
                    }
                    arr_40 [i_2] [i_2] [i_3] [i_2] = (max((max(97, (!-762385303))), (arr_4 [i_4])));
                }
            }
        }
        var_32 = (max((arr_5 [i_2]), (arr_30 [i_2] [i_2])));
        var_33 = (max(var_33, ((~(2328564174 <= 1716069027350818195)))));

        /* vectorizable */
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            var_34 = (min(var_34, (((20281 ? (arr_30 [i_2] [i_12]) : (arr_30 [i_2] [i_12]))))));
            arr_45 [i_12] [1] [i_2] = (((arr_42 [13] [i_12] [i_12]) ? ((-(arr_20 [i_2] [i_12] [i_2]))) : (arr_14 [i_2] [i_2])));
            arr_46 [i_2] [i_12] [i_12] = (((arr_17 [i_2] [i_2] [11] [i_2] [i_2] [i_2]) + (arr_17 [i_2] [i_12] [i_2] [19] [i_2] [i_12])));
            arr_47 [i_2] [i_2] [i_12] = (((arr_39 [i_12] [16] [i_2] [i_2] [i_2]) ^ (!117)));
        }
    }
    var_35 = (min(var_35, (((((147 > -26) - (var_11 < var_11)))))));
    #pragma endscop
}
