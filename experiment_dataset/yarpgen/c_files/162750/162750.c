/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((max(18446744073709551613, (1 << 1))));
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((((((var_6 > (min(523551097, 1))))) & (1 & 3995626835))))));
                var_16 -= -9223372036854775780;
                var_17 = 1;
            }
        }
    }
    var_18 = (!var_8);
    #pragma endscop
}
