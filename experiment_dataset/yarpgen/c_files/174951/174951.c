/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_17 -= var_15;
                    var_18 = (arr_0 [i_1]);
                }
                for (int i_3 = 1; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_0] = ((var_6 / (((min(-2481, -115))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_19 = (arr_3 [i_5]);
                                arr_18 [i_4] = arr_15 [i_3];
                                arr_19 [i_0] [i_1] [i_4] = (min((max(3553789424295751219, (arr_11 [i_3 - 1] [i_3 - 1] [i_1 + 1]))), -114));
                                arr_20 [i_5] [i_5] [1] [i_4] [i_1] [i_0] [i_0] = max(115, (min((var_9 == var_11), 4014013084)));
                                var_20 = var_2;
                            }
                        }
                    }
                    arr_21 [i_0] [i_1] [i_3] = (((175 ? 0 : ((6361855280839883491 ? (arr_1 [i_1]) : 8587441185821694111)))));
                    var_21 += 87;
                    var_22 = (max(var_22, (((((280954212 ? (((arr_9 [i_3] [i_1]) ? var_6 : 280954212)) : ((min(-603557452, var_15))))) > (!20802628))))));
                }
                for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                arr_28 [i_0] [i_1] [i_6] [i_7] [i_6] = (arr_22 [i_8]);
                                arr_29 [i_0] |= (((((((-1491232594 ? 3412048191743435148 : 5944972324971964122))) ? ((((arr_11 [i_0] [i_0] [i_0]) == (arr_15 [i_0])))) : var_8)) | ((((~(arr_27 [i_0] [i_0])))))));
                            }
                        }
                    }
                    arr_30 [i_0] [i_6] [i_0] [i_0] = min(1, 9223372036854775800);

                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_23 = ((var_10 ? var_1 : 741558866));

                        for (int i_10 = 4; i_10 < 8;i_10 += 1)
                        {
                            arr_36 [i_0] [i_6] [i_6] [i_9] [i_10] = 18126270909621347437;
                            var_24 *= ((-(((arr_3 [i_10 + 4]) * (16382 / 59138)))));
                        }
                    }
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        var_25 = (((arr_26 [0] [i_1 + 1] [i_1 + 1] [i_11] [i_1]) != (((((arr_3 [i_11]) > var_6))))));

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            arr_42 [i_0] [i_1 + 1] [i_11] [i_6] = var_11;
                            arr_43 [i_0] [i_1] [i_6] [i_11] [11] [7] = 23581;
                        }
                        for (int i_13 = 1; i_13 < 11;i_13 += 1)
                        {
                            var_26 = (min(var_26, (((((((((-6964617802849427127 & (arr_16 [i_0] [i_11])))) ? (max(var_5, -32765)) : var_2))) ? (((arr_26 [i_0] [i_1] [i_6] [i_11] [i_0]) / var_6)) : (((arr_1 [i_0]) ? (arr_17 [i_13 - 1] [i_6 + 1] [i_6] [i_1] [i_1 + 1] [i_0]) : ((var_3 ? var_13 : var_6)))))))));
                            arr_46 [i_6] [11] [i_6] [i_11] [i_13] [i_6] [i_6] = ((-6 ? (min((max(-8519260991114869768, -1709603464291300248)), var_7)) : (arr_32 [i_0] [i_1] [i_6] [i_11])));
                        }
                    }
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        arr_50 [i_0] [i_1] [i_6] [i_6] = (min(((-((13909490655651885610 ? var_11 : (arr_11 [i_0] [i_1] [i_6 - 1]))))), (var_13 != 20802628)));

                        for (int i_15 = 0; i_15 < 12;i_15 += 1)
                        {
                            var_27 = (max(1, (max(-1850704043, 3412048191743435139))));
                            var_28 = 1;
                        }
                        /* vectorizable */
                        for (int i_16 = 2; i_16 < 8;i_16 += 1) /* same iter space */
                        {
                            var_29 = (min(var_29, var_2));
                            var_30 = -45380;
                            var_31 = (arr_34 [i_0] [i_16 + 3] [i_6 + 1] [i_1 + 1] [3]);
                            arr_57 [i_0] [i_6] = var_9;
                        }
                        for (int i_17 = 2; i_17 < 8;i_17 += 1) /* same iter space */
                        {
                            var_32 = var_5;
                            var_33 = (max(var_6, (arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                        for (int i_18 = 2; i_18 < 8;i_18 += 1) /* same iter space */
                        {
                            arr_64 [i_6] = (max(((((1 && var_0) == var_15))), ((65 ? -var_1 : 308190951558767955))));
                            arr_65 [i_6] = ((-((max((((!(arr_37 [i_6] [i_6] [0] [i_0])))), (arr_59 [10] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_6]))))));
                            var_34 = (min(var_34, -1976418667255143439));
                        }
                    }
                    var_35 = (max(var_35, ((min((max(104118211, ((15 ? 17348673825908682752 : -24202)))), (arr_60 [i_0] [i_0] [i_1] [i_6] [i_6]))))));
                }
                arr_66 [i_0] &= var_9;
            }
        }
    }
    #pragma endscop
}
