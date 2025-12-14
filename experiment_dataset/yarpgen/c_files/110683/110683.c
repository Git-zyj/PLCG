/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_17;
    var_20 += (((min(var_15, (max(17919640452736687803, var_11)))) + 17919640452736687803));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_21 = ((arr_0 [i_0 - 1] [i_0 - 1]) ? (arr_0 [i_0 - 1] [i_0 - 1]) : 30720);
        var_22 = (var_5 ? var_1 : 2262);
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_23 ^= (((arr_2 [i_2] [i_1 - 1]) ? var_12 : (189 + var_7)));
            var_24 = (max(var_24, (((((((arr_1 [i_1 - 1] [i_1 - 1]) ? (arr_1 [i_1 - 1] [i_1 - 1]) : (arr_1 [i_1 - 1] [i_1 - 1])))) ? (((534773760 ? ((254 ? 249 : 177)) : 18446744073709551610))) : 8101940277628554945)))));

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                var_25 = ((var_4 ? 1642 : (arr_8 [i_1 - 1])));
                var_26 = (!-534773788);
                var_27 -= (((arr_4 [i_3]) != ((~(arr_4 [i_3])))));
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_28 = var_11;
                arr_12 [i_1 - 1] [i_1] [1] = var_11;

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_29 = (((((!(arr_2 [i_1] [i_2])))) + ((-(arr_8 [i_2])))));
                        var_30 = ((~(!40131)));
                        var_31 |= (((-1393534001 + 40131) & ((var_15 + (arr_14 [i_1])))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_32 = (max(var_32, var_6));
                        var_33 = var_16;
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_34 = var_18;
                        var_35 = 17;
                    }
                    var_36 = (((arr_5 [i_1]) != (~54)));

                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 13;i_9 += 1)
                    {
                        var_37 = 4202954555;
                        var_38 += (arr_5 [i_2]);
                    }
                }
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    var_39 = (arr_23 [i_1 - 1] [i_1] [i_1] [i_1] [i_1]);
                    arr_28 [i_1] [i_1] = (((254 + -21) + (((32766 >= (var_11 % 9849446966445623149))))));
                    var_40 = ((var_14 ? (min(((var_2 >> (11988633831738494165 - 11988633831738494135))), ((max(54881, (arr_22 [i_1] [i_2] [i_4])))))) : 4276));
                }
                for (int i_11 = 1; i_11 < 14;i_11 += 1)
                {
                    var_41 = var_8;
                    var_42 = (((((var_10 <= (var_15 <= 201)))) >= (arr_4 [i_1])));
                }
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        {
                            var_43 = 17919640452736687792;
                            var_44 = (((var_0 + 1) ? (min(-3859, 3528257447)) : (((var_7 | (arr_20 [i_1] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_1 - 1] [i_1] [12]))))));
                        }
                    }
                }
            }
        }

        for (int i_14 = 3; i_14 < 11;i_14 += 1) /* same iter space */
        {
            var_45 = (max(((max(var_6, var_14))), ((min(1, 54881)))));
            var_46 = 27167;
            var_47 = (((((237 ? 9946478250638708384 : 26361))) ? var_11 : (var_0 ^ 249)));
            var_48 = (min(var_48, -17481061404541691038));
            arr_39 [i_1] [i_1 - 1] [i_1] = 137;
        }
        for (int i_15 = 3; i_15 < 11;i_15 += 1) /* same iter space */
        {
            var_49 |= ((((min((219 && -32757), (max((arr_9 [i_15 + 2] [i_15 + 4] [i_1] [i_1]), 10655))))) ? ((((var_11 != (max(224, 2222459117)))))) : var_8));
            var_50 = (var_9 & -7860062770618302970);
        }
        arr_42 [i_1] = var_11;
    }
    for (int i_16 = 1; i_16 < 1;i_16 += 1) /* same iter space */
    {
        var_51 = (max((var_17 + 141696754), (~var_4)));
        var_52 = var_4;
        var_53 = (!(arr_22 [13] [i_16] [i_16 - 1]));
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 15;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 15;i_18 += 1)
            {
                {
                    arr_50 [i_17] [i_16] = (((arr_34 [i_16] [i_16]) + ((~(arr_15 [i_16 - 1] [i_16 - 1] [i_18] [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_18])))));
                    var_54 = (max(var_54, ((min((((var_13 ? 1663199964 : (min(var_14, 25404))))), (arr_14 [i_18]))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_19 = 2; i_19 < 13;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 15;i_20 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 15;i_21 += 1)
                    {
                        for (int i_22 = 1; i_22 < 13;i_22 += 1)
                        {
                            {
                                var_55 = arr_29 [4] [i_22 - 1] [i_21] [7] [i_19 - 1] [i_16 - 1];
                                var_56 = ((!(((13114806560145256314 ? (arr_34 [i_21] [i_16]) : ((~(arr_54 [i_21] [i_20] [i_16]))))))));
                                var_57 = 252;
                                arr_61 [i_16] [i_16] [3] [i_16] = ((var_5 & (((!(3513092948 != 234))))));
                            }
                        }
                    }
                    var_58 = ((((max((40131 & var_13), (!17793736531812739524)))) && ((((var_14 ? var_14 : (arr_3 [i_16 - 1]))) >= 0))));
                    var_59 = ((~(max(130, var_8))));
                    var_60 = (max(var_60, (((-(((16342 | 6) ? var_5 : (min(2015441745, 3025)))))))));
                }
            }
        }
    }
    #pragma endscop
}
