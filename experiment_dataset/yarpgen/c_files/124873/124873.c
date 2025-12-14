/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 = var_3;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = (min(var_18, (((((min(var_0, var_13))) ? ((~(arr_1 [i_0]))) : (((arr_0 [5]) * (arr_1 [i_0]))))))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = var_6;
            arr_7 [4] = var_3;
            var_19 = (min(var_19, (((((((((var_12 + (arr_3 [9] [i_1] [i_1])))) ? (((arr_1 [i_0]) ? var_8 : var_10)) : (arr_1 [i_1])))) ? (arr_2 [i_0] [i_1]) : (((((var_10 ? var_7 : var_13)) >= (arr_1 [i_0])))))))));
            arr_8 [6] [6] [i_0] = (-(min(var_15, (arr_5 [i_0]))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_0] = ((-(arr_5 [i_2 + 1])));
                        arr_15 [i_0] [i_1] [i_0] [9] [i_3] [i_2] = (((((((-1734615229850943850 ? var_8 : var_15))) ? var_3 : (((var_15 ? var_12 : (arr_0 [i_3])))))) <= (max((arr_3 [i_2 + 1] [i_2 + 2] [i_2 - 1]), var_7))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_20 ^= (var_10 ? 6165597385895524389 : 2859570681028662320);
                            var_21 = var_0;
                            arr_18 [i_2] [i_0] [i_2] [8] [i_2] = (((arr_2 [i_2 + 1] [8]) & (arr_1 [i_2 - 1])));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_22 -= ((var_2 / (arr_2 [i_5] [i_0])));
            var_23 = var_15;
            arr_21 [i_0] [i_0] [i_0] = ((var_11 ? var_13 : (arr_13 [i_5] [i_5] [i_5] [i_0])));
            var_24 ^= (((arr_20 [i_0] [i_0] [i_0]) ? var_5 : var_14));
        }
    }
    var_25 ^= -var_11;
    #pragma endscop
}
