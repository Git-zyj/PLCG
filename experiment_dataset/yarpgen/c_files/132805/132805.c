/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = ((((((arr_3 [i_0] [i_1]) + var_3))) ? ((0 ? var_4 : var_11)) : -var_5));
                var_13 ^= ((!((max((((arr_4 [3]) / (arr_0 [i_0] [i_1]))), (~44233))))));
                var_14 = var_3;
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_15 += (min(((var_9 ? (arr_5 [i_2] [15]) : -920279473)), (~-369170905)));
        var_16 = (min((((((var_5 ? (-2147483647 - 1) : (arr_5 [i_2] [i_2])))) ? var_8 : (arr_5 [i_2] [i_2]))), ((((max(-369170905, (arr_5 [i_2] [i_2]))) / -369170905)))));
        var_17 = (arr_8 [i_2]);
    }
    var_18 = (max(var_0, (((((2147483647 >> (var_4 - 7465)))) ^ (var_8 + var_4)))));
    #pragma endscop
}
