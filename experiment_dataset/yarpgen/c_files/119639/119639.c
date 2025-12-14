/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, -1));
    var_14 ^= ((+(((var_9 + -1133) ? ((var_10 ? var_4 : var_6)) : var_2))));
    var_15 = (((var_11 ? 1133 : ((-1140 ? -20 : -69)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_16 = 39304;
                var_17 = -2790957573672420106;
                var_18 = (~(arr_1 [i_0]));
                var_19 = ((((((~(arr_2 [i_1 + 1] [i_1 + 1] [i_0 + 2]))) & ((var_1 ? (arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 2]) : 0)))) + ((var_2 + (arr_3 [i_0 + 2] [i_1 + 1])))));
            }
        }
    }
    var_20 = (min(var_20, var_12));
    #pragma endscop
}
