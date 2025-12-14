/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max((((!(~var_5)))), ((max(959507446, 51994))));
    var_13 = -var_4;
    var_14 += min(((max(153, 1))), (!153));
    var_15 |= max(((var_11 ? (var_3 <= 30314) : var_7)), (min(-var_7, var_4)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                arr_6 [i_1] [i_0] |= (~((~(arr_2 [i_1]))));
                var_16 ^= ((var_6 ? (arr_2 [i_1]) : (arr_3 [9] [i_1])));
                var_17 = var_5;
                var_18 = (max(var_18, (arr_2 [i_2 + 2])));
            }
            var_19 = var_6;
            var_20 = (min((((arr_1 [i_0] [i_1]) ? (arr_3 [i_1] [i_0]) : (arr_1 [i_0] [i_1]))), (arr_3 [i_0] [i_0])));
        }
        /* vectorizable */
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            var_21 *= ((~(arr_0 [i_3 - 2] [i_3 - 1])));
            var_22 ^= (((var_0 ? var_6 : var_5)) | ((~(arr_5 [i_0]))));
            var_23 -= ((-1210392710 % (arr_3 [i_3 - 2] [i_3 + 1])));
        }
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            var_24 *= -1338895671;
            var_25 = ((!(((min(-1, 2315611446644839281))))));
            var_26 &= ((-((((min(148, (arr_4 [i_0] [i_0] [i_0])))) + ((max(146, 9748)))))));
            var_27 = (min(var_27, (max((var_5 | 146), (((177 / 13548) / 155))))));
        }
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    {

                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            arr_22 [1] [1] [i_6] [i_7 - 1] [i_8 + 1] = (((min(var_3, (arr_4 [10] [10] [i_7 - 1]))) % (arr_9 [i_0] [i_6 + 2])));
                            var_28 = 177;
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            var_29 = var_2;
                            var_30 += (~(arr_7 [i_6]));
                            var_31 = ((-(~var_3)));
                        }
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            var_32 = (((((-var_2 ? (((arr_23 [i_10] [i_7 - 1] [i_0] [i_5 + 1] [i_0]) ? var_0 : var_11)) : (arr_14 [i_6 - 1] [i_10] [i_10])))) * (min(var_8, ((-(arr_3 [16] [i_0])))))));
                            var_33 &= (max((min((arr_0 [i_0] [i_10]), (min(var_0, 54296)))), (!109)));
                        }
                        var_34 = (min((arr_25 [i_0]), (max(669260503, var_3))));
                        var_35 = (max(54304, (min((arr_18 [i_7] [10] [i_5 - 1] [i_0]), -409430023))));
                    }
                }
            }
            var_36 = (min(var_36, (arr_3 [i_5] [i_5])));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    {
                        var_37 ^= (min(60137, (min(((min(109, 47))), var_2))));
                        var_38 = var_0;
                        arr_33 [i_12] [i_11] [i_5] [i_0] [i_0] [i_0] = 146;
                        arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_10;
                    }
                }
            }
            var_39 += (max(((var_1 ? (arr_12 [i_0] [i_0]) : var_8)), (~0)));
        }
        var_40 = (min(var_40, (~13549)));
    }
    for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
    {
        var_41 += (((var_5 != var_0) || (arr_21 [i_13] [i_13] [8] [i_13] [i_13])));
        var_42 = ((~((-(~var_10)))));
        var_43 = var_9;
    }
    #pragma endscop
}
