/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((((((var_0 ? -124 : (arr_0 [i_1])))) ? ((((-1 ? 93 : (arr_3 [i_0]))) & -124)) : var_17)))));
                var_20 ^= var_10;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_21 = (min(var_21, -var_7));

                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    var_22 = (i_3 % 2 == 0) ? (min((((var_5 + 9223372036854775807) << (((((arr_11 [i_3] [i_3] [i_2] [i_3]) + 392209221)) - 33)))), var_7)) : (min((((var_5 + 9223372036854775807) << (((((((arr_11 [i_3] [i_3] [i_2] [i_3]) + 392209221)) - 33)) - 791306177)))), var_7));
                    arr_12 [i_2] [i_3] [i_4] = (max((arr_1 [i_2]), (((arr_8 [i_4]) <= var_17))));
                    var_23 |= var_6;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] [i_6] [1] [1] [1] [i_3] [1] = ((((((((-1 ? (arr_14 [i_6 - 1] [i_3] [i_4] [i_6 - 1] [i_4]) : var_11))) + (arr_18 [i_3] [i_5 + 1] [i_3] [i_5 + 1] [i_6 - 1])))) ? var_7 : ((-1 + (arr_11 [i_3] [i_3] [i_3] [1])))));
                                arr_21 [i_3] [i_3] [i_3] [16] = (min(((-(arr_18 [i_6 - 1] [i_5 + 1] [i_3] [i_6 - 1] [i_5 + 1]))), (~-124)));
                            }
                        }
                    }

                    for (int i_7 = 4; i_7 < 16;i_7 += 1)
                    {
                        var_24 = ((((arr_19 [i_7 + 3] [i_7 + 3] [i_7 + 3] [i_3] [i_7 + 3]) & (arr_19 [i_7 - 2] [i_7 - 2] [i_7 - 4] [i_3] [i_7 - 4]))));
                        arr_24 [i_2] [i_3] [i_2] [i_2] [i_4] [3] = (min((1 && -1669704797), (max((((arr_7 [i_2] [i_3]) ^ var_8)), ((var_16 ? var_8 : var_15))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
