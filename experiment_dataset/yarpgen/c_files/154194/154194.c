/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_2] = (((var_13 ^ (max(84072021, var_19)))));
                    var_20 += 65535;
                    var_21 = (((var_13 / var_19) ? (max(var_16, 1215733955)) : ((var_14 ? 39773 : var_16))));
                }
            }
        }
    }
    var_22 = var_3;
    var_23 = (max((((((0 ? 14590724634633302057 : 65535))) ? var_7 : 9002801208229888)), (max(var_3, ((-1462986519 ? var_17 : var_7))))));
    var_24 = var_2;
    #pragma endscop
}
