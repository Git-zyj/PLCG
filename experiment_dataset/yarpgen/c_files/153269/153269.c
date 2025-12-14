/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
        {
            var_14 = -100;
            arr_6 [i_0] [i_1] [i_0] = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
            var_15 = ((~(arr_5 [i_0] [i_1 + 3])));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                arr_12 [i_0] [i_2] [i_0] = (((((var_6 ? 99 : 1784767003))) ? (arr_4 [i_0]) : -1784767002));
                arr_13 [i_0] [i_0] [i_3] = 42;
            }
            arr_14 [i_0] [i_0] [i_0] = var_4;
            arr_15 [i_0] [i_2 + 2] = ((var_3 ? (arr_5 [i_0] [i_2 + 1]) : var_13));

            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                arr_19 [i_0] [i_0] [i_4] = (((arr_10 [i_0] [i_0 + 1] [i_2 + 1]) ? 5420087755296762067 : var_12));

                for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_16 = var_10;
                        arr_25 [i_0] [i_5] [i_4] [i_2] [i_2] [i_0] = var_6;
                    }
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        var_17 -= (arr_27 [i_2 + 3] [i_7 - 1]);
                        var_18 = (~var_12);
                    }
                    arr_28 [i_0] [5] [i_4] [i_0] [i_5] = ((arr_4 [i_0]) >= ((var_11 ? -100 : var_7)));
                    var_19 = var_7;
                    arr_29 [i_0] = (arr_10 [i_0] [i_0] [i_5]);
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                {
                    var_20 = ((!(arr_1 [i_0])));
                    var_21 = ((var_2 ? ((var_9 ? var_12 : (arr_26 [i_8] [i_0] [i_0] [i_0]))) : (arr_31 [i_8] [i_2 + 1] [i_8] [i_0])));
                    var_22 = ((-1466261035 ? (arr_1 [i_0]) : 114));
                    var_23 = var_0;
                }
            }
        }
        for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
        {
            arr_34 [i_0] [i_0] = 1;
            arr_35 [i_0] [i_0] [i_0] = (~var_2);
        }
        for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
        {
            var_24 ^= (((arr_7 [i_0] [i_0]) ? ((min((arr_7 [i_0] [i_0]), (arr_2 [i_10])))) : (((arr_2 [i_10]) * (arr_2 [i_10])))));
            /* LoopNest 2 */
            for (int i_11 = 4; i_11 < 12;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 11;i_12 += 1)
                {
                    {
                        var_25 = (max(var_25, ((min((min(var_1, (arr_40 [i_0] [i_10] [i_10]))), ((((1784767023 ? -902919709 : (arr_41 [i_0] [i_10]))))))))));
                        var_26 = ((((max(var_3, (((var_1 ? var_9 : (arr_5 [i_0] [i_10]))))))) && ((max(1784767003, 1784767010)))));
                        var_27 &= (min((max((arr_37 [i_11 - 3]), var_0)), ((((arr_37 [i_11 - 1]) < -26478)))));
                    }
                }
            }
        }

        for (int i_13 = 1; i_13 < 12;i_13 += 1)
        {
            arr_45 [i_0] = (max((((!var_5) ? var_5 : 0)), var_2));
            var_28 = var_5;
        }
        for (int i_14 = 1; i_14 < 11;i_14 += 1)
        {
            var_29 = (min(-288270532, ((1 ? -127 : -1466261038))));
            var_30 = (max(var_30, ((min((((var_11 && (arr_24 [i_0 - 1] [i_0] [i_0] [8] [i_0] [i_14 - 1] [i_0])))), (arr_1 [12]))))));
            var_31 = (min(-91, -2002090210));
        }
        for (int i_15 = 1; i_15 < 10;i_15 += 1)
        {
            arr_51 [i_0] [i_15] [i_0] = (((min((arr_32 [i_0 - 1] [i_0]), var_0)) & ((((arr_32 [i_0 + 1] [i_0]) ? (arr_32 [i_0 - 1] [i_0]) : (arr_32 [i_0 - 1] [i_0]))))));
            var_32 = (((!var_2) >= (max((max((arr_21 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1]), (arr_33 [i_0] [i_0] [i_0]))), (0 - -1784767004)))));
        }
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 13;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 13;i_17 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 1;i_19 += 1)
                        {
                            {
                                var_33 |= ((max(var_3, ((max(var_10, (arr_38 [i_16])))))));
                                var_34 = ((((var_2 ? (arr_48 [i_16]) : (arr_48 [i_17])))) ? var_11 : ((min((arr_7 [i_0 - 2] [i_0 - 1]), -29653))));
                            }
                        }
                    }
                    var_35 = (min(((min(((max(var_6, (arr_44 [i_0])))), var_1))), (((((var_12 ? (arr_7 [i_0] [i_17]) : var_4))) ? (arr_17 [i_0 + 1] [i_0]) : ((min((arr_48 [i_0]), (arr_50 [i_17] [i_17] [i_0]))))))));
                    arr_60 [i_0] [i_0] [i_17] [i_0] = var_2;
                    var_36 *= (~var_5);
                    var_37 = max(((max((!8460), var_10))), (min((((arr_22 [i_0] [i_16] [i_16] [i_16] [i_17]) - var_12)), (arr_9 [i_0] [i_16] [i_0 + 1]))));
                }
            }
        }

        for (int i_20 = 2; i_20 < 10;i_20 += 1)
        {
            arr_64 [i_0] [i_0] [i_0] = ((var_7 ? (min((var_0 >= var_13), -2055818690)) : (min(((var_2 ? var_8 : (arr_36 [i_0] [i_0]))), (min((arr_32 [i_0 + 1] [i_0]), var_8))))));
            arr_65 [i_0] [i_0] [i_20] = (arr_3 [i_0]);
        }
        for (int i_21 = 0; i_21 < 13;i_21 += 1)
        {
            var_38 = (min(var_38, (arr_18 [i_21])));
            arr_69 [i_21] [i_0] [i_21] = max(1680765930, (-56 >= -2048577028));
            arr_70 [i_0] = (min(1996777083, -2114849721));
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 13;i_22 += 1)
            {
                for (int i_23 = 1; i_23 < 12;i_23 += 1)
                {
                    {
                        var_39 = ((((!(arr_72 [i_0]))) ? (!8495627636477645266) : (((((2147483647 ? (arr_50 [i_21] [5] [i_0]) : var_13))) ? (min((arr_47 [i_21] [i_23]), var_13)) : (((arr_7 [i_0] [i_0]) ? (arr_18 [i_0]) : (arr_55 [i_0] [i_0 - 1] [i_0])))))));
                        var_40 = (min(((((max(var_8, var_11))) ? (arr_68 [i_0 + 1]) : ((8495627636477645285 ? 8553123802365262142 : 71)))), ((min((((arr_39 [i_22]) * var_12)), var_0)))));
                    }
                }
            }
        }
    }
    for (int i_24 = 0; i_24 < 1;i_24 += 1)
    {
        arr_80 [i_24] = (((((min(var_0, (arr_78 [i_24])))) / (max(71, 2033439776627817780)))));
        arr_81 [9] [i_24] = (arr_78 [i_24]);
        var_41 = (max((!var_2), 142));
        arr_82 [i_24] [i_24] = (min(((((((arr_78 [i_24]) ? var_3 : (arr_79 [i_24] [i_24])))) ? (min((arr_78 [i_24]), var_1)) : (((min((arr_79 [i_24] [i_24]), (arr_79 [i_24] [i_24]))))))), var_2));
        var_42 = (min((!var_9), -4362879914278711711));
    }
    var_43 = (min(((-2033439776627817773 ? -61 : -72)), ((-3682084948097419718 ? var_9 : (55824 * var_10)))));
    #pragma endscop
}
