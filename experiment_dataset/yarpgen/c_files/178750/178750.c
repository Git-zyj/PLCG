/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_0 ? var_3 : (((var_6 ? var_12 : var_11)))))) ? var_6 : ((var_0 ? var_11 : var_14))));
    var_16 = ((12445658925884572236 ? var_1 : 65531));
    var_17 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] = ((1440838260262693174 ? 3 : 7038859589774482292));
                arr_9 [i_0] [i_0] [1] = var_0;
                arr_10 [i_1] = var_7;
                arr_11 [i_0] = var_8;
                arr_12 [i_1] = (((((var_4 ? var_0 : (((var_1 ? var_1 : var_13)))))) ? ((((((var_12 ? var_8 : var_2))) ? var_11 : var_11))) : ((1 ? -43 : 17005905813446858450))));
            }
        }
    }
    var_18 = 4684482492682417697;
    #pragma endscop
}
