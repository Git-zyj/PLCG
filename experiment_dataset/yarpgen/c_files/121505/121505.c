/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = 65535;
                arr_8 [i_0] [i_0] = (min(var_12, var_1));
            }
        }
    }
    var_17 = var_7;
    #pragma endscop
}
