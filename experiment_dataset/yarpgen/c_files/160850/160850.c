/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_8));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] &= (arr_2 [9]);
        arr_4 [i_0] [i_0] |= ((4294967295 ? (arr_0 [2] [i_0 + 2]) : 3225547291934946217));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_12 = (min(var_12, ((((arr_5 [i_1] [i_0 + 1]) ? (arr_5 [i_0 + 2] [2]) : var_6)))));
            var_13 *= (arr_5 [i_0 + 4] [6]);

            for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
            {
                var_14 = var_7;
                var_15 = ((arr_8 [i_0]) > ((((arr_1 [i_1]) ? (arr_0 [i_0] [i_0]) : var_0))));
            }
            for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
            {
                var_16 += (((arr_11 [i_0 - 1] [i_3] [i_3] [10]) ? (((arr_12 [i_3] [i_1] [i_0]) & (arr_1 [i_0]))) : (arr_10 [i_1] [i_1] [i_1])));
                var_17 = (arr_10 [i_0 + 1] [i_1] [i_1]);
                arr_13 [i_0 + 2] [i_1] [i_0 + 2] |= var_10;
            }
            for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
            {
                arr_17 [i_4] = (arr_2 [i_1]);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            arr_22 [i_0] [i_1] [i_4] [i_5] [i_6] [i_4] [i_0 + 2] = (((((23 ? 3176647503933705427 : 2137115517))) ? (arr_14 [i_0 + 4]) : ((var_9 * (arr_21 [i_0 - 2] [i_1] [6] [i_5] [i_6])))));
                            var_18 = (arr_14 [0]);
                            var_19 *= ((177 ? 5315292623897711458 : 12587));
                            var_20 = (arr_21 [i_0] [i_1] [i_4] [i_5] [i_6]);
                        }
                    }
                }
                var_21 = (arr_7 [1] [13] [i_4]);
            }
        }
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
    {
        var_22 = ((((((arr_21 [i_7] [13] [i_7] [i_7] [i_7]) & 96))) ? (((arr_11 [2] [2] [i_7] [14]) & (arr_11 [i_7] [i_7] [i_7] [i_7]))) : ((min((arr_21 [i_7] [i_7] [i_7] [i_7] [i_7]), (arr_21 [i_7] [i_7] [i_7] [i_7] [i_7]))))));
        arr_26 [i_7] = ((((65 <= (arr_20 [i_7] [i_7] [i_7] [4] [4] [i_7] [i_7]))) ? ((-9223372036854775797 ? 24499 : 180)) : (((!(arr_15 [i_7] [i_7] [i_7] [i_7]))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
    {
        var_23 = (((arr_25 [i_8]) ? ((var_1 / (arr_0 [i_8] [i_8]))) : var_1));
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    {
                        var_24 = ((var_2 + 2147483647) << (var_4 - 17228949286073565479));

                        for (int i_12 = 2; i_12 < 10;i_12 += 1)
                        {
                            arr_42 [i_10] [7] = var_3;
                            arr_43 [i_10] [i_11] [i_9] [i_9] [i_9] [i_10] = (arr_24 [i_9 + 2]);
                            var_25 = (arr_7 [i_9] [i_10 - 1] [i_12 + 1]);
                        }
                        var_26 = (arr_29 [11] [i_9 + 1]);
                    }
                }
            }
        }
        var_27 = ((1152921504606846976 ? var_4 : var_9));
        var_28 = (max(var_28, (arr_1 [i_8])));
    }
    for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
    {
        var_29 ^= ((((min((((arr_10 [i_13] [i_13] [i_13]) & (arr_10 [i_13] [i_13] [15]))), (((var_6 || (arr_29 [i_13] [i_13]))))))) ^ (((var_5 | var_8) ? (arr_40 [i_13] [i_13] [i_13]) : (((arr_27 [i_13]) ^ (arr_28 [i_13])))))));
        var_30 = (max(var_30, ((min(((4294967286 ? 177 : 0)), (arr_15 [i_13] [i_13] [i_13] [i_13]))))));
    }
    #pragma endscop
}
