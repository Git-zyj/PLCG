/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (min(var_1, (!var_10)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (((min((arr_0 [i_0]), var_8))) ? (min((arr_0 [i_1]), -114)) : (((-5 ? -120 : -19991))));

                for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
                {
                    var_17 = 1116865919349075225;
                    var_18 *= (min(-102, (arr_5 [10] [10])));
                    arr_8 [i_1] [i_1] [8] [i_2] = ((((-105 ? 4401165020534389008 : 117))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_1] [i_3] [i_3] = (arr_5 [i_0] [i_1]);
                        arr_14 [i_1] [4] = var_11;
                    }
                    for (int i_4 = 3; i_4 < 10;i_4 += 1)
                    {
                        var_19 = -20005;
                        arr_18 [i_4] [i_2] [i_1] [i_0] [i_0] = (arr_10 [i_2] [i_0] [i_2] [i_1] [i_0] [i_0]);
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_20 -= (((~7217137401847164032) != (~33926)));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_21 -= (((arr_23 [i_0] [i_2 + 1] [i_0] [i_6] [i_1] [i_6] [i_2 - 2]) / (arr_23 [i_0] [i_0] [i_0] [i_6] [i_0] [i_1] [i_2 + 1])));
                            var_22 += (!-9223372036854775803);
                            var_23 = 1;
                        }
                        var_24 = var_6;
                    }
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        arr_29 [i_1] [i_1] [i_2] [i_0] = min(((min((arr_28 [i_0] [i_2 + 1] [i_0] [i_0]), -14))), 118);
                        var_25 = ((-(min((arr_22 [i_2 + 1] [i_7 - 1] [i_7] [7] [i_7 - 1]), (~19982)))));
                    }
                    var_26 = ((min(40250, var_1)));
                }
                for (int i_8 = 2; i_8 < 9;i_8 += 1) /* same iter space */
                {
                    arr_33 [i_1] = (+-15920530412982764675);

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_36 [i_1] [i_8] = 65527;
                        var_27 = max(5577151882981405809, (((-3 ? 25273 : 1))));

                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            arr_39 [7] [i_8] [i_1] = (((arr_34 [i_0] [i_9] [i_8] [i_9]) ? ((max(1792, (arr_34 [i_0] [i_0] [i_0] [7])))) : (arr_34 [i_0] [i_1] [i_8 + 2] [i_1])));
                            arr_40 [i_1] [i_1] [i_8 - 2] [i_9] [10] = (min(((~(!var_3))), (arr_10 [i_8 - 2] [i_8] [i_8] [i_8] [i_8] [i_8 + 2])));
                            arr_41 [3] [i_1] [4] [i_1] [i_1] [i_1] = (((((((min(111, (arr_16 [i_0] [i_0] [i_0] [i_0])))) > -9223372036854775783)))));
                            arr_42 [i_1] [i_1] [i_1] [i_9] [i_10] = 1159255110;
                            arr_43 [i_10] [i_1] [i_0] [i_9] [i_1] = ((-127 - 1) ? (120 / 72055395014672384) : -120);
                        }

                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            var_28 = 123;
                            var_29 = ((!((max((max((arr_3 [i_0] [i_1]), var_1)), (arr_32 [i_0] [i_0] [i_0] [0]))))));
                            var_30 = min(1275274651, (!25295));
                            arr_47 [i_1] [i_1] [i_8] [i_9] [i_11] = ((var_0 != ((~(arr_46 [i_0] [i_1] [i_8])))));
                        }
                    }
                    arr_48 [i_1] [i_1] [i_1] [i_1] = ((~((((min((arr_27 [i_1]), 1))) ? ((min((arr_2 [i_0] [i_1]), (arr_15 [i_1] [i_1])))) : (arr_4 [i_0] [i_0])))));
                }

                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    arr_51 [i_1] = var_11;
                    var_31 = (((-30 && 61470961) + (var_0 / 121)));
                    var_32 = var_0;
                    var_33 = (arr_45 [10] [i_0] [i_1] [10] [i_1] [i_12]);
                }
                var_34 = arr_28 [i_1] [i_1] [i_0] [i_0];
            }
        }
    }
    var_35 = var_12;
    #pragma endscop
}
