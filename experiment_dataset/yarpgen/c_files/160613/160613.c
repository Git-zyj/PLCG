/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((-35 | ((~(~-35)))))));
                var_14 += 1;
            }
        }
    }
    var_15 |= ((((min(((min(var_2, -38))), 3655886701))) || (-var_11 / var_9)));

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_8 [6] &= (var_12 ? var_1 : (arr_7 [14]));
        var_16 *= (arr_6 [i_2] [20]);
    }
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            var_17 -= (3857149454 & ((((!((((-1747311921 + 2147483647) >> (2171003258 - 2171003241)))))))));
            var_18 *= arr_14 [i_3] [i_3];
            var_19 = (max(var_19, ((~((((max((arr_6 [i_3] [1]), 1747311921))) ? ((var_7 + (arr_13 [i_3]))) : (arr_11 [i_3 - 1])))))));
            var_20 = (-var_12 ? (((((arr_6 [19] [i_4 - 1]) && (arr_6 [i_3 - 2] [i_4 - 1]))))) : (max(((max((arr_11 [i_3]), 113))), (var_0 - var_12))));
        }
        var_21 *= (((((-(arr_12 [i_3] [i_3] [i_3 - 2])))) ? (arr_14 [i_3] [i_3]) : var_10));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_22 = ((!(((-1 ? (min((arr_12 [i_5] [15] [15]), 0)) : var_3)))));
        arr_17 [i_5] = ((-(((var_4 ? var_3 : (arr_12 [i_5] [i_5] [i_5]))))));

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_23 -= (arr_11 [i_6]);

            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                arr_22 [8] [i_6] [i_5] = ((!(((1747311917 ^ (arr_15 [i_5]))))));
                var_24 = (min(var_24, ((max((min((((arr_16 [i_7]) + var_3)), (!-78))), ((max((arr_5 [i_7]), 389209713))))))));
                var_25 ^= (((arr_6 [i_5] [i_5]) / (arr_19 [i_5] [i_5] [i_5])));
                var_26 -= ((((-6 ? var_11 : ((-432820125 ? 78286142 : 0)))) >> ((((~((((arr_16 [i_7]) || var_6))))) + 7))));
            }
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                var_27 = (min(var_27, ((max((((min(35, -110)))), (arr_15 [i_6]))))));
                arr_25 [i_5] [i_6] [i_5] = ((-(((var_0 == (!3331697204))))));
                var_28 = (arr_13 [i_5]);
            }
            arr_26 [i_5] [i_6] [i_6] = arr_15 [i_5];
            var_29 = max(((var_8 ^ (arr_11 [i_6]))), (-18 / 201665575));
        }
    }
    for (int i_9 = 1; i_9 < 11;i_9 += 1)
    {
        var_30 = var_10;
        var_31 ^= (!876402213);

        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            var_32 &= ((!(((-119 ? var_2 : (((arr_5 [i_10]) + (arr_15 [i_10]))))))));
            arr_32 [i_9] [i_10] = (((arr_29 [i_10]) + (!120)));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    {
                        var_33 = (max(var_33, (~-1)));
                        var_34 = (((var_8 / (arr_36 [i_11] [i_11]))) / (((arr_7 [i_11]) % 63488)));

                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_35 = (min(var_35, (arr_12 [i_12] [8] [i_12])));
                            arr_43 [i_14] [i_11] = ((-(arr_33 [i_9])));
                            var_36 = (((arr_7 [i_11]) + 1));
                        }
                    }
                }
            }
            var_37 = (min(var_37, (((var_3 | (arr_28 [i_9 + 2]))))));
        }
        for (int i_15 = 2; i_15 < 11;i_15 += 1)
        {
            arr_48 [i_15] = (max((!0), ((!(((arr_41 [i_9] [i_15] [i_15]) && (arr_10 [i_15])))))));
            var_38 ^= ((-6 + (((arr_6 [8] [i_9 + 2]) / (arr_42 [i_15 - 2] [i_15] [i_15] [i_9 - 1] [i_9 - 1])))));
        }
        var_39 = 373078947;
    }
    var_40 |= var_1;
    #pragma endscop
}
