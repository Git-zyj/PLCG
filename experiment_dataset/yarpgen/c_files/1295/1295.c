/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [2] [2] = ((~((min(235, 251)))));
                arr_6 [i_0] [i_1] = ((-(arr_2 [i_1 - 2])));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 *= var_3;
                                var_16 = (arr_2 [i_1 - 2]);
                            }
                        }
                    }
                    var_17 = (min(var_17, (((((var_7 ? (arr_10 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2]) : 3833748047))) ? ((((((arr_16 [i_0] [i_0] [18]) ? (arr_16 [i_0] [1] [i_2]) : 32083))) ? (((arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 2]) ? 65510 : 3247267064)) : 6839)) : (((var_4 ? (~var_6) : ((min(31588, (arr_9 [i_2] [i_2] [i_2] [i_2])))))))))));
                }
                for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    var_18 = (max(145, (max(((244 ? var_14 : (arr_12 [i_0] [i_1] [i_0] [i_5]))), ((var_9 ? var_12 : (arr_4 [i_5])))))));
                    var_19 = (((((var_6 ? var_11 : 190)) > (((var_12 >> (var_3 - 55080)))))) ? ((((((arr_7 [i_0]) ? 21390 : var_0))) ? (arr_12 [13] [13] [i_5 + 2] [i_1]) : (var_13 / var_0))) : (((((((arr_19 [i_0] [i_5] [i_5] [i_0]) ? -6886436505729621130 : var_7)) + 9223372036854775807)) >> (1 == var_5))));
                    var_20 = ((!((((max(var_2, (arr_8 [i_0] [10])))) || ((!(arr_18 [i_5] [i_1 + 1] [23] [i_1 - 2])))))));
                    arr_20 [i_0] [i_5] = (arr_7 [13]);
                }
                for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
                {
                    arr_23 [i_6] [i_6] [i_6] [i_6 + 2] = (max((((arr_10 [i_6 + 1] [i_6 + 2] [i_1 + 2] [i_1 + 2]) ? (arr_10 [i_6 + 2] [i_6 + 2] [i_1 + 2] [i_1 + 2]) : (arr_10 [i_6 + 2] [i_6 + 1] [i_1 - 2] [i_1 - 2]))), -8146));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_21 *= ((!((min((((arr_0 [i_1 - 2] [i_1 - 2]) ? var_2 : var_1)), ((max(var_14, var_3))))))));
                                arr_29 [i_6] [i_1] [i_6] [i_7] [1] = (max(((max(var_3, (!-1)))), ((~(((var_14 <= (arr_18 [i_6] [14] [i_6 + 2] [i_6]))))))));
                            }
                        }
                    }
                    var_22 = (max(1642254621, (82 - var_0)));
                }
            }
        }
    }
    var_23 = (((var_13 + -2492215232700190922) - ((-var_8 ? var_9 : var_13))));
    var_24 = (!var_4);
    #pragma endscop
}
