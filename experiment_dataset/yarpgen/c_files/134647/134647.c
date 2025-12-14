/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_10 [i_4] [i_3] [i_4] &= var_11;
                            var_15 = (~(arr_2 [i_2]));
                        }

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            arr_14 [i_0] [i_3] [i_2] [i_1] [i_0 - 1] [i_0] = 7;
                            var_16 = var_7;
                            arr_15 [i_5] [i_1] [i_2] [i_3] [i_3] [i_5] [i_0] = var_2;
                            arr_16 [i_0] [i_1] [i_1] [i_2] [i_0] [i_5] = ((0 ^ (arr_9 [i_0 - 2] [i_1] [i_2] [i_3] [i_3] [i_3] [i_0])));
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_20 [i_0] [i_0 - 1] [i_1] [i_0] [i_2] [i_3] [i_6] = (((~var_11) ? (arr_8 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0]) : 1));
                            arr_21 [i_0] [i_1] [i_2] [i_0] [i_2] [i_3] [i_6] = var_5;
                            arr_22 [i_0 - 1] [i_1] [i_3] [i_0] [i_1] [i_0 - 1] = (((arr_19 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 2] [i_0] [i_1]) > 1));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_17 = 34004;
                            var_18 = (max(var_18, var_1));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_19 = (min(var_19, ((((((var_12 ? (arr_18 [i_1] [i_1] [i_3]) : (arr_24 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [12])))) != (((arr_17 [1]) ? (arr_3 [i_0 - 2] [i_2] [i_8]) : var_10)))))));
                            arr_28 [i_0] [i_0] = (arr_19 [i_0] [i_1] [i_2] [i_2] [i_0] [i_8]);
                        }
                    }
                }
            }
            arr_29 [i_0] = (arr_24 [i_0] [i_1] [i_0 + 1] [i_1] [i_1] [i_1] [i_0]);
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
        {
            arr_33 [i_0] = (~var_3);
            arr_34 [i_0] [i_0] [i_0] = var_14;
            arr_35 [i_0] = ((var_3 ? (~var_7) : (((arr_0 [i_0]) ? (arr_1 [i_0]) : var_12))));
            arr_36 [i_0] = -1836515950;
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 13;i_11 += 1)
                {
                    {
                        var_20 ^= var_3;

                        for (int i_12 = 4; i_12 < 11;i_12 += 1)
                        {
                            arr_44 [i_0] [i_9] [i_10] [i_12] = (((arr_42 [i_0 - 2] [i_9] [i_10] [i_10 - 2] [i_10] [i_11] [i_12]) ? var_12 : (arr_24 [i_12 - 4] [i_9] [i_10] [i_11] [i_12 + 3] [i_10 - 1] [i_0])));
                            arr_45 [i_0] [i_10] [i_0] = var_6;
                            arr_46 [i_0] [i_0] [i_0] [i_10] [i_11] [i_12] = ((((((arr_6 [i_0] [i_0] [i_0] [i_10]) ? (arr_6 [i_10 + 1] [i_0] [i_0] [i_11]) : var_5))) ? (24555 && 1) : ((1 ? (arr_23 [i_11] [i_12]) : 205))));
                            var_21 = (max(var_21, var_12));
                        }
                        var_22 = (((-(arr_3 [i_0] [i_9] [i_10]))));
                        var_23 = (5136877544690880934 ? 751065108 : (arr_24 [i_0 - 1] [i_0 - 1] [i_9] [i_10 - 2] [i_10 + 1] [i_11 - 2] [i_0]));
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
        {
            arr_49 [i_0] [i_13] [i_0] = (((arr_27 [i_0] [i_0 - 2] [i_0 - 2] [i_13] [i_13] [i_13] [i_13]) && 51));
            arr_50 [i_0] = var_3;
            arr_51 [i_0] [i_0] [i_13] = (((((arr_43 [i_0] [i_0] [i_0] [i_13]) ? var_7 : (arr_18 [i_0] [i_13] [i_13]))) != var_0));
            var_24 = (!0);
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        arr_56 [i_0] [i_0] = (var_7 ^ (arr_42 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]));
                        arr_57 [i_0] [i_14] [i_13] [i_0] = (!var_4);
                    }
                }
            }
        }
        var_25 = var_0;
        arr_58 [i_0] = -147963401;
        var_26 ^= ((var_12 ? (arr_55 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 + 1]) : (arr_48 [i_0 + 1] [i_0])));
    }
    for (int i_16 = 2; i_16 < 13;i_16 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 14;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 14;i_18 += 1)
            {
                {
                    arr_65 [i_17] = var_4;
                    var_27 = (min(var_27, (((((var_5 - 1444704282) / (1318569116 / var_1)))))));
                    arr_66 [i_17] [i_16] = (((min((arr_7 [i_16] [i_17] [i_17] [i_18]), (arr_40 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]))) % (max(var_2, (arr_25 [i_18])))));
                }
            }
        }
        var_28 = (min(var_28, (min((((arr_52 [i_16 - 2] [i_16 - 1] [i_16]) ^ var_7)), (arr_62 [i_16 - 2] [i_16 - 2])))));
        var_29 = (min(var_29, 1));
    }
    var_30 = var_13;
    #pragma endscop
}
