/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((~(((var_4 <= (((arr_1 [i_0]) % var_4)))))));
        arr_3 [i_0] [i_0] = (((-17517 / 17517) ? (var_6 / var_3) : ((18186989467293588420 / (arr_0 [i_0])))));
        arr_4 [i_0] = (((-1 < 168) >= (((-17517 && (arr_1 [i_0 - 1]))))));
        arr_5 [10] |= ((((((-17517 > (var_13 + var_7))))) < ((340355068 / (((arr_0 [0]) ? (arr_0 [0]) : (arr_1 [i_0])))))));
        var_16 = ((17502 < 65527) > (((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) || var_14))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_17 = (((var_5 <= 4193280) * (9 || -17502)));
                arr_14 [i_3] [i_3] [1] [i_1] = (var_13 / var_14);
            }
            for (int i_4 = 3; i_4 < 10;i_4 += 1)
            {
                arr_18 [i_1] [i_1] [i_2] [10] = (-1 * -17493);

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_18 -= (((arr_10 [i_1 - 1] [i_1 - 1]) | -17518));
                    var_19 = ((var_13 & (arr_8 [i_4 + 1] [i_1 - 1])));
                    var_20 *= ((~(var_10 > var_6)));
                }
                for (int i_6 = 1; i_6 < 8;i_6 += 1)
                {
                    var_21 = (((arr_1 [i_4 + 1]) && (!6785030359495185453)));
                    var_22 *= (((~var_7) * (arr_10 [i_4] [i_4 - 1])));
                    arr_23 [i_1] [i_1] [i_1] [i_4] [i_1] [i_6] = (var_1 / var_10);
                    arr_24 [i_6] [i_4] [i_1 - 1] [i_1 - 1] [i_6] = ((((arr_0 [i_6]) || var_7)) || (17517 - var_6));
                    var_23 *= ((var_12 ? (arr_17 [i_6 + 3]) : ((((-23406 + 2147483647) << (33292288 - 33292288))))));
                }
            }
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                arr_28 [i_1] [4] [i_2] [11] = ((-var_11 < (((1 % (arr_9 [i_2]))))));
                var_24 = (6214 ^ var_8);
                var_25 ^= (var_0 / var_6);
            }
            arr_29 [i_1] [i_1] = ((-17482 ? (-32750 / var_2) : 1));
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            arr_32 [i_1] [i_1 - 1] [i_1 - 1] = ((((7395 == 1000637612) <= ((var_6 ? 17482 : var_12)))) ? (((arr_31 [i_1 - 1]) ? var_1 : 2044)) : ((((arr_11 [i_1 - 1]) * 63))));
            arr_33 [i_1] [i_8] = (((((((arr_11 [i_1]) * (arr_9 [i_1]))) / (arr_20 [i_1] [i_1 - 1] [i_1] [i_1 - 1]))) ^ (((0 > 55506) ^ (~var_7)))));
        }
        arr_34 [i_1] [i_1] = ((((((((arr_12 [i_1] [i_1 - 1]) << (var_12 - 18230))) > ((((arr_20 [i_1] [i_1] [i_1] [i_1]) || var_11)))))) != (((((var_10 || (arr_0 [0]))) && (var_1 && var_12))))));
    }
    for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
    {
        arr_37 [i_9] = ((((-((14075134853917219535 * (arr_30 [i_9] [i_9]))))) / ((((((var_9 ? -2679 : var_13))) ? (arr_9 [i_9]) : (((arr_35 [i_9]) / (arr_9 [i_9]))))))));
        arr_38 [i_9] = (-var_11 > ((((50 * var_8) ^ (5687604454184032059 <= var_9)))));
    }
    var_26 ^= ((+(((var_5 + var_3) | (-17502 >= 0)))));
    var_27 = ((((((var_13 || var_6) || (((-7619186622267680036 ? 17502 : var_15)))))) ^ ((~(var_9 ^ var_7)))));
    var_28 = var_10;
    #pragma endscop
}
