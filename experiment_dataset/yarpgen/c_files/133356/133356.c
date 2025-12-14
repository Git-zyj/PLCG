/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += ((var_5 ? ((~(min(var_9, var_3)))) : ((((1857647416243504533 && (var_1 && var_1)))))));
    var_15 = (var_11 % 32767);

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_16 = (-1 - -1857647416243504523);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [13] [i_1] [i_2] [i_1] = var_9;

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [11] [i_1] [i_1] [i_1] [i_1] [i_1] = ((-var_12 | (((min((arr_4 [i_1]), 511))))));
                        arr_13 [i_0] [i_1] = ((-(min((var_2 + 2468946962770516758), (max(2468946962770516742, 23207))))));
                        arr_14 [i_0] [i_1] [i_2] [i_2] = (2468946962770516762 >= 1);
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        var_17 = (var_10 == var_10);
                        arr_18 [i_0] [6] [i_0] [i_1] = (((((var_5 ? var_3 : var_12))) ? (max(var_6, var_5)) : ((((arr_0 [i_0] [i_0]) << (var_7 - 13023909918882758763))))));
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                    {
                        arr_22 [i_0] [i_1] [i_0] [i_0] = ((((((arr_6 [i_2 - 1] [i_1] [i_2 - 4]) | (-9223372036854775807 - 1)))) ? (min(15977797110939034888, 2468946962770516758)) : ((~((var_0 & (arr_0 [11] [7])))))));
                        var_18 |= ((((max(43857, -4363))) ? (max((~4), var_2)) : (((-(((!(arr_17 [i_0] [i_0] [i_0] [i_0] [3] [i_0])))))))));
                        var_19 -= (arr_17 [i_0] [i_1] [i_2] [1] [i_1] [i_2 - 4]);
                        arr_23 [i_1] [i_1] [i_5] [i_5] = var_8;
                        var_20 = (arr_1 [i_0]);
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_21 += ((-8211 >= (arr_17 [i_0] [i_1] [i_0] [i_6] [i_0] [i_7])));
                                arr_30 [i_6] [i_1 - 1] [i_0] [i_1 - 1] [6] |= ((!(((~((~(arr_28 [i_7] [i_0] [4] [i_0] [i_2] [2] [i_7]))))))));
                                var_22 = ((((((11 << (var_4 - 48609))) << (65025 - 65014))) >> (-4353 + 4382)));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 3; i_9 < 12;i_9 += 1)
        {
            var_23 |= (arr_20 [i_8] [i_9] [i_9] [i_9] [i_9 - 2] [7]);
            var_24 = (!var_13);
        }
        var_25 *= (((((31711 * var_0) ? (arr_4 [i_8]) : ((var_12 ? 30697 : var_6)))) >> ((((var_6 ? 8064 : ((max((arr_3 [2] [i_8] [i_8]), -17524))))) - 99))));
        var_26 = (arr_9 [i_8] [i_8]);
    }
    #pragma endscop
}
