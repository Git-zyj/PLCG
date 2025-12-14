/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_16 = (((((arr_1 [i_0 - 1]) || ((((arr_0 [i_0] [i_0 + 1]) ? (arr_1 [i_0 + 4]) : (arr_1 [i_0]))))))) >> (((arr_1 [i_0 + 3]) - 80)));
        var_17 = arr_1 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        var_18 = (min(var_18, ((((arr_8 [i_1] [i_1 - 1] [i_1]) ? var_0 : (arr_8 [i_1] [i_1 - 1] [i_1]))))));

                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            var_19 = (30246 ? 18514 : (arr_5 [i_4 - 2]));
                            var_20 = (((((-(arr_1 [i_3])))) ? (arr_5 [i_0 + 4]) : (((arr_7 [i_0] [i_1] [i_0] [i_3] [i_4]) / -25490))));
                            var_21 *= var_10;
                            var_22 += var_6;
                        }
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        var_23 = (((((arr_10 [i_0] [i_1] [i_2] [i_2] [i_5] [i_1]) + 35290))) || (((var_2 ? (arr_7 [i_0] [i_1] [i_1] [i_2] [i_2]) : (arr_4 [i_5] [i_1 + 1] [i_0])))));
                        var_24 = var_8;
                        var_25 = (max((!35290), ((((arr_7 [i_2] [i_1] [i_1 - 1] [i_1] [i_0 - 1]) || (arr_13 [15] [i_0] [i_0] [i_1] [i_1 - 1] [i_2] [i_1]))))));
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_26 = (arr_10 [i_1] [i_6] [i_1 - 1] [i_1 - 1] [i_0] [i_1]);

                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_27 = -var_14;
                            var_28 ^= (((((!(arr_1 [i_0]))) ? var_14 : (max((arr_7 [i_0 + 2] [i_0] [i_0] [i_0] [i_0]), 208)))));
                        }
                        var_29 = (arr_2 [i_0] [i_1] [i_0 - 1]);
                    }
                    var_30 = (arr_5 [i_0 + 1]);
                }
            }
        }
        var_31 = (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        var_32 -= var_12;
        arr_26 [i_8] [i_8] = var_11;
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_33 += ((+(((2222447961064096171 + var_13) + var_0))));
        arr_29 [i_9] [i_9] = ((((min((((arr_20 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) ? (arr_17 [i_9] [i_9] [i_9] [i_9]) : var_2)), (((!(arr_0 [i_9] [i_9]))))))) ? (min((((arr_7 [i_9] [i_9] [i_9] [i_9] [i_9]) ? var_5 : (arr_13 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))), 2147483647)) : 445299363));
        arr_30 [i_9] = ((((((!(arr_2 [i_9] [i_9] [i_9])))) - (arr_11 [i_9]))));
    }
    var_34 = var_9;
    var_35 |= (min(var_7, (((~((min(1, var_8))))))));
    #pragma endscop
}
