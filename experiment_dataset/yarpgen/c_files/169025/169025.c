/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    var_16 = 9223372036854775807;
    var_17 = -1119218832321487030;
    var_18 = 0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = 252;
                arr_4 [i_0] [i_0] = 52;
                var_20 *= (arr_2 [i_1 + 1]);
            }
        }
    }
    #pragma endscop
}
