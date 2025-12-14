/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (127 && 1);
    var_13 &= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = var_6;
                var_14 = (max(var_14, ((max((((~(arr_3 [i_1 + 1] [i_0] [i_0])))), ((1 / (arr_4 [i_1 + 1] [1] [i_1]))))))));
                arr_6 [i_0] [i_1] = (arr_4 [i_0] [i_1] [i_0]);

                for (int i_2 = 3; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((42 ? (((arr_3 [i_1 + 1] [i_1 + 1] [i_1]) ? (arr_3 [i_1 + 1] [i_2] [i_2]) : (arr_3 [i_1 + 1] [i_2 - 3] [i_2 - 3]))) : -1513));

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        arr_12 [0] [0] [i_1 + 1] [4] [i_3] [i_3] &= var_1;
                        var_15 = var_11;
                        var_16 = (min(var_16, ((min((((((min((arr_10 [4] [i_1 + 1] [0] [3]), (arr_7 [10])))) ? (arr_8 [i_0] [i_1 + 1] [9]) : (-256 + var_8)))), (((var_6 - (arr_3 [i_0] [i_1] [i_1])))))))));
                        arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] [i_1] = (((max(var_11, 1))) >= (!16));
                        arr_14 [i_3] [i_1] [i_1] [i_0] = ((+(((0 > var_11) ? var_0 : (((var_3 ? (arr_2 [i_1]) : var_11)))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        var_17 -= (((((18446744073709551615 ? (arr_11 [i_2] [i_4]) : 0))) ? var_6 : (!18446744073709551615)));
                        arr_17 [i_0] [i_1] [i_1] = (((((arr_0 [i_0]) != var_7)) ? ((2461031290 ? 150 : 29234)) : 12582912));
                    }
                    /* vectorizable */
                    for (int i_5 = 4; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        var_18 = (min(var_18, ((((arr_3 [i_2 + 1] [i_2 - 2] [i_2 + 1]) - var_8)))));
                        var_19 *= -214;
                        var_20 = (arr_19 [i_2 - 1] [i_1] [i_1] [i_1]);
                    }
                    arr_21 [i_1] [i_1 + 1] [i_1 + 1] = (max(((((min(3489454038, 45))) ? -8 : 18446744073709551608)), 214));

                    for (int i_6 = 4; i_6 < 12;i_6 += 1)
                    {
                        var_21 = var_3;
                        arr_24 [i_0] [i_1 + 1] [i_1] [i_6] = ((((min(10, (arr_22 [i_1] [i_1] [i_2] [i_1 + 1] [i_1] [i_1])))) ? (((var_3 ? var_7 : 3))) : (min((arr_10 [5] [5] [i_2 + 1] [i_6 - 4]), (arr_2 [i_1])))));
                        var_22 = (((min(-9223372036854775806, 234)) >= 1));
                    }
                    arr_25 [i_0] [10] [i_1] = (((arr_7 [i_1]) ? (((((max(229, 51))) - (((arr_15 [i_0] [5] [i_2] [3]) ? var_2 : var_5))))) : (((6 - 109) - (((((arr_15 [i_2] [i_2 - 1] [i_2] [i_2]) <= (arr_0 [i_2])))))))));
                }
                for (int i_7 = 3; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    var_23 = (min(var_23, 86));
                    arr_28 [i_1] [i_1] [i_7] [i_7] = ((-((((var_11 + 113) != (((-2147483647 - 1) ? 2645585144 : 204)))))));
                }
            }
        }
    }
    var_24 = var_5;
    #pragma endscop
}
