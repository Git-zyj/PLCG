/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((!(var_0 == var_5))), (0 > var_10)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            var_20 ^= (((var_12 && (var_18 + var_13))));
            var_21 = 123;

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                arr_7 [i_0] [i_1 - 3] [i_2] |= var_16;
                var_22 -= ((min(((var_4 ? var_15 : (arr_6 [i_2] [i_2] [i_1] [i_0]))), (((var_16 ? var_0 : var_6))))));
            }
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_23 -= (max(-1, 3968));
                var_24 = min((((var_14 ? (arr_9 [i_1 - 3] [i_1]) : (arr_9 [i_1] [i_1 - 1])))), (((arr_6 [i_3] [i_1 + 3] [i_3] [1]) ? var_1 : var_0)));
            }
        }
        var_25 = (min(var_25, (((-((var_9 ? 145 : (arr_4 [i_0] [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_26 = ((var_6 < (arr_12 [12])));
        arr_13 [i_4] = 61567;
        var_27 = ((((var_7 ? var_18 : (arr_3 [i_4]))) < 61567));
        arr_14 [i_4] = (arr_2 [i_4] [i_4] [i_4]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_19 [i_5] [i_5] = (arr_18 [i_5]);
        var_28 *= ((3455058894613785803 == (arr_11 [i_5] [i_5])));
        var_29 -= (var_13 - var_8);

        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_30 -= (arr_17 [i_6]);
            var_31 = (arr_21 [i_6]);
            var_32 = -var_10;
            arr_22 [i_5] &= (((var_8 && (arr_0 [i_6]))));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_33 = (min(var_33, 121));
            arr_26 [2] = (((arr_0 [i_5]) ? (arr_0 [i_5]) : (arr_0 [i_5])));
            var_34 = (max(var_34, (((17405 ? var_3 : 1)))));
        }
    }
    #pragma endscop
}
