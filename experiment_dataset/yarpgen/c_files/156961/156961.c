/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (arr_2 [i_0]);
                var_14 = (max((min((((var_10 ? var_3 : var_11))), ((819816733 / (arr_3 [i_0]))))), ((((((var_0 ? 63649 : (arr_0 [11] [i_1 + 2])))) * (var_11 / var_6))))));
            }
        }
    }
    var_15 = var_0;
    var_16 *= ((var_0 << (((-63657 + 63679) - 21))));
    #pragma endscop
}
