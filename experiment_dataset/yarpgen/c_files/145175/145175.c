/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    var_19 &= var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_20 = (var_8 >> var_12);
                    var_21 = (min(var_21, ((((var_5 == var_13) ? var_5 : var_10)))));
                }
                var_22 += (max((max((var_3 + var_6), (max(var_13, var_5)))), (var_12 / var_9)));
                arr_6 [i_1] [i_0] = (max((((((var_2 ? var_17 : var_17)) != ((max(var_6, var_0)))))), (((var_1 - var_6) ? var_15 : (((var_12 ? var_10 : var_2)))))));
                /* LoopNest 2 */
                for (int i_3 = 4; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 21;i_5 += 1)
                            {
                                var_23 = (max(var_23, (((((var_15 ? var_11 : var_16)) | (var_10 | var_9))))));
                                arr_13 [i_0] [i_5] = ((((var_4 << (var_8 - 13248827910640610390)))) * var_11);
                                var_24 = (min(var_24, (((1 + (16921 << 1))))));
                            }
                            arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (((max(2305843008676823040, 2305843008676823040)) >= ((var_16 ? var_12 : var_3))));
                        }
                    }
                }

                for (int i_6 = 3; i_6 < 20;i_6 += 1)
                {
                    var_25 *= (((var_10 ? var_7 : (max(var_13, var_7)))) == (29360128 ^ 18446744073709551615));
                    var_26 = (min(var_26, ((max((max(var_16, (min(var_10, var_13)))), (((((var_0 ? var_0 : var_8))) ? (var_4 & var_5) : (max(var_0, var_16)))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_27 = (min(var_27, var_8));
                                var_28 ^= ((((((3391863935 ? 18014261070528512 : 3)) + ((max(var_14, var_10))))) - (max((max(var_6, var_3)), (((var_7 ? var_11 : var_12)))))));
                                var_29 += (((((var_4 ? var_14 : var_10))) ? (((min((var_17 >= var_3), var_12)))) : ((var_3 ? var_12 : var_16))));
                                arr_23 [i_0] [i_7] [i_6 + 1] [i_7] [5] = ((((max((max(2, 10140409231460046906)), -24))) ? (((var_2 - var_2) + (max(var_16, var_6)))) : (((var_13 != var_7) ? (var_2 == var_12) : var_15))));
                            }
                        }
                    }
                    var_30 = (min(var_30, (((((min(var_5, var_0))) ? (var_4 < var_2) : (var_8 > var_0))))));

                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {

                        for (int i_10 = 2; i_10 < 19;i_10 += 1) /* same iter space */
                        {
                            arr_31 [i_9] &= (max((((((var_6 ? 43526 : 1))) & (var_8 + var_16))), ((((max(var_11, var_1)) + var_5)))));
                            arr_32 [i_10] [i_1] [i_6 + 1] [i_9] [i_10 - 2] [i_10] = ((((min(var_11, var_5))) || ((min(var_9, var_14)))));
                            var_31 = var_8;
                            var_32 = (((((var_9 * var_15) * var_12)) % (((min(var_0, var_1))))));
                        }
                        for (int i_11 = 2; i_11 < 19;i_11 += 1) /* same iter space */
                        {
                            arr_35 [i_9] [i_11] = (min((min((((var_10 ? var_9 : var_17))), ((var_0 ? var_2 : var_3)))), ((max(var_1, ((3 ? 8275703523171341821 : -4)))))));
                            var_33 = ((((((1 ? -4937 : -4937)) + 2147483647)) >> (var_10 != var_5)));
                            var_34 ^= ((((max(var_1, var_13))) ? (((var_2 ? var_17 : var_0))) : (var_4 % var_16)));
                        }
                        arr_36 [i_1 + 1] [8] [11] [i_9] [i_0] [i_9] = (max(((max((1 != -3), -35))), (min(((max(33169, 3))), (65522 + 65524)))));
                        var_35 = (max((var_17 | var_13), (max(var_13, (var_10 & -4937)))));
                        arr_37 [i_0] [i_0] [i_0] = (max((max(var_14, ((var_17 ? var_8 : var_6)))), ((max((var_13 == var_5), (var_10 - var_11))))));
                        arr_38 [i_0] [i_0] [i_6] [i_9] [i_0] = (((((((max(var_4, var_13))) ? (max(4, 2221532664)) : (((max(var_2, var_0))))))) ? ((((max(var_13, var_17))) ? var_17 : (max(var_4, var_3)))) : (1 & 28407)));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {

                        for (int i_13 = 3; i_13 < 17;i_13 += 1)
                        {
                            var_36 = ((1 ? 2 : 1));
                            var_37 = (min(var_37, ((((122 - 18446744073709551601) < var_2)))));
                            var_38 = (min(var_38, (var_9 + var_12)));
                        }
                        for (int i_14 = 0; i_14 < 0;i_14 += 1)
                        {
                            var_39 = (min(var_39, ((var_17 ? var_1 : var_11))));
                            var_40 = (min(var_40, (((var_17 >> (var_7 - 31750))))));
                            arr_49 [i_0] [i_0] [i_0] [i_12] [i_12] [i_0] [i_12] = ((var_5 + ((var_0 ? var_4 : var_13))));
                        }
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            var_41 ^= var_6;
                            var_42 = (min(var_42, (33500 / 209)));
                            arr_52 [i_0] [i_1] [i_12] [i_12] [i_15] = var_13;
                        }

                        for (int i_16 = 0; i_16 < 21;i_16 += 1)
                        {
                            var_43 = (min(var_43, var_12));
                            var_44 = ((var_1 ? var_9 : var_8));
                            arr_55 [i_12] [i_1 - 1] [i_6] [i_12] [i_0] [i_6 - 3] = ((14499 ? 4956 : 0));
                            arr_56 [i_12] [i_12] [i_12] [15] = ((var_5 << (var_10 - 3623286336)));
                        }
                        for (int i_17 = 2; i_17 < 19;i_17 += 1)
                        {
                            var_45 = (min(var_45, var_16));
                            arr_59 [i_17] [i_12] [i_12] [i_1] = (((((var_6 ? var_13 : var_15))) ? (var_10 == var_4) : var_3));
                        }
                        var_46 = ((var_11 ? var_13 : var_8));
                        var_47 = ((var_16 ? var_5 : var_13));
                    }
                    for (int i_18 = 1; i_18 < 1;i_18 += 1)
                    {
                        arr_64 [i_18] [15] [i_1] = (((var_0 + var_11) ? ((max(0, 8275703523171341806))) : (max(var_3, var_15))));
                        var_48 &= (((((18446744073709551614 ? 4332679928923133061 : 1))) ? 65524 : 20438));
                        var_49 = ((var_11 || (((var_11 || var_7) || var_16))));
                        arr_65 [i_0] [i_1] [i_6] [4] [4] [i_1] = (max(((var_9 ? var_16 : var_10)), (((var_8 ? var_1 : var_4)))));
                        arr_66 [i_0] [i_0] [i_0] [i_0] [i_0] [6] = (max((max(45112, 18446744073709551613)), var_8));
                    }
                    for (int i_19 = 0; i_19 < 21;i_19 += 1)
                    {
                        arr_70 [i_19] [i_6 - 2] [i_1 - 1] = (min((((((var_0 ? var_17 : var_8))) ? var_12 : ((var_6 ? var_1 : var_13)))), (max(var_15, var_15))));

                        for (int i_20 = 0; i_20 < 21;i_20 += 1)
                        {
                            var_50 = (min(var_50, ((max((min(((max(var_2, var_6))), var_15)), ((min(1, 37128))))))));
                            arr_74 [i_20] [i_20] [i_20] [i_20] [0] = max((min(var_13, var_1)), (max(var_13, var_7)));
                            var_51 ^= ((((max((25729 && -4937), (var_7 + var_11)))) ? (((((max(var_14, var_9))) - ((max(65528, 65533)))))) : (((((4358630536071316977 ? 219433515 : 9223372036854775801))) ? (var_2 - var_16) : (((var_13 ? var_5 : var_11)))))));
                            var_52 ^= (max((var_7 ^ var_6), (max((var_9 >> var_6), ((max(var_9, var_12)))))));
                        }
                        arr_75 [i_0] [i_0] [i_0] [i_0] &= (((max(var_3, var_16))) ? (((var_15 ? ((var_17 ? var_17 : var_12)) : ((1 ? 1 : 116))))) : (max(var_17, var_3)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
