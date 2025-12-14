/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = ((((((arr_1 [i_0]) ? (arr_0 [i_0 - 3]) : 19335))) ? (((var_11 ? (arr_0 [i_1]) : (arr_1 [i_0 + 1])))) : ((var_7 ? 29 : var_8))));
                arr_4 [i_1] [i_0 + 2] [i_0] = (((((var_0 ? -1624197079 : var_12))) ? ((-52 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 2]))) : ((65533 ? var_10 : (arr_0 [i_0 - 3])))));
                arr_5 [i_0] = (((((29 ? (arr_2 [i_0 - 2] [i_0 - 3] [i_0 + 2]) : (arr_2 [i_0 + 1] [i_0] [i_0 + 1])))) ? ((29 ? 1 : var_8)) : ((((arr_2 [i_0 - 1] [1] [i_0 + 1]) ? var_10 : var_1)))));
                var_16 = ((121 ? -4499847632013963473 : 9223372036854775807));
            }
        }
    }
    var_17 = var_11;
    var_18 = (min(var_18, var_7));
    var_19 = (max(var_19, (((var_4 ? (((((var_1 ? 560084089 : 30247))) ? var_14 : var_12)) : var_13)))));
    var_20 = (max(var_20, var_4));
    #pragma endscop
}
