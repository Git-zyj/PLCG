/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_11 -= 18446744073709551600;
                var_12 ^= var_2;
            }
        }
    }
    var_13 = (var_3 ? var_5 : (max((max(138613975111481399, 18446744073709551600)), var_0)));
    var_14 = var_1;
    #pragma endscop
}
