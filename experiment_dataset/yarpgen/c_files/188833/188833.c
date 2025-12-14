/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= -0;
    var_14 &= var_8;
    var_15 = (max(var_15, var_12));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
        var_16 = ((!(~1336229472625211067)));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 ^= (min((0 + 0), ((max(-64, 0)))));
                    arr_11 [1] [i_1 - 3] [1] [i_0] = ((arr_4 [i_0] [i_1] [i_2]) != ((-(min((arr_7 [i_0] [i_0] [i_0]), (arr_7 [12] [i_0] [i_2]))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        arr_14 [i_3] = (~var_2);

        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
        {
            var_18 |= (arr_6 [i_4]);
            var_19 = ((((arr_15 [i_4]) % var_4)));

            for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
            {
                arr_21 [i_3 + 1] [i_3] [i_3] [i_5] = (((arr_20 [i_3 + 1] [i_3 + 1] [i_3 + 1]) ? ((var_9 ? 0 : (arr_8 [2] [i_5]))) : (arr_17 [i_5] [i_4] [i_3 + 1])));
                arr_22 [8] [8] [i_5] |= var_3;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_20 = var_6;
                            var_21 -= ((~(arr_27 [i_7] [i_7] [i_7 - 4] [i_7 - 2] [i_7 - 4])));
                            var_22 = (min(var_22, (~var_9)));
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
            {
                var_23 = (max(var_23, 0));
                var_24 |= -var_6;
            }
            var_25 = var_12;
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            arr_42 [i_11] [i_11] [i_10] [i_11] = (arr_27 [i_3 + 1] [i_3 + 1] [i_10] [7] [i_9]);
                            var_26 = (min(var_26, (!-1576612738)));
                        }
                        arr_43 [i_11] = var_3;
                    }
                }
            }
            arr_44 [i_3 + 1] [i_3 + 1] = (~var_8);
            var_27 = arr_29 [i_3];
        }
        for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
        {
            var_28 = (arr_2 [i_3 + 1]);

            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 4; i_15 < 9;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 12;i_16 += 1)
                    {
                        {
                            var_29 *= (((~-16) ? (arr_37 [i_15] [i_13]) : (arr_37 [i_14] [i_14])));
                            var_30 = (max(var_30, (arr_37 [i_13] [i_15 - 2])));
                            arr_54 [i_3] [i_13] [i_13] [5] [i_16] = (+(((arr_17 [2] [2] [0]) ? var_7 : 65390)));
                            arr_55 [i_16] [i_13] [i_16] [8] [9] [i_15 + 3] [9] = var_5;
                        }
                    }
                }
                var_31 = (((arr_49 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_13]) % (arr_46 [i_3])));
            }
            for (int i_17 = 0; i_17 < 12;i_17 += 1) /* same iter space */
            {
                var_32 = ((var_2 ? (arr_12 [i_3 + 1]) : var_8));
                var_33 = (arr_13 [i_3]);
                var_34 ^= (((((var_8 ? var_3 : var_1))) ? (arr_27 [i_13] [i_3 + 1] [i_13] [i_3 + 1] [i_3 + 1]) : (((!(arr_26 [1] [1] [1] [i_3 + 1] [i_3]))))));
                var_35 = (arr_28 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3 + 1]);
            }
            for (int i_18 = 0; i_18 < 12;i_18 += 1) /* same iter space */
            {

                for (int i_19 = 0; i_19 < 12;i_19 += 1)
                {
                    arr_65 [1] [i_13] [i_18] [i_13] [i_3] [0] = (arr_5 [9]);
                    var_36 = ((arr_47 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1]) ? (arr_47 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) : (arr_53 [i_3 + 1] [i_3 + 1] [i_3 + 1] [9] [i_3 + 1] [i_13]));
                }
                var_37 = (min(var_37, var_11));
            }
        }
        arr_66 [11] [i_3] = (arr_48 [i_3] [i_3] [i_3 + 1]);
        arr_67 [8] = (arr_0 [2]);
    }
    #pragma endscop
}
