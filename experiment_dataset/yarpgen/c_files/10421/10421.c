/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= -701164221284518884;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_15 = (max((701164221284518881 / 17592177655808), (((-(arr_2 [i_0]))))));
        var_16 = (min(var_16, ((((max((arr_2 [i_0]), 17592177655808)) | 128)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_17 = (max(var_17, (((+((-701164221284518899 ? (~103) : (max(-701164221284518884, var_7)))))))));

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_9 [i_2] [i_2] [i_2] |= ((min(var_12, var_2)));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [i_2] [i_3] [i_2] &= (max(6597131813602113232, 122));
                        var_18 = var_2;
                        var_19 += (arr_6 [i_4]);
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_20 = ((-((17592177655780 ? (arr_13 [i_1]) : 0))));

            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                var_21 = (max((-127 * var_5), (((arr_13 [i_6]) ? 1989666753 : (arr_14 [i_1] [1] [i_1] [i_1])))));
                var_22 = (arr_14 [i_1] [i_5] [i_6] [i_6]);

                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    var_23 = (!var_0);
                    var_24 = (((min(2783356980, var_9)) >= (!17002273930457880542)));
                    var_25 = var_8;
                    arr_25 [i_1] [i_6] [i_5] [i_1] = (max(-701164221284518872, 24));
                }
            }
            var_26 = ((var_10 ? (~701164221284518890) : (max((!var_3), (min(128, 17592177655791))))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_33 [i_1] [i_5] [i_1] [i_9] = 119;

                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 22;i_10 += 1) /* same iter space */
                        {
                            var_27 ^= var_0;
                            arr_36 [i_1] [i_1] [i_1] [i_1] = arr_29 [i_1] [i_5];
                            var_28 += 23;
                            arr_37 [i_1] [i_5] = ((~(arr_6 [i_1])));
                        }
                        for (int i_11 = 1; i_11 < 22;i_11 += 1) /* same iter space */
                        {
                            arr_40 [i_1] [i_5] [i_8] [i_9] [i_1] = 7778262483163521270;
                            var_29 = (min(var_29, (((((((((-701164221284518884 ? 701164221284518890 : 128)) > -259171901)))) <= (((arr_15 [i_1] [i_5] [i_8] [i_9] [i_11]) ? 1989666753 : (arr_18 [i_11]))))))));
                            arr_41 [14] [i_9] [i_8] [14] |= max(((((((arr_1 [i_8] [i_11 - 1]) + var_4))) - var_10)), ((((1 <= var_5) & ((var_0 ? var_9 : var_4))))));
                        }
                        for (int i_12 = 3; i_12 < 19;i_12 += 1)
                        {
                            arr_44 [i_12] [i_1] [i_8] [i_1] [i_1] = (max(192, 153));
                            arr_45 [i_1] [i_1] [i_1] [i_1] [i_1] = 119;
                            arr_46 [i_1] [i_1] [i_1] [16] [i_1] |= (var_12 >> (0 != -2138463211));
                        }
                        for (int i_13 = 2; i_13 < 21;i_13 += 1)
                        {
                            arr_50 [18] [i_5] |= 1178635366;
                            var_30 = var_12;
                        }
                    }
                }
            }
        }
        var_31 = var_12;
        arr_51 [i_1] = (((!-1) - (!-701164221284518884)));
    }
    for (int i_14 = 0; i_14 < 15;i_14 += 1)
    {
        arr_55 [i_14] [i_14] = ((((((!26359) * (((arr_31 [i_14] [i_14]) / -3269))))) + ((var_2 * ((32738 ? 97 : -2020607776643162245))))));
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 15;i_18 += 1)
                        {
                            {
                                arr_66 [i_18] [i_17] [i_16] [i_17] [i_14] = (var_1 != var_2);
                                var_32 -= (((min(var_7, -232)) & var_2));
                            }
                        }
                    }
                    arr_67 [i_14] = 18446744073709551595;
                    arr_68 [i_14] [i_14] [i_14] = ((~(!var_4)));

                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 15;i_19 += 1)
                    {
                        var_33 = (max(var_33, 2975097783));
                        var_34 ^= ((-18062 ? var_10 : 39186));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_20 = 0; i_20 < 11;i_20 += 1)
    {
        for (int i_21 = 0; i_21 < 11;i_21 += 1)
        {
            for (int i_22 = 1; i_22 < 10;i_22 += 1)
            {
                {
                    arr_78 [i_22] [i_21] [i_21] [i_20] = (var_13 % var_9);
                    var_35 = ((var_1 ? (!var_4) : (((((26322 << (288230376151709696 - 288230376151709692)))) ? (!var_11) : var_8))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_23 = 0; i_23 < 12;i_23 += 1)
    {
        for (int i_24 = 2; i_24 < 11;i_24 += 1)
        {
            {
                var_36 ^= var_1;
                var_37 = -2138463198;
            }
        }
    }
    var_38 = (~162);
    #pragma endscop
}
