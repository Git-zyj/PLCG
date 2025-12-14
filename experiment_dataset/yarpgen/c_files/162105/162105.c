/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (((var_3 || var_5) && var_1));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    {
                        var_14 = (10335 - -27828);
                        arr_13 [i_3] = -4264016518349573006;
                        arr_14 [i_3 + 1] [i_2] [i_2] [i_3] &= (arr_12 [i_0] [i_3 - 1] [i_2] [i_3]);
                    }
                }
            }
        }
        arr_15 [7] = ((var_9 + (((arr_10 [i_0] [i_0] [1] [i_0]) ? var_11 : (arr_6 [i_0] [i_0] [i_0])))));
    }
    var_15 = (var_11 * var_2);
    var_16 = ((max(var_12, ((var_1 ? var_12 : -13)))));
    var_17 = (((max((((2123614843 << (322604630 - 322604600)))), (max(-13, var_10)))) != var_7));
    #pragma endscop
}
