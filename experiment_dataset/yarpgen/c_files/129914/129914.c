/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (!(((((max(var_7, 5620154495763114413))) ? var_13 : (var_6 - 2926854145)))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = (min(((var_6 ? 4294967168 : var_9)), var_3));
                    var_17 = ((!(((65521 ? var_9 : var_10)))));
                    var_18 = ((var_10 ? (((min(var_13, var_7)))) : (var_2 + var_11)));
                }
            }
        }
    }
    var_19 = (min(var_19, -var_10));
    var_20 = (((var_0 ? ((var_9 ? var_9 : var_5)) : (min(var_1, 12826589577946437207)))) % var_0);
    #pragma endscop
}
