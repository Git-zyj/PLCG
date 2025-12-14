/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min(((min(var_5, var_4))), (max(((var_8 ? 18446744073709551615 : 1)), (var_3 / var_6))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_14 = 1;
                            var_15 = (arr_2 [i_1 - 2]);
                            var_16 = (~1);
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_17 = 67;
                    var_18 |= ((-(arr_5 [i_0] [i_0])));
                    arr_16 [11] [i_5] [i_2] [14] = var_1;
                }
                var_19 = var_7;
                arr_17 [i_0] [i_1 + 3] = -1;
            }
            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_20 = (((arr_20 [i_1 + 1] [i_6 + 1] [i_6] [i_6]) && (arr_24 [i_1 + 3] [i_6 + 1] [17] [17] [17])));
                            arr_28 [i_0] [i_7] [i_6 - 1] [i_7] [i_8] = ((var_3 >> (((arr_21 [i_1] [i_1] [i_1 + 3] [i_1]) - 4594))));
                        }
                    }
                }
                var_21 = var_5;
                arr_29 [i_6] [i_0] [i_0] |= (15239416486113348587 ^ 539758284);
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_22 = (min(var_22, (arr_15 [i_0] [i_0] [i_0] [i_1] [i_9])));
                var_23 = ((((var_10 + (arr_6 [i_0]))) >= (arr_26 [1] [13] [i_9])));
                var_24 |= var_3;
                arr_33 [i_0] [i_9] [i_0] = ((-44988 ? (arr_27 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_9] [i_9] [i_9]) : (arr_30 [i_9] [i_1 - 2] [i_1 + 1] [i_0])));
                var_25 = (arr_6 [i_0]);
            }
            var_26 |= (((arr_31 [i_1] [i_1 + 3] [i_1 + 3]) && (arr_11 [i_1 + 2] [0] [i_1 - 2] [0])));
            var_27 = var_3;
        }
        arr_34 [i_0] = (((((arr_12 [11] [i_0] [11] [i_0] [i_0]) || 2672453356712199781)) ? (13940435678035342938 + -9) : var_11));
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 15;i_12 += 1)
            {
                {
                    var_28 = var_7;
                    var_29 = -1;
                    var_30 = ((15 ? 2147483647 : 18446744073709551615));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 16;i_14 += 1)
                        {
                            {
                                var_31 = (max(var_31, var_12));
                                var_32 = var_9;
                                var_33 |= (max(var_9, 1));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
