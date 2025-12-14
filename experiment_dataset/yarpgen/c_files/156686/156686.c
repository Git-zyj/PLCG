/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        {
                            var_10 ^= ((102 ? (arr_8 [i_0 - 4] [i_0]) : var_7));
                            var_11 = (min(var_11, -var_4));
                            arr_12 [i_0 - 3] [i_1 - 1] [i_2] = -24687;
                        }
                    }
                }
            }
            var_12 += ((-74 ? 5894 : 92));
            var_13 = (((var_7 ^ var_6) ? (arr_11 [i_0 - 4] [i_0 - 4] [i_1]) : -204));
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            arr_16 [i_0 - 2] [i_5] [i_5] = -42;
            var_14 = (arr_10 [i_5] [i_5] [i_5] [i_0] [i_0]);
            arr_17 [i_5] [i_5] = (((arr_9 [i_0 - 3] [i_0 - 3]) <= (~128)));

            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                var_15 = (min(var_15, (52 <= 75)));
                arr_21 [i_0] [i_5] [11] [11] = (-(arr_8 [i_0 - 2] [i_0 + 1]));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 8;i_8 += 1)
                    {
                        {
                            var_16 = (min(var_16, (((var_0 ? (arr_5 [i_8 + 2] [8] [i_0 - 4]) : 5893)))));
                            arr_26 [i_5] [i_6] [2] = (!var_7);
                            var_17 = (min(var_17, 145));
                            arr_27 [0] |= (((arr_24 [i_0 + 1] [i_0 - 3] [3] [i_8 - 1]) ? var_3 : ((var_1 ? var_2 : (arr_4 [i_0 - 2] [i_0 - 2] [i_7])))));
                        }
                    }
                }
                arr_28 [i_0 - 4] [i_5] [i_6] &= (25888 - var_5);
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 8;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 8;i_10 += 1)
            {
                {
                    var_18 = (max(var_18, (((arr_5 [i_10] [i_10] [i_10 + 2]) & var_0))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            {
                                var_19 &= (((((arr_32 [i_0] [i_0] [i_0]) ^ 81)) >> (((arr_8 [i_0 + 1] [i_9 - 3]) + 139))));
                                var_20 += (!27);
                            }
                        }
                    }
                    var_21 += (-((~(-32767 - 1))));
                    var_22 = (var_7 >> 52);

                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        var_23 -= var_9;

                        for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
                        {
                            arr_47 [i_0 - 4] [i_0] [i_0] [i_0] [i_10] = (((arr_8 [i_0 - 3] [i_9 + 4]) ? 87 : (arr_20 [i_0 - 4] [i_0 - 1] [i_9 + 2])));
                            var_24 = ((13230848816128846319 ? 86 : -5895));
                            arr_48 [i_0] [i_0] [i_13] [6] [4] [0] |= (-204 ? (arr_38 [i_0 - 1] [i_0 - 3] [i_14] [10] [i_9] [1]) : ((var_5 ? 193 : 201)));
                            var_25 = (max(var_25, ((((!var_6) ? var_8 : var_1)))));
                            var_26 = (5894 >= var_6);
                        }
                        for (int i_15 = 0; i_15 < 12;i_15 += 1) /* same iter space */
                        {
                            arr_53 [i_0 + 1] [i_0 - 3] [i_10] [i_0 - 1] [i_0 - 3] = (!var_4);
                            arr_54 [i_15] [i_13] [i_0] [0] [0] [i_15] &= var_4;
                        }
                        for (int i_16 = 0; i_16 < 12;i_16 += 1) /* same iter space */
                        {
                            var_27 = (((~var_1) ? ((1439775792 >> (218 - 191))) : var_8));
                            var_28 = (~-5894);
                            arr_59 [i_0] [i_10] [i_13] = 227;
                        }
                    }
                    for (int i_17 = 2; i_17 < 10;i_17 += 1)
                    {
                        arr_64 [i_17] [i_17] [i_10] [i_9 - 3] [i_0 + 1] = (!var_8);
                        var_29 *= 18102944263756068639;
                        arr_65 [i_0] &= (~var_9);
                    }
                }
            }
        }
        var_30 = (var_5 ? var_3 : var_0);
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 12;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 11;i_19 += 1)
            {
                {

                    for (int i_20 = 0; i_20 < 12;i_20 += 1)
                    {
                        var_31 += -10429;
                        var_32 = ((var_1 ? (arr_52 [i_0] [i_0 - 3] [i_19 - 1] [i_0 - 3] [i_19 - 1]) : 5894));
                    }
                    var_33 = (max(var_33, -175267895));
                    arr_75 [i_0 - 2] [i_19] [i_19] [i_19] = 48;
                    arr_76 [1] [i_19] [i_19 + 1] = (((~var_5) + ((1 ? 0 : 18102944263756068639))));

                    for (int i_21 = 0; i_21 < 12;i_21 += 1)
                    {
                        var_34 = (max(var_34, var_5));
                        arr_80 [i_19] [0] [i_19] [0] [i_0] [i_0] = (!22);
                    }
                    for (int i_22 = 0; i_22 < 12;i_22 += 1)
                    {
                        var_35 = (((arr_67 [i_0 - 4] [i_18] [i_19 - 1]) >> (((arr_18 [i_22] [i_0 - 2] [i_0]) - 174))));
                        arr_83 [i_0 + 1] [i_19] [i_19 + 1] [i_19 + 1] = 841134756;
                        arr_84 [i_19] [i_18] [i_18] [i_18] [i_19] = var_8;
                    }
                }
            }
        }
        var_36 -= ((var_3 ? (arr_18 [0] [i_0] [i_0 - 2]) : var_8));
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 13;i_23 += 1)
    {
        var_37 = ((123 ? 17745844586506116671 : 120));
        /* LoopNest 3 */
        for (int i_24 = 0; i_24 < 1;i_24 += 1)
        {
            for (int i_25 = 2; i_25 < 12;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 1;i_26 += 1)
                {
                    {

                        for (int i_27 = 3; i_27 < 12;i_27 += 1)
                        {
                            var_38 -= ((!(arr_94 [i_23] [i_25 - 1] [i_25 - 2] [i_25 - 1] [i_27] [i_27 - 1])));
                            arr_95 [i_23] [i_27] [i_26] [i_26] = ((-1 & (197 <= 218)));
                            var_39 ^= (((var_2 + 2147483647) >> ((((5881 ? -5894 : var_5)) + 5919))));
                            arr_96 [i_23] [i_23] [i_27] [8] [i_27 - 2] |= var_4;
                            arr_97 [2] [1] [i_27] [i_26] [i_27 - 3] = (var_5 ^ var_3);
                        }
                        arr_98 [1] [i_25] [i_23] [i_23] |= var_2;
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_28 = 0; i_28 < 11;i_28 += 1)
    {
        for (int i_29 = 0; i_29 < 11;i_29 += 1)
        {
            {
                var_40 = (min(var_40, (((~((((var_5 && (arr_101 [i_28] [i_28]))) ? ((52 ? 343799809953482976 : 112)) : -var_8)))))));
                var_41 = var_0;
            }
        }
    }
    var_42 = var_9;
    var_43 = (~var_9);
    var_44 = ((-5899 ? -20620 : var_3));
    #pragma endscop
}
