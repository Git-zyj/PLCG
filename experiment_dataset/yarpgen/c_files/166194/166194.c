/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    var_10 -= ((~(arr_6 [18] [i_1] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_11 = (arr_1 [i_3]);
                                var_12 = var_3;
                                var_13 = (max(var_13, 524066801));
                                var_14 = (min(var_14, var_3));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [1] |= (arr_10 [i_0] [i_0 - 1]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] = 7408063407478625407;
                                var_15 = -7408063407478625412;
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    arr_25 [i_0 + 1] [i_0 + 1] = (((((arr_22 [i_1 + 1] [i_1] [i_7] [i_0 - 1]) ? 7408063407478625414 : var_3))) && ((min((arr_22 [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_0 + 2]), (arr_7 [i_0 + 3])))));
                    var_16 = ((((((max((arr_2 [i_0]), 524066801))) ? (arr_4 [i_0] [4]) : 3770900518)) == -5517266068932412581));
                }
                arr_26 [i_0] = -288474051;
                var_17 = (((((arr_7 [i_0 + 3]) ? (arr_7 [i_0 - 1]) : (arr_7 [i_0 + 1]))) + ((max((arr_7 [i_0 + 2]), (arr_7 [i_0 + 1]))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        {
                            arr_32 [i_9] [i_1 + 1] [i_1 + 1] [i_9] [i_1] [i_0 + 1] = max(var_6, (((arr_10 [i_0 + 3] [i_0 - 1]) ? 3770900512 : -5517266068932412579)));
                            var_18 = ((((((((3770900512 ? 237 : -1060294777))) ? var_4 : (arr_15 [i_9] [i_1 + 2] [i_8] [5] [i_9])))) ? (max(((var_1 ? var_4 : (-9223372036854775807 - 1))), -var_2)) : (((((min((arr_6 [i_9] [i_1 - 1] [i_8] [i_1 - 1]), (arr_19 [i_9] [i_8] [i_8] [i_1 - 1] [i_0])))) ? ((-18 ? var_7 : var_6)) : (5517266068932412579 <= var_9))))));
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_10 = 1; i_10 < 19;i_10 += 1)
    {
        var_19 = ((-(13 & 2173356303)));
        var_20 = (((-9223372036854775792 & var_2) ? ((-79 ? (arr_4 [i_10 + 3] [i_10]) : -20225)) : ((((arr_0 [i_10 + 2]) ? (arr_3 [i_10] [i_10 + 2] [i_10]) : var_5)))));
    }
    var_21 = ((-2173356328 >> (var_5 - 2126916744)));
    #pragma endscop
}
