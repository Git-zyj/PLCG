/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (max(var_2, var_4));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 += (min((!1194643286), (max((arr_0 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
        var_15 = (min(var_15, ((-(max((min(-2147483646, (arr_1 [i_0] [i_0]))), (~0)))))));
        arr_2 [i_0] [i_0] = (max((min(103, (max((-127 - 1), 2147483645)))), ((-(~-2147483646)))));
        arr_3 [i_0] = (min((~14), (max(1294602555, var_3))));
    }

    for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_16 = var_7;
            var_17 = (-(!64881640));
            var_18 = -111;

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                arr_12 [i_1] [i_2] [i_3] = (!1515248982);
                var_19 = ((!(arr_9 [i_1 - 1] [i_1] [i_1 - 2])));
            }
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {

                for (int i_5 = 2; i_5 < 18;i_5 += 1)
                {
                    var_20 *= ((-(arr_14 [i_1 - 2])));
                    arr_20 [i_5] = (!-2147483646);
                    var_21 = 563222390;
                }
                for (int i_6 = 2; i_6 < 15;i_6 += 1)
                {
                    var_22 = (min(var_22, (((!(arr_8 [i_6 + 3]))))));
                    arr_24 [i_6 - 2] = (~var_5);

                    for (int i_7 = 4; i_7 < 18;i_7 += 1)
                    {
                        var_23 -= ((~(arr_23 [i_1 + 1] [i_6 + 3] [i_6 + 2] [i_7 - 2] [i_7])));
                        var_24 = (max(var_24, (!-var_4)));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        arr_30 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 1] = ((~(arr_28 [i_1 + 1] [i_1 - 1])));
                        var_25 = (~(arr_21 [i_6 + 3] [i_1 + 1] [i_1] [i_1 - 1]));
                        arr_31 [i_8] [i_6] [i_1] [i_1] [i_1] = (-(arr_16 [i_4] [i_4] [i_4]));
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        arr_34 [i_9] [i_6] [i_4] [i_2] [i_1] = (!1397371097);
                        var_26 = ((!(arr_25 [i_1] [i_1] [i_1] [i_1 - 1] [i_1])));
                    }
                    for (int i_10 = 2; i_10 < 17;i_10 += 1)
                    {
                        var_27 = (min(var_27, 1294602555));
                        var_28 = (max(var_28, 14));
                        arr_37 [i_10] [i_6] [16] [i_2] [i_1] = -105;
                        var_29 += ((-(arr_6 [i_1 - 1] [i_1 - 1])));
                    }
                }
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    var_30 = (max(var_30, (((-(arr_15 [i_1 - 1] [7] [i_1] [7]))))));
                    var_31 = ((-(arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1])));

                    for (int i_12 = 2; i_12 < 17;i_12 += 1)
                    {
                        var_32 = (~var_1);
                        var_33 = ((!(-127 - 1)));
                        arr_44 [0] [i_2] [i_4] [i_11] [i_12 - 2] = (~var_4);
                        var_34 = (max(var_34, -var_9));
                    }
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        var_35 = (max(var_35, -1092774696));
                        arr_48 [7] [i_11] [i_1] = (~-1);
                        var_36 = ((~(arr_4 [i_1 + 1])));
                        arr_49 [i_2] [i_2] [i_2] [i_2] [i_2] = (~-112);
                    }
                }
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    var_37 = (!var_11);
                    arr_53 [i_4] [i_4] [3] [i_4] [18] [i_4] &= -24756058;
                }
                var_38 = (min(var_38, -127));
                var_39 = -var_12;
            }
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 17;i_17 += 1)
                    {
                        {
                            arr_61 [i_1] [i_16] [i_1] [i_1] [i_1] = -2147483647;
                            var_40 = (min(var_40, (~-111)));
                        }
                    }
                }

                for (int i_18 = 4; i_18 < 18;i_18 += 1) /* same iter space */
                {
                    arr_64 [i_15] [i_15] [i_15] [i_15] [i_15] = (arr_5 [i_18 - 2]);
                    var_41 = (max(var_41, (~132120576)));
                }
                for (int i_19 = 4; i_19 < 18;i_19 += 1) /* same iter space */
                {
                    arr_68 [i_19] [i_19] = (!8);
                    arr_69 [i_1] [i_2] [i_2] = (-(arr_17 [i_1 - 2] [i_15] [i_2] [i_1 - 2]));
                    var_42 = var_5;
                }
                arr_70 [i_1] = ((!(arr_11 [i_1 + 1] [i_1 + 1])));

                for (int i_20 = 0; i_20 < 19;i_20 += 1)
                {
                    var_43 = (~0);
                    var_44 = (~var_4);
                }
                for (int i_21 = 0; i_21 < 19;i_21 += 1)
                {
                    arr_75 [i_2] [i_1] = (arr_65 [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_1]);
                    var_45 = 0;
                }
            }
            var_46 ^= (~(arr_41 [10] [i_1 - 2] [16] [i_1]));
        }
        var_47 = min((max(((min(var_9, 94))), (max(127, -1796111801)))), ((~(arr_7 [i_1 - 1] [i_1 - 1] [i_1]))));

        for (int i_22 = 0; i_22 < 19;i_22 += 1)
        {

            for (int i_23 = 2; i_23 < 17;i_23 += 1)
            {
                arr_80 [i_23] [i_1] [i_1] [i_1] = ((!((!(((-(arr_43 [i_23]))))))));
                arr_81 [i_22] [3] [i_22] [i_1 + 1] &= (min(-2147483646, -1));
            }
            var_48 += ((~(min(var_11, ((max(127, -90)))))));
        }
        for (int i_24 = 0; i_24 < 19;i_24 += 1)
        {
            var_49 = (-(min(1440039668, var_3)));
            var_50 = (min(var_50, (((!((min((min((arr_27 [i_24] [i_24] [i_24] [i_24]), -115)), ((max((arr_51 [i_24] [i_24] [i_1] [i_1] [i_1] [i_1 - 2]), 127)))))))))));
            var_51 = max(-1606144075, ((min((arr_33 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1] [i_1]), (arr_33 [i_1 - 2] [i_1 - 1] [i_1] [i_1] [15])))));
        }
    }
    for (int i_25 = 2; i_25 < 18;i_25 += 1) /* same iter space */
    {
        arr_88 [i_25] = (min(-106, -453093031));
        arr_89 [i_25] = min((max((~var_3), var_10)), (~var_0));
        var_52 = (min(var_52, ((max(((-(arr_11 [i_25 + 1] [i_25]))), (max((arr_63 [i_25 + 1]), 643951484)))))));
        arr_90 [i_25] = max(((-(max(105, var_7)))), 1);
    }
    #pragma endscop
}
