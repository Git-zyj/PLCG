/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 -= var_8;
    var_12 = ((var_2 ? (min(var_5, var_7)) : var_1));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 -= ((-(arr_3 [i_0 - 1] [i_0] [i_0])));
                    var_14 -= 1;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 = (max(1, (arr_8 [14])));
                                arr_13 [i_0 + 1] [0] [i_3 + 1] [i_3] [i_4] [i_4] = (arr_9 [i_4 - 1] [7] [i_0] [i_0] [i_0] [i_0]);
                                arr_14 [i_4] [i_4] [i_4] [i_4] [i_4 + 1] = ((-var_1 ? (((arr_7 [i_0] [0] [i_0 - 2]) ? (arr_2 [i_3 - 1] [1]) : (arr_1 [3] [i_2 - 1]))) : var_1));
                            }
                        }
                    }
                    arr_15 [i_1] [i_1] [i_1] [i_0 - 2] = ((-(((arr_11 [4] [i_2 - 1] [i_2] [3] [i_2] [7] [i_2 - 1]) ? -var_2 : (min((arr_4 [i_0] [i_0] [i_0]), var_8))))));

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        arr_19 [i_5] [i_1] = ((10617624438946110631 ? (arr_8 [1]) : ((((var_0 > (arr_17 [i_0 - 2] [i_1] [i_1] [i_5] [i_2])))))));
                        var_16 = ((var_3 ? (arr_17 [11] [11] [i_2 - 1] [i_5] [i_5 + 2]) : (arr_12 [i_5] [10] [i_1] [i_0] [i_5])));
                        var_17 = (arr_3 [i_5] [i_0 + 2] [i_0 + 3]);
                        var_18 -= (((((var_2 ? (arr_4 [i_5 - 1] [i_1] [i_2 - 1]) : 3638482196))) ? 0 : var_5));
                    }
                }
            }
        }
        var_19 -= ((var_4 ? (((-var_0 > (14336 <= var_7)))) : 8664701482476680592));
        var_20 = (((arr_5 [i_0 + 3] [1]) ? (arr_9 [i_0] [i_0] [i_0 + 3] [i_0 - 1] [i_0 + 2] [i_0 - 2]) : 2147483640));
        arr_20 [i_0 - 2] = (max(var_5, ((max((arr_0 [i_0 - 2] [i_0 - 2]), (arr_0 [i_0 - 2] [i_0 - 1]))))));
    }
    #pragma endscop
}
