/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((13664220260585563838 ? (((var_11 / var_3) ? 12285857620928941153 : 913567075)) : var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_15 = var_12;
                    arr_7 [i_2] [i_1] [i_1] [11] = var_4;
                    var_16 = (((((arr_3 [i_1] [i_1]) ? -4507962004889475320 : (arr_2 [i_1]))) | ((((min(var_5, (arr_3 [i_1] [i_0])))) ? var_9 : ((var_2 ? var_3 : -4507962004889475320))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_17 = ((1448609546 ? (arr_5 [i_3]) : (((((arr_6 [i_3] [i_3]) + 2147483647)) >> (((arr_6 [i_3] [i_3]) + 137))))));
        var_18 = (max((((arr_2 [i_3]) * var_11)), var_11));
    }
    #pragma endscop
}
