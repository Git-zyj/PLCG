/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_1;
    var_17 = (min(var_10, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 ^= (((min(((var_11 ? var_4 : var_13)), (~var_1))) ^ (((-var_12 ? var_15 : var_11)))));
                arr_5 [i_0] = ((((min(197, 3633782444))) ? ((-((var_11 ? var_12 : var_6)))) : (var_1 * var_7)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_19 ^= var_0;
                var_20 = var_7;
                arr_13 [i_2] = (min(((18 ? var_13 : (var_5 != var_4))), var_2));
            }
        }
    }
    #pragma endscop
}
