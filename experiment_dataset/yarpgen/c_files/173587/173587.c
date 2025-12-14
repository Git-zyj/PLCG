/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (max(((-((-1136163946 ? (arr_0 [i_0]) : 5094673827079846349)))), ((((arr_0 [i_0]) != ((32259 / (arr_1 [i_0]))))))));
        arr_4 [i_0] = 131071;
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = (((((arr_8 [i_1 - 1]) >> (-7209939934715438403 + 7209939934715438421))) % (min(22, -345636260))));
        var_14 = (max(var_14, var_1));
    }
    for (int i_2 = 2; i_2 < 22;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    arr_22 [i_2] [i_2] = (min((min(((~(arr_8 [i_2]))), (~22))), (((32269 >= (arr_8 [i_2 + 2]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_15 = 632493954;
                                arr_27 [i_2] [i_2] [i_2] = -var_1;
                            }
                        }
                    }
                    var_16 = ((((max(-632493954, -256))) ? (((-(!var_1)))) : (((arr_24 [i_3] [i_3] [i_3 + 2] [i_3 + 2] [i_3] [i_3]) ? (var_4 == var_1) : 3367316125))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_17 = min(((512 ? -419281718 : 3956673130)), 5382225);
                                arr_35 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = 3956673130;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                {
                    arr_41 [i_2] [i_2] = (max((((-(arr_13 [i_2])))), var_0));
                    var_18 = (min((((41607 ? var_11 : (arr_30 [i_2] [i_2] [i_2] [i_2] [i_10] [i_2])))), (((var_13 - (arr_31 [i_2] [i_2] [i_2] [i_10] [i_10]))))));
                    arr_42 [20] &= var_2;
                    var_19 = (max(var_19, (((((max((arr_25 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_10] [i_2 + 1]), var_1))) ? (arr_34 [i_2 + 1] [i_2 + 1] [i_9 + 1] [i_9 + 1] [i_10] [i_10]) : ((((!(arr_38 [i_2 + 3] [i_2 + 3] [i_2 + 3]))))))))));
                }
            }
        }
        var_20 ^= (min(3367316125, var_4));
        arr_43 [i_2] = ((min(-842642917, (!-9))));

        for (int i_11 = 2; i_11 < 23;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 24;i_13 += 1)
                {
                    {
                        arr_51 [i_2] [i_11] [i_2] [i_11] = 87;

                        for (int i_14 = 2; i_14 < 23;i_14 += 1)
                        {
                            var_21 = (((~5511) + (arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])));
                            arr_55 [i_12] [i_12] [i_2] = (min(((((~(arr_44 [i_2] [i_2]))) != (!-15))), 1));
                        }
                        arr_56 [i_2] [i_2] [i_2] [i_2] [i_2] = ((!((max((min((arr_30 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]), 171)), var_9)))));
                    }
                }
            }

            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {
                var_22 ^= ((~((min((arr_38 [i_2 + 3] [i_11] [i_11 + 2]), (arr_38 [i_2 - 1] [i_2 - 1] [i_11 + 1]))))));
                arr_59 [i_2] [i_2] [i_2] [i_2] = ((!((max((arr_26 [i_2] [i_2] [i_11 + 1] [i_2 - 1] [i_2] [i_2 - 1]), (arr_37 [i_11] [i_11 + 1] [i_11]))))));
                arr_60 [i_2] [i_2] [i_2] [i_2] = var_7;
                var_23 = -5382219;
            }
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                var_24 = 2;
                var_25 = (min(var_25, ((min(((((max(var_10, 4021715995)) >= (min(484085175570171429, -3333916762932893010))))), (arr_48 [i_2] [i_2] [i_11] [i_2]))))));
                var_26 = var_10;
                arr_64 [i_2] [i_2] = (~-3750066831);
                var_27 = (min(var_27, (arr_39 [i_11 - 2] [i_2 + 1])));
            }
            arr_65 [i_2] [i_2] [i_2] = var_0;
        }
    }
    for (int i_17 = 0; i_17 < 17;i_17 += 1)
    {
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 17;i_18 += 1)
        {
            for (int i_19 = 2; i_19 < 13;i_19 += 1)
            {
                {
                    var_28 = (min((((!(!-3)))), ((-(arr_13 [14])))));
                    var_29 *= (arr_17 [i_19 + 2]);
                }
            }
        }
        var_30 = (min(var_30, -484085175570171429));
        arr_75 [i_17] = (((max(var_6, var_11)) / (min(3750066831, (arr_16 [i_17])))));
    }
    var_31 *= (((!var_3) != (~var_4)));
    #pragma endscop
}
