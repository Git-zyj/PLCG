/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_2));
    var_16 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_1] = (((min(var_4, (((arr_2 [i_1]) ? var_10 : (arr_0 [i_0]))))) * (((arr_1 [i_0]) ^ (arr_1 [i_0])))));
                var_17 = (((((arr_0 [i_1 - 1]) ? (arr_0 [i_1 - 1]) : (arr_0 [i_1 + 1]))) * ((min(var_14, (min(1, 32221)))))));
            }
        }
    }
    var_18 = (((((var_2 ? (max(var_4, var_10)) : var_12))) ? ((-var_6 ? var_2 : (((var_5 ? var_12 : 1))))) : var_0));
    #pragma endscop
}
