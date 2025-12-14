/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_12 = var_0;
                        var_13 ^= 0;
                    }

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_14 -= var_11;
                        var_15 = (min(((~(arr_5 [i_0] [i_1]))), (max(((min(var_10, (arr_5 [i_0] [i_1])))), (((arr_11 [i_4] [i_4] [13] [i_2] [i_1] [14]) ? var_9 : 53113))))));

                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            var_16 -= var_11;
                            var_17 = (((((var_1 | var_3) ? (((!(arr_10 [i_5 + 1] [i_5 - 1] [i_4] [i_2] [i_1] [i_0])))) : ((min(var_6, (arr_1 [i_2]))))))) != ((12423 ? var_3 : var_0)));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_18 = ((arr_1 [i_2]) ? var_0 : (53099 || -82));
                            arr_18 [21] [i_1] [i_1] [i_1] [i_1] = (((arr_12 [i_0] [i_1] [i_2] [i_4] [i_6]) || (arr_12 [i_6] [i_4] [i_2] [i_1] [i_0])));
                            arr_19 [2] = (arr_0 [i_4]);
                            arr_20 [i_2] [i_0] = ((53113 ? (var_8 & var_1) : var_1));
                            var_19 -= ((4609434218613702656 ? (arr_15 [i_0]) : 12400));
                        }
                        var_20 = var_7;
                        var_21 = ((((((191 ? 179 : 126)) ^ -var_7)) >> ((((((!(arr_16 [i_0] [14] [i_2] [i_4] [i_1]))) ? ((min(var_4, (arr_1 [i_4])))) : (arr_10 [i_0] [i_0] [i_1] [i_2] [i_2] [18]))) + 56))));
                    }
                }
            }
        }
    }
    var_22 = ((var_6 ? (((var_11 <= 50) * var_5)) : ((((!var_2) < var_3)))));
    #pragma endscop
}
