/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_0, ((var_9 ? (var_10 && var_0) : (min(var_10, var_10))))));
    var_12 = (max(var_12, (((~(11714380301112217804 != 8396904763848910653))))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_13 = ((((var_8 * (arr_0 [i_0 - 1]))) ^ var_5));
        var_14 = (min((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 1]))), ((~(arr_0 [i_0 + 1])))));
        var_15 = min((288221580058689536 / 16006421931854726999), (((~(arr_0 [i_0 - 1])))));
        var_16 = ((max(var_5, (arr_0 [i_0 - 1]))) * (((-(arr_0 [i_0 - 1])))));
        var_17 = (max(var_17, ((((((~((-(arr_1 [i_0])))))) ? (arr_1 [i_0]) : ((min((arr_0 [i_0 - 1]), (arr_1 [i_0 - 1])))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = ((((!(arr_4 [i_1] [i_1]))) && var_5));
        var_19 &= ((max(288221580058689533, 1)) > ((~(arr_2 [i_1] [i_1]))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_20 |= ((-(arr_3 [i_2])));
        var_21 *= ((((((arr_1 [i_2]) ? var_10 : (arr_3 [i_2])))) ? (arr_4 [i_2] [i_2]) : var_9));

        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_22 &= 9223372036854775808;

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_23 = ((arr_0 [i_3]) ? (arr_4 [i_4] [i_3]) : (((arr_6 [i_2]) & var_1)));
                var_24 ^= (var_6 ? (arr_6 [i_4]) : (arr_12 [i_4] [i_3] [i_2]));
                var_25 = (((((var_5 * (arr_15 [i_3])))) ? (arr_11 [i_3]) : (var_2 / var_2)));
            }
            for (int i_5 = 2; i_5 < 9;i_5 += 1) /* same iter space */
            {
                var_26 = (((1 - 16006421931854726985) ? (arr_3 [i_3]) : var_0));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_27 = (((((arr_17 [i_2]) ^ (arr_20 [i_3] [i_3] [i_6] [i_7])))) ? (((arr_19 [i_2] [i_2] [i_5]) ? (arr_10 [i_2] [i_5] [i_7]) : var_0)) : (((arr_22 [i_3] [i_6] [i_5] [i_3] [i_3]) * var_5)));
                            var_28 &= arr_24 [i_2] [i_6] [i_7];
                        }
                    }
                }
                var_29 = (3482681130024848651 ? (((arr_24 [i_3] [i_3] [i_3]) ? (arr_18 [i_2]) : var_9)) : (arr_8 [i_2]));
            }
            for (int i_8 = 2; i_8 < 9;i_8 += 1) /* same iter space */
            {
                var_30 = (((arr_19 [i_8 + 2] [i_3] [i_8]) != (arr_19 [i_8 - 2] [i_3] [i_8])));
                var_31 = ((((4468415255281664 ? (arr_13 [i_2] [i_2] [i_3] [i_3]) : (arr_12 [i_2] [i_3] [i_8 - 1]))) % (((arr_21 [i_2] [i_3] [i_3] [i_8]) ? var_8 : var_7))));
                var_32 &= (arr_17 [i_2]);
            }
            var_33 = (((((arr_27 [i_3]) ? (arr_2 [i_2] [i_3]) : var_4))) ? (arr_10 [i_2] [i_3] [i_2]) : (arr_4 [i_2] [i_3]));
            var_34 = (1 || 18158522493650862079);
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            var_35 *= (((arr_3 [i_2]) ? (arr_3 [i_2]) : (arr_10 [i_2] [i_2] [i_2])));
            var_36 += (((((arr_8 [i_9]) >= var_10)) ? ((~(arr_21 [i_2] [i_2] [i_9] [i_9]))) : (((arr_5 [i_9]) * (arr_12 [i_2] [i_9] [i_2])))));
            var_37 = var_10;
        }
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    var_38 = (min(var_38, (arr_8 [i_2])));
                    var_39 = ((((arr_12 [i_11] [i_10] [i_2]) != (arr_28 [i_10]))) && ((((arr_10 [i_11] [i_10] [i_2]) ? 16409923180596117590 : (arr_28 [i_10])))));
                    var_40 = (arr_18 [i_10 - 2]);
                    var_41 += (1 ? (arr_10 [i_10 - 2] [i_10 + 1] [i_10]) : 8112971847239058301);
                    var_42 = ((((var_2 ? (arr_3 [i_11]) : (arr_32 [i_10]))) < (arr_0 [i_10 - 2])));
                }
            }
        }
        var_43 = arr_29 [i_2] [i_2];
    }
    #pragma endscop
}
