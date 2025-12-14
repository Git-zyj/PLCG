/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = (max(0, ((((min(var_11, var_5))) ? (((var_11 ? 0 : var_6))) : (max(0, var_12))))));
        arr_3 [i_0] = (min(((1 ? var_12 : 26)), var_11));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] = ((((16384 ? var_11 : var_6))) ? (var_12 ^ var_11) : var_6);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_15 = (((var_8 || var_1) || 1));
                        arr_11 [i_3] = (var_9 + var_9);
                    }
                }
            }

            for (int i_4 = 3; i_4 < 14;i_4 += 1)
            {
                arr_14 [i_0] [i_0] [i_0] [i_1] = ((var_1 ? (((var_11 ? var_9 : var_8))) : var_0));
                arr_15 [i_0] [i_0] [i_0] = (((((var_6 ? 1 : var_9))) != var_10));
            }
            arr_16 [i_0] [i_0] [i_0] = ((~(98 >= var_0)));
            var_16 = var_0;
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            arr_19 [i_0] [i_0] [i_5] = (var_2 < var_6);
            arr_20 [i_0] [i_0] [i_0] = 22;
            arr_21 [i_0] [i_0] = ((-var_2 ? ((var_1 ? 345389246 : var_10)) : (((32767 >> (var_11 + 1350523850))))));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            arr_25 [i_0] = (((var_11 + var_7) ? (((-345389258 ? -1261038738 : -19188))) : var_0));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_17 = (min(729255329, (max(((var_10 ? var_8 : var_12)), (((279839970 ? var_11 : var_8)))))));
                            var_18 = (26874 ? 49140 : -84);
                            arr_34 [i_6] [i_6] [i_6] = var_9;
                        }
                    }
                }
            }
            arr_35 [i_0] [i_0] [i_0] = ((-391502380 ? var_12 : ((max(0, -345389251)))));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
        {
            var_19 = var_12;
            var_20 = ((((var_8 ? ((var_9 ? var_5 : var_2)) : (26874 == var_9))) + (((min(var_10, -345389232)) * var_4))));
            arr_39 [2] &= (((max(((var_8 ? var_5 : var_2)), (((var_2 ? var_7 : var_8))))) + (var_0 & var_2)));
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        var_21 = (max(((((max(var_1, 9666))) ? 9666 : var_11)), ((var_9 % (var_10 != 9666)))));
                        arr_46 [i_10] = ((var_3 ? ((min((var_1 - var_7), var_9))) : ((345389240 ? ((-14610 ? 1023 : 18446744073709551615)) : ((var_2 ? var_3 : var_10))))));
                    }
                }
            }
        }
        var_22 &= ((((min(1, -var_7))) ? (min(((var_1 ? 5765520371386791255 : var_4)), ((566727739 ? 2351692836991656903 : var_12)))) : (((var_11 ? var_2 : 65520)))));
    }
    /* LoopNest 2 */
    for (int i_13 = 3; i_13 < 22;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 22;i_14 += 1)
        {
            {
                arr_51 [i_13] [i_13] [i_13] = (((((729255315 & (3412180526 ^ -345389251)))) ? ((((max(-15902, 16))))) : ((-345389232 ^ ((var_11 ? var_11 : var_5))))));
                arr_52 [i_13] = (((var_8 || 2147483647) ? ((max(var_6, (var_3 / var_8)))) : var_0));
                arr_53 [i_14 - 1] [i_14 - 1] [i_14 - 1] = (((var_8 ? var_11 : var_1)) != (26870 ^ var_6));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 3; i_15 < 15;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 19;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        {
                            var_23 = ((max(var_4, var_8)));
                            arr_65 [i_15 - 3] = (var_11 % var_6);
                            arr_66 [i_17] [i_16] [i_16] [i_17] = (max((((-345389232 ? 1023 : var_3))), 3565711966));
                        }
                    }
                }

                for (int i_19 = 0; i_19 < 19;i_19 += 1)
                {
                    arr_70 [i_15] [i_16] [i_19] = 16;
                    var_24 = ((((((((var_11 ? var_9 : var_8))) ? (var_5 <= -1515637434) : ((var_4 ? 4095 : var_8))))) ? var_1 : var_12));
                }
                /* vectorizable */
                for (int i_20 = 0; i_20 < 19;i_20 += 1)
                {
                    arr_73 [i_15] [i_16] [i_20] = (var_8 & var_5);
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 19;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 19;i_22 += 1)
                        {
                            {
                                arr_79 [i_16] = (!(((var_7 ? var_1 : 1515637433))));
                                var_25 = (((((3558684964 ? 345389246 : var_9))) || var_8));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 1;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 1;i_24 += 1)
                    {
                        {
                            var_26 = (16668 ? 65520 : 16095051236717894712);

                            for (int i_25 = 0; i_25 < 19;i_25 += 1)
                            {
                                var_27 -= min(2351692836991656898, 65011712);
                                var_28 = (((((var_7 ? var_0 : 15))) ? ((-16681 ? var_7 : var_5)) : var_0));
                                arr_87 [i_15 - 3] [i_15 + 2] [i_15 + 2] [i_15 - 3] [i_24] [i_15 - 3] [i_24] = var_7;
                                var_29 = 16095051236717894692;
                                arr_88 [i_15] [i_15] [i_23] [i_15] [i_15] [i_23] = ((-((var_9 ? var_5 : (((4294967293 ? var_9 : var_8)))))));
                            }
                            var_30 = (min(((max(((var_7 ? var_9 : var_2)), (18446744073709551609 || 16990)))), (max(((max(0, 1))), 18446744073709551599))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
