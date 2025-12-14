/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [14] [18] |= ((1 % ((-var_2 << (((((arr_2 [16]) ? -212366237 : (arr_1 [18] [18]))) + 212366255))))));
                var_16 = var_13;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_24 [i_3] [i_3] [i_3] [i_5] [i_6] [i_6] = ((-(-26642 | -41)));
                                arr_25 [i_3] [i_5] [i_3] = (((var_11 * (arr_20 [i_2] [i_4] [i_2] [i_6]))));
                            }
                        }
                    }
                }
                var_17 = (max(var_17, (((max((arr_1 [i_2] [18]), (((arr_8 [i_3]) << (((arr_2 [0]) - 59)))))) <= (((((arr_14 [8] [i_3] [8] [8]) && ((((arr_3 [i_2]) ? -13578 : var_13)))))))))));
                var_18 = (((((((min((arr_8 [i_2]), var_0))) || (((arr_2 [i_3]) <= (arr_18 [i_2] [i_2] [i_3] [i_2])))))) > ((((8191323411154442920 * 7360) && -212366216)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 9;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {
                    var_19 = (((var_11 * 10) / var_12));
                    var_20 -= ((((((-82857783 ? var_13 : var_13))) ? var_4 : (arr_10 [i_9]))));
                    var_21 = var_2;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 9;i_11 += 1)
                        {
                            {
                                var_22 = ((((arr_2 [i_10]) ? (arr_2 [i_10]) : var_13)));
                                arr_40 [i_7] [i_8] [i_7] [i_10] [i_10] = (((arr_31 [i_7 + 1]) == (((((arr_31 [i_7 - 2]) && (arr_31 [i_7 - 1])))))));
                                arr_41 [i_7] [i_7] [i_10] [i_7] [i_7] [4] = (min((((arr_36 [i_7 - 1]) ? (arr_36 [i_7 - 2]) : (arr_36 [i_7 - 2]))), (((arr_36 [i_7 - 2]) - (arr_36 [i_7 + 1])))));
                                arr_42 [i_7] [i_8] [i_9] [i_10] [i_10] [i_10] [i_11] = max((((((((arr_23 [i_7] [i_8] [i_9] [i_7] [i_11]) * 90))) != ((-(arr_15 [i_7] [i_8] [i_9] [i_10])))))), ((((((arr_15 [i_7] [i_9] [i_10] [i_10]) ? (arr_0 [i_10]) : var_13))) ? (((arr_16 [i_9] [i_8] [i_9] [i_10] [i_11] [i_9]) ? var_2 : var_5)) : (((var_13 < (arr_20 [i_8] [i_9] [i_10] [i_11])))))));
                                arr_43 [i_10] [i_10] = ((((((arr_16 [i_7 - 1] [i_7 - 1] [i_7] [i_7 + 1] [i_11 + 1] [i_11 - 3]) + (arr_2 [i_10])))) ? ((var_3 | (arr_16 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 2] [i_11 + 1] [i_11 - 3]))) : (~18)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 |= (((var_4 ? (max(var_10, var_5)) : var_2)));
    #pragma endscop
}
