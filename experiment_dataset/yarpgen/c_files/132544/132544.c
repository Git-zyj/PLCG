/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 19;

    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        var_13 = ((+(((arr_1 [i_0]) - (arr_1 [i_0])))));
        var_14 += arr_2 [i_0];
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_15 = (((arr_5 [i_1 + 1] [i_1 + 1]) ? 2147352576 : -3646980899933947080));
        var_16 = ((1 % (arr_4 [i_1 + 2] [i_1])));
        var_17 *= (-1655198517804288565 > 8);

        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            var_18 = ((-97 ? 1 : 21));

            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                var_19 -= ((-3 == (arr_4 [i_3 - 1] [i_2 - 1])));
                arr_11 [i_1] [i_1] [i_3] [i_1] = ((221052894644624599 ? 1 : -40));
                var_20 |= (((arr_10 [i_1] [i_2] [i_3]) && (168 % var_1)));
            }
            for (int i_4 = 3; i_4 < 16;i_4 += 1)
            {

                for (int i_5 = 4; i_5 < 14;i_5 += 1)
                {
                    var_21 = ((1 ? (arr_15 [i_1 + 2] [i_2 - 1] [i_4] [i_5] [i_5 - 3] [i_5]) : (arr_13 [i_4 - 2] [i_2 - 1] [i_1 + 1])));
                    arr_17 [i_1] [i_1] [i_1 + 3] = arr_15 [17] [i_2] [i_4] [i_2] [i_2] [i_4];
                }
                var_22 = (arr_4 [i_1] [i_1 + 4]);
            }
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    var_23 = (((697468031532534863 & (arr_13 [i_1 + 1] [i_1] [i_1]))));
                    arr_22 [i_7] [i_2 - 2] = (((arr_16 [i_7 + 1] [i_7] [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1]) || 30));
                    arr_23 [i_7 + 1] [i_7] [i_6] [i_7] [i_1] = (arr_10 [i_2 - 1] [i_1 + 2] [i_1 + 2]);
                    arr_24 [i_7] [i_6] [i_2 + 1] [i_7] = 19;
                    arr_25 [i_1] [10] [i_7] [i_1] = (1 ? 1 : 7371006307332198618);
                }
                arr_26 [i_1] [12] = (((arr_15 [i_2 - 1] [0] [i_2 + 1] [i_2 - 2] [i_2 - 2] [5]) ? (-7721753947218966707 / 1) : 24));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 15;i_9 += 1)
                    {
                        {
                            arr_31 [i_1] [i_1 + 3] [i_9] [i_1] [i_1] [i_1] [i_1] = ((~(arr_3 [i_1 + 1])));
                            var_24 = var_2;
                        }
                    }
                }
            }
            for (int i_10 = 2; i_10 < 17;i_10 += 1)
            {
                var_25 = (min(var_25, (((arr_3 [i_10]) | ((var_0 ? (arr_3 [i_1 + 4]) : -221052894644624597))))));
                arr_34 [i_10 - 1] [9] [9] = (((arr_32 [10] [i_2] [i_10]) ? (((arr_27 [i_10 - 1] [i_2 - 2] [i_10] [i_10 - 1]) ? 1 : -221052894644624620)) : (((var_11 ? var_6 : var_6)))));
                var_26 = (min(var_26, (arr_16 [i_1 + 1] [i_2 - 2] [i_10 - 2] [i_10] [i_10] [i_10 + 1])));
            }
            var_27 = (((arr_12 [i_1] [i_2 - 1] [i_2 - 1]) ? ((((!(arr_28 [i_1 + 1] [i_1] [i_1] [16] [i_2 - 2]))))) : (arr_20 [i_2 - 1] [i_2] [i_2 - 1] [i_1 + 1] [i_2])));
        }
        for (int i_11 = 1; i_11 < 14;i_11 += 1)
        {
            var_28 = (((arr_8 [i_11 + 3]) ? (arr_14 [i_11] [i_11 + 3] [i_1 + 3] [i_1 - 1]) : (arr_13 [i_1 + 2] [i_11 + 1] [i_11 + 1])));
            var_29 = ((-var_4 > (arr_27 [14] [i_11 + 3] [i_11 + 1] [5])));
        }
        for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
        {
            var_30 ^= var_4;
            arr_41 [i_1] [i_1 + 2] = ((~((((arr_27 [i_1 + 4] [3] [i_1 + 1] [i_12]) >= var_11)))));
        }
        for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
        {
            var_31 += (arr_20 [i_1 + 2] [i_1 + 3] [i_1 + 3] [i_1] [i_13]);
            var_32 = (min(var_32, ((((arr_18 [i_1]) ? var_1 : 189)))));
        }
    }
    #pragma endscop
}
