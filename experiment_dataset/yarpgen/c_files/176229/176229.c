/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_1] [i_3] [i_4 - 1] = ((((((arr_11 [i_4] [i_4 + 1] [i_4 + 1] [7] [i_4 - 3] [7]) ? (arr_11 [i_0] [i_4 - 3] [i_4 - 3] [i_4] [i_4 - 3] [i_0]) : (arr_13 [6] [i_1] [i_4] [i_4 - 3] [i_1])))) || ((max((arr_11 [5] [i_4 - 2] [i_4] [i_4 - 2] [i_4 + 1] [i_3]), (arr_13 [i_4] [i_4] [i_4] [i_4 + 1] [1]))))));
                                var_10 = (max(var_10, var_0));
                            }
                        }
                    }
                    arr_15 [i_1] = (((((max(var_8, (arr_11 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2 - 2]))))) & 130944));
                }
            }
        }
    }
    var_11 |= (((((var_5 ? ((var_1 ? var_2 : var_2)) : ((min(var_7, 104)))))) ? (((((104 ? 34 : 104))) ? 45866 : 104)) : ((~(var_8 - var_3)))));

    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        var_12 = (max(var_12, (((!(((((max((arr_16 [i_5]), var_0))) ? var_9 : var_6))))))));
        var_13 = (max(var_13, (((((((((~(arr_17 [i_5 + 1])))) ? (((arr_18 [i_5]) + (arr_18 [18]))) : 106))) && (((((var_2 & (arr_17 [i_5])))) < var_4)))))));
        var_14 = var_7;
    }
    #pragma endscop
}
