/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = 1436917843;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_2] [i_0] = (arr_0 [i_0] [i_0]);
                                arr_13 [i_0] [i_0] [i_2] [i_3] [5] = ((-(((!((((arr_2 [i_0] [i_0] [i_2]) ? var_10 : 17592186044415))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_17 = var_6;
                                var_18 = (min(var_18, (((-(min((((arr_15 [2] [i_1] [4] [i_1 - 1]) ? (arr_16 [i_2] [i_5] [i_2] [i_1] [i_2]) : var_4)), 6969214324293702494)))))));
                            }
                        }
                    }
                }
            }
        }
        var_19 = (max(var_19, ((min(((((((254 ? 0 : 18446744073709551615))) || (((254 ? 30930 : var_7)))))), 6)))));
        arr_20 [i_0] = var_3;
        arr_21 [7] [i_0] = ((((!(arr_0 [i_0 - 2] [i_0])))));
        var_20 ^= var_2;
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 17;i_7 += 1)
    {
        var_21 = ((~(18394475120449917688 * var_10)));
        var_22 = (((arr_9 [i_7 + 1] [i_7 - 3] [i_7] [i_7] [i_7 - 1]) >= (arr_9 [i_7] [i_7 - 1] [6] [i_7 + 1] [i_7 - 3])));
    }

    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        arr_28 [i_8] = (arr_26 [i_8] [i_8]);
        var_23 = (arr_26 [i_8] [i_8]);
    }
    var_24 ^= ((((((var_13 ? var_14 : var_6)))) % var_4));
    #pragma endscop
}
