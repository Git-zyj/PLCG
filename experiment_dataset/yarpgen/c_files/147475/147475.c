/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((var_3 << (var_3 - 88)));
    var_14 &= (((((((var_9 ? (-32767 - 1) : var_6)) * var_7))) ? var_0 : var_5));
    var_15 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 &= ((-(arr_4 [i_0] [i_1] [i_1])));
            arr_6 [i_0] [i_0] [i_0] = (32759 > (var_2 - var_2));
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_17 = (max(var_17, var_2));
                            var_18 &= ((52 ? var_9 : (((var_7 && (arr_11 [i_4] [i_3] [i_2 - 1] [i_1] [i_0]))))));
                        }
                    }
                }
            }
            var_19 = ((!(12105 * 1)));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_20 = var_7;
                        var_21 &= (((32767 ? var_1 : (-32767 - 1))));
                        var_22 = (min(var_22, (((((arr_17 [i_6] [i_1] [i_0]) <= var_9))))));
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            var_23 = var_1;

            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                var_24 = ((!(var_9 * 31495)));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {
                            var_25 = (min(var_25, ((((arr_3 [i_10]) ? (arr_3 [i_10]) : 0)))));
                            arr_30 [i_10] [4] [i_9] [i_8] [i_8] [i_7] [i_10] &= ((-(arr_22 [i_0])));
                            var_26 = (((arr_13 [i_10] [i_9] [11] [i_7] [i_0]) && var_10));
                            var_27 = 32759;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            arr_36 [i_12] [i_12] &= ((var_1 % (arr_8 [i_11 - 1] [i_11 + 1] [i_11 + 1])));
                            var_28 -= ((-32767 * ((var_10 ? (arr_1 [i_0]) : var_12))));
                            arr_37 [i_0] [i_7] [i_8] [8] [i_12] = (!var_4);
                            var_29 -= (!var_1);
                        }
                    }
                }
                var_30 = (min(var_30, ((((arr_4 [i_0] [i_0] [i_0]) & (arr_4 [i_8] [i_7] [i_0]))))));
            }

            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                var_31 = ((-var_4 ? ((var_1 ? 1 : 255)) : (1 <= var_9)));
                arr_40 [i_0] [i_13] &= ((((((arr_0 [i_0] [i_0]) * 4))) ? (((-32767 - 1) ? var_0 : 145)) : -32745));
            }
            for (int i_14 = 1; i_14 < 1;i_14 += 1)
            {
                var_32 = (max(var_32, (((arr_0 [i_14 - 1] [i_14 - 1]) > var_4))));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            var_33 = (min(var_33, (((var_7 ? (var_2 - 35) : ((var_12 ? var_1 : var_0)))))));
                            var_34 -= (arr_2 [i_0] [i_0] [i_0]);
                        }
                    }
                }
            }
        }
        var_35 = (max(var_35, ((((arr_35 [0] [0] [i_0] [i_0] [i_0]) ? (arr_35 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_11)))));
        var_36 = (((var_7 <= -32102) ? (!var_12) : (arr_27 [i_0] [i_0] [i_0] [i_0])));
        var_37 = (max(var_37, (((114 * (((27995 == (arr_32 [i_0] [i_0])))))))));
    }
    for (int i_17 = 0; i_17 < 20;i_17 += 1)
    {
        var_38 = (min(var_38, ((((((141 * (arr_50 [i_17])))) ? var_3 : (~128))))));
        /* LoopNest 2 */
        for (int i_18 = 3; i_18 < 17;i_18 += 1)
        {
            for (int i_19 = 3; i_19 < 17;i_19 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_20 = 2; i_20 < 17;i_20 += 1)
                    {
                        for (int i_21 = 2; i_21 < 18;i_21 += 1)
                        {
                            {
                                var_39 = (min(var_39, ((((((((27995 ? var_6 : var_2)) * (((0 <= (arr_55 [1] [1] [i_19 - 3] [i_19]))))))) ? var_6 : var_4)))));
                                var_40 &= var_0;
                            }
                        }
                    }

                    for (int i_22 = 0; i_22 < 1;i_22 += 1)
                    {
                        var_41 = (arr_62 [i_22] [i_17] [i_18] [i_17] [i_17]);
                        var_42 &= (min(((~(arr_55 [i_18] [i_18 - 3] [i_18 + 1] [i_18 - 1]))), (max(((min(-2216, var_11))), ((var_10 ? 32767 : var_12))))));
                        var_43 = (max(var_43, ((((((var_5 % (arr_56 [i_18 - 3] [i_18 + 3] [i_18 - 1])))) ? ((var_11 ? -4096 : (((-32767 - 1) ? var_1 : var_4)))) : (arr_57 [i_17] [i_17] [i_19] [i_22]))))));
                        arr_66 [i_17] [i_18 - 3] [i_22] [i_22] [i_22] [i_18 + 3] = (((var_11 * var_5) << (((max((!24), (var_8 % var_12))) - 31))));
                    }
                    for (int i_23 = 0; i_23 < 20;i_23 += 1)
                    {
                        arr_71 [i_17] [i_17] [i_17] = (min((min(((max(var_10, 1))), var_5)), var_12));
                        var_44 = (min(((3072 ? ((var_9 ? 241 : var_5)) : (arr_70 [i_23] [i_19 + 1] [i_18] [i_18 - 2] [i_18] [i_18]))), ((-((-(arr_50 [i_19])))))));
                    }
                    for (int i_24 = 4; i_24 < 18;i_24 += 1)
                    {

                        for (int i_25 = 0; i_25 < 20;i_25 += 1) /* same iter space */
                        {
                            var_45 = (((((~(arr_53 [i_18 + 3] [i_18 + 3])))) ? (arr_76 [i_18 + 2] [i_18]) : ((var_11 ? -18485 : var_1))));
                            var_46 -= ((min(((arr_64 [i_17] [i_17] [i_17] [i_17]), (var_11 > 18)))));
                            var_47 -= ((-((min(var_8, (arr_64 [15] [i_18] [i_18 + 1] [i_18]))))));
                        }
                        for (int i_26 = 0; i_26 < 20;i_26 += 1) /* same iter space */
                        {
                            arr_80 [i_26] [i_18] [i_24] [i_18] [i_17] = ((((((var_10 > 111) & (var_6 == 29207)))) ? (((arr_69 [i_18 - 1] [i_19 - 3] [i_24 - 4]) * var_6)) : (max(1, (~1043)))));
                            var_48 &= (((((!(arr_57 [i_24 - 4] [i_18 - 3] [i_24] [i_18 - 3])))) == -var_10));
                            arr_81 [i_17] [i_17] [i_17] [i_24] [i_17] [i_17] = ((!((max(var_6, (arr_56 [i_24 + 1] [i_24 - 2] [i_18 - 1]))))));
                        }
                        var_49 &= -1;
                        arr_82 [14] [i_24] [i_18] [i_24] [i_17] = ((((-((max(145, var_10))))) == (!var_4)));
                    }
                }
            }
        }
    }
    var_50 -= ((((192 <= (var_10 + var_1))) ? (((min(var_7, var_7)) ? -var_2 : var_3)) : var_8));
    #pragma endscop
}
