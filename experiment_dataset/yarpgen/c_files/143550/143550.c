/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (((((52338 ? -8659384272078108977 : (((-2147483644 ? (arr_8 [i_4] [i_3] [i_2] [i_0]) : 0))))) > 25)))));
                                var_21 = ((((arr_8 [i_0] [1] [i_1 - 1] [4]) ? (arr_7 [i_0 + 1] [i_1] [i_1 - 1]) : (arr_15 [9] [7] [i_1 + 1]))));
                            }
                        }
                    }
                    var_22 = ((((((((!(arr_12 [i_0] [i_0] [i_2] [7]))))) * (arr_1 [i_0 + 1]))) * (3487045689 ^ 1054210277672452826)));
                    var_23 = ((((~((((arr_8 [i_0] [i_1] [i_2] [10]) > (arr_10 [0] [i_0] [i_0] [0] [i_2]))))))) ? ((var_13 + (arr_5 [i_2] [i_0]))) : ((((arr_13 [i_0] [i_1 - 2] [i_0 + 1] [i_1] [8]) ? (!var_5) : ((-(arr_10 [2] [3] [i_0] [3] [i_0])))))));
                }
            }
        }
    }
    var_24 = ((var_18 && ((((((var_16 << (var_19 - 2850701179564297211)))) ? (var_7 && var_18) : ((max(var_16, var_5))))))));
    var_25 = (var_5 ? (((!(var_15 * var_3)))) : (!var_0));

    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
    {
        var_26 = (((var_7 >= (arr_13 [2] [i_5] [i_5] [2] [i_5]))));

        /* vectorizable */
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            arr_21 [i_5] [i_6] = (((arr_15 [i_6 - 1] [i_6 + 1] [i_6 - 2]) == (arr_18 [i_6 + 1] [i_6 - 2])));
            var_27 = (min(var_27, (((var_2 ? (((var_2 ? (arr_6 [i_5] [i_6]) : var_0))) : (arr_20 [2]))))));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_25 [i_5] = (arr_4 [i_5]);
            var_28 *= var_1;
        }
        var_29 = (min(var_29, ((~(((!(arr_6 [i_5] [i_5]))))))));
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
    {
        arr_29 [i_8] [i_8] = (((((+(((arr_0 [6] [i_8]) - (arr_28 [i_8])))))) ? (((arr_13 [i_8] [i_8] [i_8] [i_8] [i_8]) ? var_18 : (arr_16 [i_8]))) : (arr_18 [i_8] [i_8])));
        arr_30 [4] [4] = (((max((arr_2 [i_8]), (arr_7 [i_8] [i_8] [i_8]))) <= (arr_10 [i_8] [3] [i_8] [i_8] [1])));
        arr_31 [i_8] [3] = (arr_16 [5]);
    }
    for (int i_9 = 3; i_9 < 7;i_9 += 1)
    {
        var_30 = (min(var_30, (((!((!(var_3 < var_14))))))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                {
                    arr_40 [1] [i_10] [i_11] [i_11] = ((((((var_9 ? var_1 : var_11)) / (min(var_3, (arr_12 [i_10] [i_10] [i_11] [i_9]))))) < (((arr_34 [i_9 + 2] [i_9 - 1]) ? ((var_8 ? var_16 : (arr_2 [3]))) : var_3))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 10;i_13 += 1)
                        {
                            {
                                arr_47 [0] [i_11] [i_11] [i_11] [7] = (((((var_8 ? (arr_46 [i_9 - 3] [i_11] [i_13 - 2]) : (arr_46 [i_9 + 2] [i_11] [i_13 - 2])))) ? (arr_46 [i_9 - 1] [i_11] [i_13 - 3]) : ((((arr_46 [i_9 - 1] [i_11] [i_13 - 1]) == (arr_46 [i_9 + 2] [i_11] [i_13 - 2]))))));
                                var_31 = (min(var_31, ((((61495 || 6891245203454626919) ^ (((arr_11 [i_9] [i_9] [i_9] [i_9 + 2]) & (arr_45 [i_9] [8] [i_13] [i_13 - 4] [i_13 + 1]))))))));
                                var_32 = ((arr_46 [i_9 - 2] [i_11] [i_13 - 1]) ? (arr_10 [4] [i_10] [i_10] [8] [4]) : ((min((arr_34 [9] [i_11]), var_16))));
                            }
                        }
                    }
                    var_33 ^= (arr_5 [i_10] [i_10]);
                }
            }
        }
    }
    #pragma endscop
}
