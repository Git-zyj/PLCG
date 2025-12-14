/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    var_19 += var_13;
    var_20 = var_6;
    var_21 = (((((var_12 ? var_14 : (max(var_17, var_4))))) ? ((min(var_10, ((var_15 ? var_4 : var_8))))) : ((((min(var_9, var_1))) ? (((var_10 ? var_9 : var_12))) : (min(var_7, var_17))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_22 += ((55508 ? 59524 : -53));
                var_23 = var_15;
                var_24 = ((((max(var_10, ((var_1 ? var_7 : var_13))))) ? var_17 : var_3));
            }
        }
    }
    #pragma endscop
}
