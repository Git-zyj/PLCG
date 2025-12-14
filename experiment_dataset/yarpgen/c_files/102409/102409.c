/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] |= ((!(((max(var_9, var_10))))));
                arr_6 [i_0] [i_1] = (((~(var_4 != 8674590757624642489))));
                var_14 = (max((((var_13 ? var_7 : var_4))), ((~((((arr_3 [i_0] [i_0] [19]) && (arr_1 [i_1]))))))));
                var_15 -= (!var_3);
            }
        }
    }
    var_16 = var_9;
    var_17 = var_5;
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 6;i_4 += 1)
            {
                {
                    var_18 = (arr_2 [i_4] [i_4 + 1] [i_4]);
                    arr_15 [i_2] = (min(((1 << (-1374467202 + 1374467220))), 0));
                    var_19 = (((~1025046939) | var_10));

                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        var_20 = arr_0 [i_2] [i_3];
                        arr_20 [i_2] [i_3] [i_2] [i_3] [i_2] = min(((((((arr_16 [i_2 - 3] [i_2] [i_4 - 1]) != (arr_12 [i_2] [i_2]))) || -73))), -61);
                        arr_21 [i_2] [i_3] [i_2] [9] [i_2] = ((~(arr_4 [i_5])));
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_21 = (~((1 ? ((var_0 ? -77 : (arr_4 [i_2]))) : ((17624137031716415074 ? var_11 : var_9)))));
                        var_22 += min(1, 0);
                    }
                    for (int i_7 = 3; i_7 < 8;i_7 += 1)
                    {
                        var_23 -= var_13;
                        var_24 ^= (arr_12 [i_4 + 4] [i_3]);
                        arr_28 [i_4] [0] [i_4] [i_7 - 2] |= ((-(arr_23 [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_7])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
