/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_12 = ((max(-5900061046829379153, var_7)));
        var_13 = ((max(-1610564266, -1882571565)));
        var_14 |= ((min((14854523445297288342 / var_5), var_2)));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_10 [i_3] [i_3] [i_3] = 17321819191134868985;

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_13 [i_1] [i_2 + 1] [i_4] |= (2251799813685248 == 2147483647);
                        arr_14 [i_1] |= var_5;
                        arr_15 [i_1] [i_1] [i_3] [i_4] [i_2 - 1] [6] = arr_5 [i_1];
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        arr_26 [15] [i_5] [i_5] = var_7;
                        arr_27 [i_1] [i_1] [i_1] [i_6] [i_7] = -var_1;
                        arr_28 [i_1] [i_5] [i_6] [i_6] [i_7] = (arr_9 [i_1] [i_1] [i_1] [i_1]);
                        var_15 = 19388;

                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_16 = (var_2 >= var_11);
                            arr_31 [i_7] [i_7] [i_6] [i_7] [i_6] [i_5] [i_7] = var_10;
                            var_17 = (max(var_17, ((((arr_30 [i_8] [11] [i_7] [i_6] [i_5] [i_1]) ? var_2 : var_7)))));
                            var_18 = 19388;
                            var_19 = (((arr_19 [i_1] [i_8] [i_6]) > 1124924882574682630));
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            arr_34 [i_7] = ((var_9 ^ (arr_11 [i_1] [i_5] [i_6] [i_7] [i_9])));
                            arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (((arr_17 [i_7] [i_6]) && (arr_17 [i_1] [i_1])));
                            var_20 |= -19388;
                            var_21 = 1;
                        }
                        for (int i_10 = 1; i_10 < 22;i_10 += 1)
                        {
                            var_22 = var_8;
                            arr_39 [i_1] [19] [3] |= (arr_36 [i_10 + 1] [i_5] [19] [5] [14]);
                        }
                    }
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        var_23 = (max((max((!4222124650659840), var_7)), ((max((max(var_8, var_8)), var_4)))));
                        var_24 = 134;
                    }
                    arr_44 [i_1] [i_1] [i_1] [i_1] = max(var_3, (min((arr_42 [i_1] [10] [i_1] [i_1] [i_1]), 1951219009999203094)));
                    arr_45 [i_1] [i_5] [i_6] = ((var_10 ? 14854523445297288342 : (((max((-4222124650659841 == var_1), (arr_24 [i_1] [5] [i_1] [i_6] [3])))))));
                }
            }
        }
        var_25 = ((var_10 ? -4222124650659841 : ((min((arr_38 [9] [i_1] [i_1] [i_1] [i_1]), 0)))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
    {

        for (int i_13 = 2; i_13 < 22;i_13 += 1)
        {
            arr_50 [i_12] [i_13] = var_10;
            var_26 = var_11;
            arr_51 [i_13] |= ((((((arr_9 [i_12] [i_12] [i_12] [i_12]) ? var_11 : -1657890263))) && var_5));
        }
        var_27 = var_10;

        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            var_28 = (~var_7);

            for (int i_15 = 2; i_15 < 20;i_15 += 1)
            {
                arr_57 [i_15] [i_15] [i_14] [i_12] = (4222124650659840 - 17321819191134868985);
                arr_58 [i_12] = (((arr_9 [i_15 + 1] [i_15 + 2] [i_15 + 2] [i_15 + 1]) != -1882571568));
                var_29 = (arr_37 [i_12] [i_15 + 3] [i_15 - 1] [i_15 + 1] [i_15]);
            }
            for (int i_16 = 4; i_16 < 22;i_16 += 1)
            {
                var_30 = (72 || 3592220628412263257);
                var_31 = (arr_56 [i_16] [i_16 - 4] [i_16] [i_16 - 2]);
                arr_62 [i_12] [i_14] [i_14] [i_16] = ((var_11 ? (arr_37 [i_16 - 4] [i_16 - 2] [i_16 - 2] [i_16] [i_16 - 2]) : 72));
            }
            for (int i_17 = 0; i_17 < 23;i_17 += 1)
            {
                arr_65 [i_17] [i_17] [18] = (arr_55 [i_12] [i_12] [i_12] [i_12]);
                var_32 |= var_4;
            }
            var_33 = (min(var_33, var_11));
            var_34 = var_0;
        }
        for (int i_18 = 1; i_18 < 20;i_18 += 1)
        {
            var_35 = var_4;
            arr_69 [i_18] = 30720;
            var_36 = var_11;
        }
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 23;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 23;i_20 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 23;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 23;i_22 += 1)
                        {
                            {
                                arr_81 [i_21] [i_21] [i_20] = 84;
                                arr_82 [i_12] [i_21] = (arr_38 [i_12] [i_12] [i_20] [i_21] [i_22]);
                                var_37 = (min(var_37, (((-(arr_6 [i_12] [i_19] [i_20]))))));
                                var_38 = (arr_5 [i_22]);
                            }
                        }
                    }
                    var_39 = (arr_4 [i_12]);
                }
            }
        }
    }

    for (int i_23 = 0; i_23 < 18;i_23 += 1)
    {
        var_40 = (min(((-(arr_33 [i_23] [i_23] [i_23]))), ((var_11 + (arr_33 [i_23] [i_23] [i_23])))));
        var_41 = var_10;
        var_42 = ((!(arr_29 [i_23] [i_23] [i_23] [1] [i_23] [i_23] [i_23])));
    }
    var_43 = (min(-4222124650659863, (min(4092, (max(-19389, var_9))))));
    var_44 = (max(var_7, var_0));
    #pragma endscop
}
