/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_3 & var_10);
    var_12 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = (((!var_8) ? var_7 : (((var_8 >= (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_1] = ((~(arr_7 [i_1] [8] [i_2] [i_2] [i_4 - 1] [i_0])));
                                var_14 = (((arr_7 [i_1] [i_4 + 2] [i_1] [i_3] [i_1] [i_1]) >= -14));
                                var_15 = var_6;
                                var_16 = (((arr_5 [i_3] [i_3] [i_2]) ? var_6 : (arr_6 [i_0] [i_2])));
                            }
                        }
                    }
                    arr_13 [i_1] [i_1] [i_1] [12] = (arr_11 [i_1]);
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    var_17 = (((((~(((arr_14 [i_7]) ? 37631 : (arr_17 [i_5] [2] [i_7])))))) ? var_1 : ((((var_3 || (arr_19 [i_6] [i_6])))))));
                    arr_21 [20] [11] [i_5] [i_7] = ((((((arr_20 [i_5]) == (arr_18 [i_5] [i_5 + 1])))) >> ((((var_2 ? (arr_20 [i_5]) : (arr_20 [i_5 + 1]))) - 10904))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                arr_29 [i_5] [0] = ((+((var_2 ? (arr_14 [i_5]) : (arr_14 [i_5])))));
                                var_18 = ((-((((arr_24 [i_5 + 2] [i_5] [i_5] [i_5]) || (arr_28 [i_5] [i_5] [i_5 + 1] [i_5] [i_5 + 3]))))));
                                var_19 = var_1;
                                var_20 = max((arr_15 [i_5] [i_5]), (((14937692422371105906 > 57634) ? var_3 : ((var_3 * (arr_22 [i_9] [i_8] [i_5] [i_5]))))));
                                var_21 = arr_23 [i_8] [i_8] [i_7] [i_8] [i_9];
                            }
                        }
                    }
                    arr_30 [i_5 + 2] [i_5 - 1] [i_5] [i_5 + 3] = var_3;
                    var_22 = (((arr_28 [i_5 + 3] [i_6] [i_7] [i_7] [i_7]) - (((var_8 + var_9) - (arr_28 [i_5] [i_5 + 4] [i_5 + 2] [i_5] [21])))));
                }
            }
        }
        var_23 ^= var_6;
    }
    #pragma endscop
}
