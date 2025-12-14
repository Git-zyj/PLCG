/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 127479347985868423;
    var_12 = var_0;
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = 18446744073709551597;
                var_15 = var_3;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            {
                var_16 = (((var_3 ^ var_1) == (133 - 13581884333167072223)));
                var_17 = (max(var_17, ((((16 || 18446744073709551597) > 18446744073709551597)))));
                var_18 &= var_1;
                var_19 = (((var_9 | 43) - (var_10 - var_9)));
            }
        }
    }
    #pragma endscop
}
