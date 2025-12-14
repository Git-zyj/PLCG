/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((min(var_8, (var_14 | var_15))), ((min(-var_1, (var_7 || var_10))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [1] [i_2] = var_12;
                        var_17 = var_7;
                    }
                }
            }
        }

        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_18 = (min(var_18, (((~(var_1 || var_4))))));
                arr_17 [i_0] [i_4 + 3] [i_0] = (var_11 - var_11);
                var_19 = (var_15 - var_10);
                var_20 = var_2;
            }
            arr_18 [i_4] [1] [i_4] |= (!var_3);
        }

        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_21 *= (var_1 <= var_10);
            arr_22 [i_0] [i_0 + 1] [i_0] = var_2;
            var_22 = (min(var_22, (((-(~var_2))))));
            arr_23 [i_0] [7] = (var_12 / var_5);
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            arr_26 [i_0] = (var_13 == var_13);
            arr_27 [i_0] = (var_2 * var_2);

            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                var_23 *= (var_2 | var_12);
                var_24 = (!var_5);
                var_25 = (var_11 >= var_2);
            }
            for (int i_9 = 2; i_9 < 21;i_9 += 1)
            {
                var_26 ^= (var_12 | var_13);

                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    var_27 = var_6;
                    var_28 = (var_11 & var_3);
                    var_29 = (max(var_29, var_14));
                    arr_36 [i_0] = (((var_4 & var_10) % var_8));
                }
                var_30 &= (!var_13);
            }
            var_31 = var_6;
        }
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            arr_41 [i_0] = (var_10 + var_9);

            for (int i_12 = 2; i_12 < 20;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        {
                            var_32 = ((var_11 << (!var_3)));
                            var_33 = -var_5;
                            var_34 -= var_5;
                            var_35 = var_3;
                            var_36 = (var_12 + var_3);
                        }
                    }
                }
                var_37 = ((var_2 >> (var_8 - 4612)));
            }
        }
        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            var_38 = ((!(var_6 && var_7)));
            /* LoopNest 2 */
            for (int i_16 = 1; i_16 < 19;i_16 += 1)
            {
                for (int i_17 = 4; i_17 < 19;i_17 += 1)
                {
                    {
                        var_39 = -var_4;

                        for (int i_18 = 0; i_18 < 23;i_18 += 1)
                        {
                            var_40 = ((var_10 > (~var_14)));
                            var_41 = (var_9 == var_5);
                            arr_61 [i_0] [i_0] [i_0] = -var_6;
                            var_42 += (var_10 - var_8);
                        }
                        for (int i_19 = 1; i_19 < 22;i_19 += 1)
                        {
                            var_43 = -var_14;
                            var_44 = (min(var_44, (var_2 >= var_4)));
                            arr_64 [i_17 - 2] [9] [i_16 - 1] [i_17] [i_0] [14] [i_0 + 1] = (var_15 != var_4);
                        }
                        for (int i_20 = 0; i_20 < 23;i_20 += 1)
                        {
                            var_45 = (var_13 + var_5);
                            var_46 = ((var_1 >> (var_11 - 119)));
                            arr_69 [i_0] [13] [i_16 + 1] [i_17 + 3] [i_20] [i_0] = (var_12 & var_9);
                        }

                        for (int i_21 = 1; i_21 < 22;i_21 += 1)
                        {
                            arr_72 [i_0] [5] [5] [i_17] [i_0] = (~var_5);
                            var_47 = (var_3 / var_1);
                            arr_73 [i_0] [i_0] [i_0] [i_16] [i_17] [16] = (~var_9);
                            var_48 = (min(var_48, -var_6));
                        }
                        for (int i_22 = 0; i_22 < 23;i_22 += 1)
                        {
                            var_49 = var_10;
                            var_50 ^= (var_3 ^ var_12);
                        }
                        var_51 = (!var_6);
                        var_52 *= var_4;
                    }
                }
            }
            arr_76 [i_0] [12] = (!var_10);
            var_53 = (var_4 - var_15);
        }
        arr_77 [i_0] = (var_4 != var_4);
        var_54 = (!var_2);
    }
    for (int i_23 = 0; i_23 < 24;i_23 += 1)
    {

        for (int i_24 = 0; i_24 < 24;i_24 += 1)
        {
            /* LoopNest 2 */
            for (int i_25 = 0; i_25 < 24;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 24;i_26 += 1)
                {
                    {
                        var_55 &= (((min(((min(var_13, var_8))), (var_13 | var_13))) >= (var_3 != var_0)));
                        arr_91 [i_23] = var_12;
                        var_56 |= (var_7 % var_15);
                        var_57 += var_5;
                        var_58 = ((!((min(var_4, var_5)))));
                    }
                }
            }
            arr_92 [i_23] = -var_2;
        }
        /* LoopNest 2 */
        for (int i_27 = 1; i_27 < 22;i_27 += 1)
        {
            for (int i_28 = 2; i_28 < 23;i_28 += 1)
            {
                {
                    var_59 |= var_15;
                    /* LoopNest 2 */
                    for (int i_29 = 0; i_29 < 24;i_29 += 1)
                    {
                        for (int i_30 = 0; i_30 < 24;i_30 += 1)
                        {
                            {
                                var_60 = (max((var_0 - var_10), (max(var_3, var_13))));
                                var_61 = (max(var_61, (((((((var_14 != var_12) << ((((min(var_10, var_0))) - 42166))))) & ((var_3 - (((min(var_12, var_6)))))))))));
                                var_62 |= (max(((min(var_12, var_7))), (min((var_13 == var_5), var_9))));
                            }
                        }
                    }
                    var_63 = min((max((!var_10), (max(var_0, var_4)))), (((-(var_12 * var_2)))));

                    /* vectorizable */
                    for (int i_31 = 0; i_31 < 24;i_31 += 1)
                    {
                        arr_106 [i_31] [i_27] [i_28] = (((var_9 ^ var_14) % var_8));
                        var_64 = var_1;
                    }
                    for (int i_32 = 0; i_32 < 24;i_32 += 1)
                    {
                        arr_110 [i_23] = (min((!var_4), var_13));
                        var_65 = (min((min((min(var_9, var_11)), (var_5 && var_6))), (((((min(var_1, var_0))) && ((min(var_15, var_5))))))));
                    }
                }
            }
        }
        var_66 = (max(((var_13 << (var_14 - 3951880667))), var_15));
        var_67 *= (max((var_9 & var_11), ((max(var_13, var_0)))));
    }
    var_68 = (((((max((var_7 && var_8), var_6)))) >= var_14));
    #pragma endscop
}
