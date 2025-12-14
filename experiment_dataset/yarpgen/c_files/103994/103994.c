/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = max((((var_4 / var_13) ? var_12 : var_1)), 30300);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((!(17 & 65535)))));
                var_17 = (min((((((var_8 ? (arr_4 [i_0]) : (arr_4 [i_0]))) != var_7))), (arr_0 [i_1])));
            }
        }
    }
    #pragma endscop
}
