/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (13750 > 16072664408695340786);

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_19 *= (0 % 13753);
        var_20 = (max((arr_1 [i_0 + 1]), (min(2445839062, (arr_2 [i_0])))));
        arr_4 [i_0] [i_0] = ((((+(((arr_3 [18]) ? var_4 : 45)))) - -24934));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_21 = (arr_6 [i_1 - 1]);

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_22 = (max(var_22, (((!(arr_6 [6]))))));
            var_23 = (min(var_23, var_0));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 19;i_5 += 1)
                {
                    {
                        arr_19 [i_1] [i_1] [i_1] [i_1] = (arr_18 [i_1] [i_1 + 1] [i_3] [i_5 - 4] [i_5] [i_1]);

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_24 ^= (13753 < 1154794844);
                            var_25 ^= (arr_13 [i_6] [5] [5]);
                        }
                    }
                }
            }
            var_26 = (arr_14 [16] [i_1] [i_1] [i_1]);
            arr_22 [i_1] [i_3] [i_3] = 4;
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_27 = (max(var_27, 0));
                            arr_32 [i_1] [i_1] = ((-(arr_13 [i_1] [i_8] [6])));
                            var_28 = (min(var_28, (((~(arr_29 [i_1 + 1] [i_7]))))));
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
        {
            var_29 = 45;
            var_30 = (min(var_30, 0));
        }
    }
    for (int i_11 = 1; i_11 < 17;i_11 += 1) /* same iter space */
    {
        var_31 = (arr_7 [i_11] [4]);

        for (int i_12 = 1; i_12 < 17;i_12 += 1)
        {
            var_32 ^= ((10754556396047250759 ? (((((-(arr_34 [2])))) ? (arr_31 [i_12] [1] [i_12] [i_12 + 3] [i_12 + 1]) : 62)) : (((!(arr_9 [i_12 + 1]))))));
            /* LoopNest 2 */
            for (int i_13 = 3; i_13 < 19;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 0;i_14 += 1)
                {
                    {
                        arr_48 [i_11] [i_11] [i_13] [8] = arr_1 [i_11 - 1];
                        var_33 = (min(var_33, ((min((arr_24 [1] [i_12 + 3] [i_13] [i_14]), (max(1154794852, 4294967292)))))));
                    }
                }
            }

            /* vectorizable */
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                var_34 = var_3;
                arr_53 [i_11 + 1] [i_12] [i_15] [i_15] = -var_13;

                for (int i_16 = 0; i_16 < 0;i_16 += 1)
                {
                    var_35 = 17;

                    for (int i_17 = 0; i_17 < 20;i_17 += 1)
                    {
                        var_36 *= arr_47 [i_11 + 1] [i_11];
                        arr_59 [i_11] [i_11] [i_17] [i_11] [i_11 - 1] = (arr_5 [i_11] [i_17]);
                    }
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        var_37 -= 2445839062;
                        var_38 += (((arr_49 [i_11 + 3] [i_12 - 1] [i_12]) ? 1 : (arr_35 [i_11] [18] [i_11])));
                        var_39 = ((!(arr_9 [i_16 + 1])));
                        var_40 = (((var_3 ? (arr_49 [i_11] [i_11] [i_11]) : (arr_14 [i_11] [i_15] [i_16 + 1] [i_18]))));
                        var_41 = ((arr_0 [i_16 + 1]) == (arr_54 [5] [i_15] [i_16] [i_18]));
                    }
                    for (int i_19 = 1; i_19 < 16;i_19 += 1)
                    {
                        arr_65 [i_11] [i_12 + 1] [i_15] [13] [i_15] = (((arr_58 [i_19] [i_19] [i_19 + 2] [i_19 + 2] [10]) * (arr_30 [i_19 + 2] [i_19 + 2] [i_19 + 2] [12] [i_19 - 1])));
                        arr_66 [i_11] [i_11] = ((-84 ? (arr_25 [1] [1]) : (arr_55 [i_11] [i_11] [i_12 - 1])));
                        arr_67 [i_11] [i_11] [1] [5] [18] [i_11] &= 198;
                    }
                    for (int i_20 = 3; i_20 < 19;i_20 += 1)
                    {
                        arr_70 [i_11] [i_11] [i_12] [12] [2] [7] [13] = (-(2655709274040078749 <= -3297540741328734920));
                        arr_71 [i_20 - 1] [i_16] [i_15] [i_12] [i_11] |= 1849128234;
                        var_42 += (arr_52 [i_20] [15] [i_11]);
                    }
                }
            }
            for (int i_21 = 1; i_21 < 1;i_21 += 1)
            {
                var_43 = (min((arr_3 [i_12 + 3]), 1));
                var_44 += (arr_43 [i_12]);
                var_45 = 117;
                arr_74 [14] |= (-32767 - 1);
                arr_75 [i_21] [i_21] [i_21] [i_11] = (((min(-115, 84))) > (arr_25 [i_21] [i_21]));
            }
            for (int i_22 = 1; i_22 < 1;i_22 += 1)
            {
                var_46 = ((~((min((arr_68 [3] [i_11 + 2] [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11 + 1]), var_9)))));
                var_47 = (min(var_47, ((min((((((4294967292 ? -68 : 13750)) == 14121))), (arr_25 [2] [2]))))));

                for (int i_23 = 0; i_23 < 20;i_23 += 1)
                {
                    var_48 = (min(var_48, ((((3108642642058568417 << (-13750 + 13802)))))));
                    arr_80 [i_22] = (arr_76 [i_11]);
                }
                arr_81 [i_11] [i_11] [i_22] = (~-68);
            }
        }
    }
    #pragma endscop
}
