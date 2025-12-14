/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (~var_17);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0 + 1] = var_16;
        var_21 *= (var_6 & var_14);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_22 = ((var_6 ^ var_4) ? var_15 : (var_10 != var_5));
                    var_23 = (max(var_23, (var_11 - -var_16)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 20;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 21;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_24 = (max(var_24, var_2));
                                var_25 = var_0;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 21;i_9 += 1)
                        {
                            {
                                arr_28 [i_4] [i_8 + 1] [i_5] [i_4] [i_4] = var_11;
                                arr_29 [i_4] [i_4] [i_8] [i_8] [i_8] |= (!var_17);
                            }
                        }
                    }

                    for (int i_10 = 4; i_10 < 20;i_10 += 1) /* same iter space */
                    {

                        for (int i_11 = 2; i_11 < 20;i_11 += 1)
                        {
                            var_26 = (min(var_26, ((((var_5 ? var_17 : var_10)) % -var_18))));
                            arr_36 [i_4] [20] [i_10] [20] [i_11] [i_10] [i_11] = var_16;
                        }
                        for (int i_12 = 1; i_12 < 19;i_12 += 1)
                        {
                            arr_41 [i_4] [i_4] = (var_4 * var_13);
                            arr_42 [i_3] [i_3] [i_4] [10] [i_12] = (var_6 / var_12);
                            var_27 = (min(var_27, var_10));
                            arr_43 [i_4] = ((-(!var_5)));
                        }
                        arr_44 [i_4] [i_4] [i_4] [i_4] = var_3;
                    }
                    for (int i_13 = 4; i_13 < 20;i_13 += 1) /* same iter space */
                    {
                        arr_47 [i_3] [i_4 + 1] [i_4] [i_4] [i_3] &= var_3;
                        var_28 *= var_9;

                        for (int i_14 = 1; i_14 < 21;i_14 += 1) /* same iter space */
                        {
                            var_29 = (var_16 ? var_5 : (var_1 % var_19));
                            arr_51 [i_3] [i_13 + 2] [i_3] &= ((10 ? 18050579244910523330 : (-2147483647 - 1)));
                            arr_52 [i_4] [i_4] [i_4] [i_13] [i_4] = var_4;
                            arr_53 [i_3] [i_3] [i_3 + 2] [i_3 + 2] [i_4] = (var_1 != var_16);
                        }
                        for (int i_15 = 1; i_15 < 21;i_15 += 1) /* same iter space */
                        {
                            arr_57 [i_3] [i_4] [i_5 - 1] [i_13] [i_4] = ((~(var_19 < var_17)));
                            arr_58 [8] [i_15] [i_3] [i_13] &= (((var_12 + 2147483647) >> (var_1 + 896340787)));
                            var_30 |= var_0;
                            arr_59 [i_3] [i_4] [i_5] [i_3] [i_13 - 4] [i_4] [i_15] = (var_10 >= var_3);
                        }
                    }
                    for (int i_16 = 4; i_16 < 20;i_16 += 1) /* same iter space */
                    {
                        arr_62 [i_3] [i_3 - 2] [i_3] [i_3] &= (((-2147483647 - 1) & 3589575166));
                        arr_63 [i_3] [i_4] [i_5] [i_4] [i_16] = (var_12 | var_4);
                    }
                    arr_64 [i_4] [i_4 + 1] [i_5] = (var_14 << (var_9 - 10668679267689493558));
                }
            }
        }
        var_31 = (max(var_31, var_19));
        arr_65 [i_3] [i_3] &= var_2;
        arr_66 [i_3] = (705392130 && 255);
        var_32 = (48 ^ var_1);
    }
    for (int i_17 = 4; i_17 < 18;i_17 += 1)
    {
        arr_71 [i_17 + 1] &= ((-(var_11 / var_14)));
        /* LoopNest 2 */
        for (int i_18 = 2; i_18 < 20;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 20;i_19 += 1)
            {
                {
                    arr_77 [i_17] [i_17] [i_17] = ((!(var_12 || var_16)));
                    var_33 = (~((max(var_10, var_13))));
                    arr_78 [i_17] = (((((((((-94543167 + 2147483647) >> (18050579244910523341 - 18050579244910523338)))) == (max(var_3, var_12))))) << (((var_4 + var_7) - 3128582186))));

                    for (int i_20 = 2; i_20 < 20;i_20 += 1)
                    {
                        var_34 = (max(var_34, (((((max(var_10, var_17))) && (var_6 || var_5))))));
                        var_35 = (28 * -1);
                    }
                }
            }
        }
    }
    for (int i_21 = 1; i_21 < 22;i_21 += 1)
    {
        var_36 = (min(var_11, var_8));
        arr_85 [i_21] = (((max(-5969319582030485543, 12))) ? (min(-5969319582030485543, 24)) : (((-(var_6 <= var_14)))));
        var_37 = (max((var_17 | var_17), ((((-2207200918336183796 + 9223372036854775807) << (4294967272 - 4294967272))))));
        arr_86 [i_21] = var_6;
    }
    var_38 = ((((var_8 ^ var_5) + 9223372036854775807)) >> ((((((max(var_1, var_1))) ? var_15 : var_7)) - 79)));
    #pragma endscop
}
