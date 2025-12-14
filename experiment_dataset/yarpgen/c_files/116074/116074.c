/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_11 / ((-(max((-2147483647 - 1), 98))))));
    var_21 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (min((((((~(arr_2 [i_0]))) & ((((arr_1 [i_0 - 1]) != -118)))))), (((var_12 ? var_18 : (arr_0 [14]))))));
                arr_6 [i_0] [1] = 1;
                var_22 = (min(var_22, (((157 ? 226 : 1)))));
            }
        }
    }
    var_23 = (((var_3 ? (var_15 > var_15) : (!var_14))));
    #pragma endscop
}
