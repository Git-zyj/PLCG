/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = ((0 ? (((((((arr_2 [i_0] [6]) * 8589934591))) ? 0 : ((max(16, 14946)))))) : var_0));
                var_14 *= (max(255, ((var_2 ? 33554304 : var_4))));
            }
        }
    }
    var_15 = (max(var_15, (((var_9 >> (-var_9 - 14848536744069694577))))));
    #pragma endscop
}
