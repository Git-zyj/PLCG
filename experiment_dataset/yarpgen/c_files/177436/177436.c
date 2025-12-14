/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [10] = (arr_7 [i_0] [i_1]);
                        var_18 = ((!(1 <= var_17)));
                        var_19 = (arr_1 [i_2]);
                    }
                }
            }
            arr_12 [i_0] = (986966565 - 153);
            var_20 = var_5;
        }
        var_21 *= (((-(var_1 >> 0))));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_22 = (max(var_22, var_4));
            arr_17 [i_4] = ((var_14 << (((arr_13 [i_5] [i_4]) - 105))));
            var_23 += (arr_14 [i_4]);
            var_24 = (((!var_14) ? ((1 ? -28857 : 1)) : (((var_14 < (arr_15 [i_5]))))));
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_25 = (arr_1 [i_4]);
            var_26 = (min(var_26, (((~(((0 + 15891672479322902473) ? (((~(arr_10 [i_4] [i_6] [i_6] [8])))) : 1799824211288022866)))))));
            var_27 = (((((0 ? 1 : ((~(arr_5 [i_4])))))) ? (((min(1, (var_1 != var_15))))) : ((~((2147483647 ? var_7 : 1))))));
        }
        arr_21 [i_4] = ((var_15 ? (221 - 9223372036854775807) : 15891672479322902473));
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
    {
        var_28 = (min((var_0 + var_11), 18446744073709551615));
        var_29 = (min(var_2, (min((((-9223372036854775807 - 1) ? 4294967293 : 32749)), (arr_22 [i_7])))));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    {
                        arr_34 [i_7] [i_8] [i_9] [1] [3] = 0;
                        var_30 = ((!((min(0, (min(78, 2147483647)))))));
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {
                {
                    var_31 ^= (((min((arr_43 [i_11]), var_7)) + 15));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            {
                                arr_50 [i_11] [22] [2] [i_11] [i_11] = var_5;
                                var_32 |= (((min(var_10, var_16))));
                                var_33 *= (max((((arr_46 [9] [i_12] [9] [i_14]) ? var_1 : (arr_41 [i_14]))), ((((min(0, (arr_48 [i_11] [i_11] [i_11] [i_11])))) ? (~var_13) : (arr_48 [i_12] [5] [i_14] [i_15])))));
                                var_34 += (~((~(arr_37 [i_11] [i_14]))));
                                arr_51 [i_11] [i_11] [i_13] [i_14] [i_15] = (arr_38 [i_15]);
                            }
                        }
                    }
                    var_35 = (((((arr_38 [i_11]) / (arr_38 [i_11]))) != 1));
                    var_36 = (!var_1);

                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        var_37 -= (max(((-(arr_49 [14] [i_12] [i_13] [14] [i_16]))), var_0));
                        var_38 = var_17;
                        arr_56 [21] = max(((~(arr_35 [i_11] [i_16]))), var_3);

                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 23;i_17 += 1)
                        {
                            var_39 = var_0;
                            var_40 = (max(var_40, ((((arr_43 [i_12]) | var_2)))));
                        }
                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            var_41 = (min(var_41, (!var_13)));
                            var_42 = ((((max(var_1, 32763))) * (((0 != (arr_45 [i_11] [i_11] [i_18] [i_11] [22] [i_18]))))));
                            var_43 -= ((~(min(var_16, (arr_60 [i_13] [4] [i_13] [i_11] [i_11])))));
                            arr_61 [i_11] [i_12] [i_13] [15] [i_11] [i_18] [i_18] = (arr_40 [i_13] [i_18]);
                            arr_62 [i_16] = (arr_35 [i_13] [i_13]);
                        }
                        /* vectorizable */
                        for (int i_19 = 0; i_19 < 1;i_19 += 1)
                        {
                            var_44 += 1;
                            var_45 = var_17;
                        }
                        for (int i_20 = 0; i_20 < 23;i_20 += 1)
                        {
                            var_46 = ((0 ? 1 : 0));
                            var_47 += (~249);
                        }
                        arr_70 [i_11] [i_11] [i_11] [i_11] = var_5;
                    }
                    for (int i_21 = 0; i_21 < 23;i_21 += 1)
                    {
                        var_48 += arr_53 [i_11] [i_11] [i_11];
                        arr_73 [i_11] [i_12] [i_12] [i_21] |= (!(~4294967295));
                    }
                    for (int i_22 = 0; i_22 < 23;i_22 += 1)
                    {
                        arr_76 [i_11] [i_13] [i_12] [i_11] [i_11] = 0;
                        var_49 = (((((((min(var_8, (arr_52 [i_11] [i_12] [i_13] [i_11])))) ? (arr_47 [i_11] [i_12] [i_12]) : (arr_41 [i_11])))) != (arr_60 [12] [12] [i_12] [i_13] [i_22])));
                        var_50 = ((((1 ? 0 : (arr_40 [i_13] [i_11]))) >= ((max((arr_46 [3] [i_12] [i_12] [i_12]), (arr_46 [i_11] [i_12] [i_13] [i_13]))))));
                        arr_77 [i_11] [5] [i_12] [i_12] [i_13] [i_12] = ((var_17 ? ((((((arr_67 [i_11] [i_12] [i_12] [i_13] [i_13]) << (((-127 - 1) + 137))))) ? 8608271310165635919 : (((max(1, var_17)))))) : (1584326624 | var_11)));

                        for (int i_23 = 0; i_23 < 1;i_23 += 1)
                        {
                            var_51 = (min((max(18446744073709551594, (arr_57 [i_11] [i_12] [i_12] [i_13] [i_22] [1] [i_23]))), var_1));
                            var_52 = (~4);
                            var_53 = ((arr_43 [i_22]) < (arr_71 [i_22] [7] [i_12] [i_11]));
                            var_54 *= (min(-31228, -1922258450));
                        }
                    }
                    for (int i_24 = 0; i_24 < 23;i_24 += 1)
                    {
                        arr_82 [19] = ((((max((arr_79 [i_11] [1] [i_13] [16] [i_13] [i_24] [i_13]), var_5))) != (((arr_48 [i_11] [i_12] [i_13] [i_24]) ? (arr_79 [i_13] [i_13] [i_13] [10] [i_13] [i_13] [i_13]) : var_3))));
                        var_55 = ((((!((max(var_11, -112))))) ? (arr_65 [i_13]) : -2059157593));
                    }
                }
            }
        }
        arr_83 [i_11] = (max(((((min(var_11, (arr_75 [i_11] [i_11] [i_11] [i_11])))) ? (!2904917416) : ((~(arr_41 [i_11]))))), 9868925501038629558));
    }
    var_56 |= var_5;
    var_57 = var_2;
    #pragma endscop
}
