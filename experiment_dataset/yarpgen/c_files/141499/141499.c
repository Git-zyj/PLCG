/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (!var_7);

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_2 [4] &= (max((arr_0 [i_0 - 1]), (((arr_0 [i_0]) | (!127)))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_16 = ((81 / ((max(41, 17)))));

            /* vectorizable */
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                arr_9 [i_0] [i_0] = arr_8 [i_2 + 1] [i_0];
                var_17 = arr_5 [i_2] [i_1] [i_0 + 2];
                arr_10 [i_0] [i_0] [i_0] [i_0] = -80;
                arr_11 [i_0] [i_1] [i_2] = arr_4 [i_0] [i_1] [i_0];
            }
            var_18 ^= ((!((min(81, 27)))));
        }
        var_19 = -91;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            arr_16 [i_3] [i_3] = (arr_15 [i_4] [i_3]);
            arr_17 [i_3] [17] = arr_14 [i_3] [i_4];
            var_20 = -84;

            for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
            {
                var_21 = (min(var_21, (arr_14 [i_3] [i_3])));
                var_22 = (((arr_18 [i_5 + 1] [i_5 + 1]) <= 101));
            }
            for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    arr_25 [i_3] [i_3] [i_4] [i_6] [i_7] = (((arr_21 [i_3]) / (arr_23 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 - 1])));
                    var_23 *= arr_13 [i_6] [i_6 + 1];
                }
                arr_26 [i_3] = arr_14 [i_3] [i_3];

                for (int i_8 = 4; i_8 < 22;i_8 += 1)
                {
                    var_24 = -43;
                    arr_29 [i_3] [i_3] [i_6] [i_8 - 2] = 10;
                }

                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    arr_32 [i_3] [i_3] = (arr_14 [i_6 - 1] [i_6 + 1]);
                    var_25 ^= arr_31 [i_4] [8] [8];
                    var_26 &= arr_30 [i_9] [i_4] [i_4] [i_3];
                }
                arr_33 [i_3] [i_4] [i_3] = arr_28 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_3] [i_6 - 1];
            }
            for (int i_10 = 1; i_10 < 22;i_10 += 1) /* same iter space */
            {
                var_27 = arr_27 [i_3] [i_4] [16] [i_4];
                var_28 = 46;

                for (int i_11 = 2; i_11 < 20;i_11 += 1) /* same iter space */
                {
                    var_29 += (arr_24 [i_4] [i_4]);
                    var_30 = (min(var_30, -117));
                    var_31 *= -69;
                }
                for (int i_12 = 2; i_12 < 20;i_12 += 1) /* same iter space */
                {
                    var_32 = arr_34 [i_12 + 1] [i_3] [i_3];

                    for (int i_13 = 1; i_13 < 22;i_13 += 1)
                    {
                        var_33 += -72;
                        var_34 = (!-5);
                    }
                    for (int i_14 = 1; i_14 < 21;i_14 += 1)
                    {
                        var_35 = arr_34 [i_14] [i_3] [i_14 + 1];
                        arr_45 [i_14] [i_3] [10] [i_3] [i_3] = (((arr_37 [i_12 - 1] [i_12 - 1] [6] [i_3]) < (arr_38 [i_12] [i_12] [i_12 + 2] [i_12 - 2])));
                        var_36 = -127;
                        var_37 += arr_12 [i_10] [i_3];
                    }
                }
                for (int i_15 = 4; i_15 < 21;i_15 += 1)
                {
                    var_38 = arr_40 [i_10 - 1];
                    arr_48 [i_15 - 4] [i_4] [i_10] [i_4] [i_3] [i_4] = -32;
                }
                var_39 = arr_22 [i_4];
            }
            for (int i_16 = 1; i_16 < 22;i_16 += 1) /* same iter space */
            {
                var_40 -= arr_38 [i_16] [i_16] [i_16 - 1] [i_16 + 1];

                for (int i_17 = 0; i_17 < 23;i_17 += 1) /* same iter space */
                {
                    arr_55 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = arr_27 [i_16 - 1] [i_4] [i_16] [i_17];
                    var_41 = -77;
                    var_42 = 46;
                }
                for (int i_18 = 0; i_18 < 23;i_18 += 1) /* same iter space */
                {
                    var_43 += (!-77);

                    for (int i_19 = 0; i_19 < 23;i_19 += 1) /* same iter space */
                    {
                        arr_62 [i_19] [5] [i_3] [i_4] [i_3] [i_4] [0] = arr_47 [i_16 + 1];
                        arr_63 [i_18] [i_16 + 1] [i_19] [i_18] [i_16 + 1] &= (!-1);
                    }
                    for (int i_20 = 0; i_20 < 23;i_20 += 1) /* same iter space */
                    {
                        arr_68 [i_3] = (((arr_22 [i_4]) < 83));
                        var_44 = 97;
                    }
                }
            }
            var_45 = arr_38 [i_3] [i_3] [i_4] [i_4];
        }
        for (int i_21 = 0; i_21 < 23;i_21 += 1) /* same iter space */
        {
            var_46 -= arr_69 [i_21] [i_3];
            var_47 = 99;
            var_48 = -100;
        }
        var_49 = (min(var_49, (arr_44 [i_3] [8] [i_3] [i_3] [i_3] [i_3])));

        for (int i_22 = 4; i_22 < 20;i_22 += 1)
        {
            var_50 = -101;
            arr_76 [i_3] [i_3] = arr_75 [i_22] [i_22 - 4];
        }
    }
    for (int i_23 = 0; i_23 < 13;i_23 += 1)
    {
        arr_81 [3] = -26;
        arr_82 [i_23] = 97;
        arr_83 [i_23] = ((!((max((arr_38 [i_23] [i_23] [i_23] [i_23]), (arr_38 [i_23] [10] [i_23] [i_23]))))));

        for (int i_24 = 0; i_24 < 13;i_24 += 1) /* same iter space */
        {
            arr_87 [i_23] [i_23] = (min((arr_84 [i_23] [i_24]), -33));
            var_51 = ((59 | (arr_61 [i_24] [3] [4] [i_23] [22] [22])));
        }
        for (int i_25 = 0; i_25 < 13;i_25 += 1) /* same iter space */
        {

            for (int i_26 = 0; i_26 < 13;i_26 += 1)
            {
                var_52 = arr_53 [i_23] [i_25] [i_26];
                var_53 += ((~(-127 - 1)));
                var_54 = arr_80 [i_25];
            }
            for (int i_27 = 1; i_27 < 10;i_27 += 1)
            {
                arr_97 [i_23] [i_25] [i_25] = ((-(arr_90 [i_23] [i_25] [i_27])));
                var_55 = arr_85 [i_23] [i_25] [4];
                var_56 -= (((((arr_49 [i_23] [i_27] [i_27 - 1] [i_27 + 2]) * (((arr_52 [i_23] [i_23]) / (arr_91 [i_23] [i_23] [i_23]))))) * (-105 / 77)));
                arr_98 [i_23] [2] [10] [i_25] = max(59, (!100));

                /* vectorizable */
                for (int i_28 = 3; i_28 < 11;i_28 += 1)
                {
                    var_57 = (min(var_57, 106));
                    var_58 ^= arr_36 [i_27 + 1] [i_27 + 2] [i_28] [i_28 + 1] [i_28 + 1];
                    var_59 = ((!((((arr_65 [i_23] [i_25] [i_27] [i_28] [i_27]) / -46)))));
                }
            }
            /* vectorizable */
            for (int i_29 = 2; i_29 < 11;i_29 += 1)
            {
                arr_105 [i_25] [i_25] [i_23] [i_25] = arr_56 [i_25] [i_29];
                var_60 -= ((95 != (arr_34 [i_29 + 1] [i_29] [i_29])));
            }
            var_61 = arr_86 [i_23] [i_25];
            var_62 += -101;
        }
        arr_106 [i_23] [i_23] &= arr_93 [i_23] [i_23] [8] [i_23];
    }
    #pragma endscop
}
