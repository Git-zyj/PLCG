/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= 88;
    var_21 = var_16;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((min((arr_0 [i_0 + 1]), (min((arr_1 [i_0]), (arr_0 [i_0]))))) | (((arr_1 [i_0 + 3]) ? (arr_0 [i_0 + 3]) : (arr_1 [i_0 + 3])))));
        var_22 = 32;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = 2966220908;
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    arr_14 [16] [i_2] [i_1] [16] &= (15988 || (arr_13 [i_2 + 1] [i_2 - 2] [i_2 - 3] [i_2 + 1]));
                    var_23 = (max(var_23, (((1 ? (((max(((((arr_12 [i_1] [2] [i_2 + 1] [i_3]) <= (arr_7 [i_1])))), (arr_6 [10] [i_3]))))) : var_16)))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_24 -= ((1 ? (arr_6 [12] [i_4]) : (arr_4 [16])));

        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {

            for (int i_6 = 3; i_6 < 18;i_6 += 1)
            {
                var_25 = (max(var_25, ((((((arr_15 [i_4]) < -332572596070341696)) ? -3569546609305676487 : (arr_21 [i_4]))))));
                var_26 = (min(var_26, ((((16008 >= var_13) ? -9203999493255974787 : 49564)))));
                arr_24 [i_5] [i_5 + 2] [i_4] = (65532 ^ 1);
            }
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                arr_28 [i_4] [i_4] [0] |= ((((arr_4 [4]) - (arr_16 [i_4]))) != (0 >= 49553));
                arr_29 [i_4] [18] [6] [i_7] &= (arr_20 [i_5 + 1] [i_5 - 1]);
                var_27 = 4294967295;
                var_28 = (((((16 ? -1 : 8905))) ? (arr_16 [i_4]) : 1));
            }
            arr_30 [i_5] = (65523 && 58977);
            arr_31 [i_5] [i_5] = 114;

            for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
            {
                arr_36 [i_4] [i_5] [i_5] = (((arr_32 [i_5] [i_4] [i_4] [12]) & var_10));
                var_29 += ((((-8 ? 88 : (arr_10 [i_8]))) <= (((-19 ? -4 : var_18)))));
            }
            for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
            {
                arr_40 [i_5] [i_5] [i_5] [i_5] = ((-((-5 ? 65536 : 1))));
                arr_41 [i_5] [i_5] = ((-(arr_17 [i_4])));
            }
            for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
            {
                var_30 = (max(var_30, (var_6 / 246)));
                var_31 = (min(var_31, ((((arr_13 [i_5 + 2] [i_5] [8] [i_5 + 2]) < (arr_6 [i_10] [i_5]))))));

                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    var_32 = ((112 ? 10079 : (arr_33 [i_4] [i_5] [i_5] [i_11])));
                    arr_46 [17] [i_5 + 3] [i_5] [i_5] [i_10] [i_5] = 1;
                }
                for (int i_12 = 1; i_12 < 17;i_12 += 1)
                {
                    arr_49 [i_5] = (-(((arr_15 [i_4]) % 7919292918913912669)));
                    var_33 = (arr_18 [i_5 + 1] [i_5 + 1]);
                }
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    var_34 = (min(var_34, 1));
                    arr_53 [i_5] [i_5] [i_10] [i_10] [i_13] = -76;
                    var_35 = 1;
                }
                var_36 += ((-21947 ? (91 | 125) : (arr_5 [i_5] [i_10])));
            }

            for (int i_14 = 2; i_14 < 18;i_14 += 1)
            {
                arr_58 [i_5] = (((arr_38 [i_4]) ? 1 : 91));
                var_37 = (min(var_37, (((var_7 ? 1 : (arr_51 [2] [i_14 - 1] [i_14 - 1] [i_5 + 4] [2]))))));
                var_38 += (!1);
            }
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                var_39 *= (((arr_56 [2] [2] [15] [i_15]) ? ((var_0 ? 1 : 1)) : ((((arr_56 [i_4] [i_4] [i_5] [i_15]) >= 0)))));
                arr_61 [i_5] = 10079;

                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    arr_66 [i_5] [i_5] = (((arr_23 [i_5 - 1] [i_5 + 3] [i_5 + 3] [i_5 + 2]) ? (arr_23 [i_5 + 3] [i_5 + 4] [i_5 + 3] [i_5 + 1]) : (arr_23 [i_5 + 3] [i_5] [i_5 + 2] [i_5 + 4])));
                    var_40 += (((((arr_21 [i_16]) ? var_7 : var_11)) - 492166182));
                    var_41 = 1;
                }
                var_42 ^= -94;
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 17;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 19;i_18 += 1)
                    {
                        {
                            arr_74 [i_5] = (((-3 + 2147483647) >> (-21503 + 21507)));
                            var_43 &= ((((((arr_9 [i_4]) && (arr_20 [i_4] [i_18])))) ^ var_18));
                            var_44 = ((((((arr_20 [1] [i_5]) < 1))) <= 1));
                            var_45 = (((arr_54 [i_5] [i_5] [i_18]) >> (((arr_47 [i_17] [i_17] [i_17] [10]) + 99))));
                        }
                    }
                }
            }
        }
        for (int i_19 = 0; i_19 < 19;i_19 += 1)
        {
            var_46 = (arr_65 [i_19]);
            arr_79 [i_4] [4] [i_4] = (~1);
        }
        for (int i_20 = 0; i_20 < 19;i_20 += 1)
        {
            var_47 += (arr_10 [i_4]);
            arr_84 [i_4] [i_20] [i_20] = var_2;
            var_48 += 31394;
            var_49 = (~-64);
            var_50 = (arr_76 [i_4] [i_20]);
        }
        var_51 = ((164 % (arr_65 [18])));
        var_52 = ((!(arr_52 [i_4] [i_4] [i_4] [0])));
    }
    var_53 = (((((max(62960, var_10))) ? var_10 : -var_8)) >= 396401478157970752);
    #pragma endscop
}
