/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_4 < 14);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = 12487701086784866595;
                    var_20 = ((-(max((arr_0 [i_0]), 5959042986924685015))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_12 [i_0] [1] [1] = (min(((((!12487701086784866595) ? (36170986 && var_3) : (max(var_1, var_17))))), var_6));
                        var_21 = (((arr_2 [i_0]) & (min((arr_11 [6] [i_1] [i_1] [i_3] [i_0]), var_17))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_15 [6] [6] [i_1] [i_2] [i_2] [2] = (min((((!(((var_3 ? -69 : 12487701086784866596)))))), (min(5959042986924685015, (~var_1)))));
                        var_22 = var_4;
                        var_23 = var_9;
                        var_24 = ((~(min(32767, var_15))));
                        var_25 = (((min((var_5 && var_7), (min(7110687138559675111, var_9)))) == var_11));
                    }
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        var_26 = (((((((arr_7 [i_1] [i_2]) ? var_13 : 26))) ? (min(var_15, (arr_0 [i_0]))) : -var_1)));
                        var_27 = (((arr_3 [i_2] [i_1]) ? ((8 ? (arr_3 [i_0] [i_2]) : 5959042986924685039)) : ((((arr_3 [i_1] [i_2]) / var_9)))));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_28 = (min(var_28, var_1));
                            var_29 = var_10;
                        }
                        for (int i_7 = 1; i_7 < 8;i_7 += 1)
                        {
                            arr_27 [i_0] [i_1] [i_2] [i_5] [i_7 + 3] [i_1] = 3874966610;
                            arr_28 [i_0] [i_0] [i_2] [i_0] [i_7] = -var_17;
                            var_30 = (((((((var_6 ? (arr_7 [i_5 + 1] [i_5 + 1]) : (arr_11 [i_0] [i_1] [i_2] [5] [i_7])))) ? var_17 : ((-(arr_24 [9] [i_1] [i_1] [i_1] [i_1])))))) ? ((((!(!22))))) : ((((((arr_14 [i_1]) ? var_9 : (arr_13 [i_0] [i_1] [i_2] [i_5] [i_5] [i_5])))) ? -1464043914 : (arr_8 [i_0] [i_1] [8] [5]))));
                            var_31 = (min(var_31, (arr_8 [1] [1] [1] [1])));
                            var_32 = (arr_22 [2] [i_5] [i_2] [i_1] [1]);
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            var_33 = ((((((!var_8) >> ((((var_13 ? var_7 : 225)) - 358438487437786220))))) ? ((420000686 ? 32757 : var_14)) : (max(251, (arr_3 [i_5 - 2] [i_2])))));
                            var_34 = (arr_6 [i_1]);
                            var_35 = ((((var_5 ? var_14 : (3874966586 * var_11))) / (arr_4 [i_1] [i_5] [i_8])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 4; i_10 < 19;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_36 = (max(var_36, 16572));
                            arr_44 [2] [i_12 + 3] [i_11] [i_11] [i_10] [i_9] = 12487701086784866574;
                            var_37 = (max(var_37, (arr_38 [i_10])));
                            arr_45 [i_11] [i_11] = var_17;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            {
                                var_38 = (min(var_38, (max((((((var_4 ? (arr_49 [i_15] [i_14] [i_13] [i_13] [10] [10]) : 539656930))) ? 18446744073709551615 : ((((arr_42 [i_13] [i_13] [i_15]) | (arr_42 [i_14] [i_10 - 3] [i_13])))))), ((min(((105 ? var_8 : (arr_49 [i_9] [i_10] [i_14] [i_15] [i_15] [15]))), (((arr_35 [i_9] [i_9]) ? var_16 : var_17)))))))));
                                var_39 = (max((((((arr_41 [i_15] [i_13] [i_10]) ? var_15 : 91)) * (2 / var_9))), var_6));
                                var_40 -= ((0 * (arr_50 [i_10 - 4] [i_13] [i_13] [22])));
                                arr_52 [i_13] [i_10] [i_13] [i_13] [i_14] = var_10;
                                var_41 = var_5;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
