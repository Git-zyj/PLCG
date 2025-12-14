/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [2] = ((5737 ? -30592 : -23757));
                    var_12 = ((~(((arr_1 [i_0]) / (arr_1 [i_2])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            {
                var_13 &= var_5;
                arr_14 [i_4] [i_4] = 12110;
            }
        }
    }

    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        arr_19 [i_5] = var_4;
        arr_20 [i_5] = (((32761 | var_0) ^ ((-(arr_3 [18] [7])))));

        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_14 += (((-32767 - 1) ? 6950 : -77));
            arr_24 [i_5] [i_6] = (((((min(-12626, (((((arr_5 [i_5] [12] [4] [i_6]) + 2147483647)) >> (12609 - 12598))))) + 2147483647)) >> ((((((var_8 ? (arr_13 [i_5] [13] [i_5]) : (arr_1 [i_6]))))) - 4411))));
        }
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 13;i_9 += 1)
                {
                    {
                        var_15 -= max(var_3, (max(5737, (arr_3 [i_7 + 4] [i_7 + 4]))));
                        arr_31 [i_5] [i_5] [i_8] [i_9] [i_5] [i_5] = (((((-28241 ? ((min(-32767, (arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) : (((arr_21 [i_8]) / (arr_30 [i_9 + 1] [i_8] [i_5] [i_5] [i_7] [i_5])))))) ? (((((var_0 ? var_6 : var_0))) ? (arr_13 [i_7 + 4] [i_9 + 2] [i_7 + 4]) : (arr_30 [i_5] [14] [i_8] [i_5] [i_5] [i_7 + 4]))) : ((((((arr_29 [2] [i_7] [i_8] [i_9]) ? (arr_11 [i_5] [3]) : var_2)) < (var_4 < 32739))))));
                    }
                }
            }
        }
    }
    for (int i_10 = 4; i_10 < 12;i_10 += 1)
    {
        var_16 = 2819;
        arr_34 [i_10] = ((-12111 ? (arr_8 [i_10 - 4] [i_10 - 3]) : (((((arr_8 [i_10 - 4] [i_10 + 3]) + 2147483647)) >> (var_11 + 30444)))));

        for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
        {
            arr_37 [i_10] [i_10] = (min((arr_2 [i_10 - 4]), ((~(arr_32 [i_10 + 2])))));
            var_17 *= ((-((-29721 ? -20522 : -19140))));
        }
        for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
        {
            var_18 = (((arr_21 [i_10]) ? (min((~5747), (arr_38 [i_10]))) : ((min(var_6, var_4)))));
            var_19 = ((~(-5356 && 29093)));
            var_20 = (((((((max(var_6, (arr_28 [i_10 - 2] [9] [i_10 - 2] [i_10 - 2])))) / ((max(var_8, -17797)))))) ? ((min(32767, var_7))) : ((((arr_17 [i_12]) >= (arr_17 [i_10]))))));
        }
    }
    var_21 = (((!var_0) - var_10));
    #pragma endscop
}
