/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((((var_5 ? var_8 : 12460369105647914376))) ? (min(var_13, var_18)) : var_14))) ? 3685180453 : (min(((min(3685180453, var_17))), 609786842))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_21 ^= ((~(max(-43, 3685180453))));
                    arr_9 [i_0] = (44 - 212);
                }
            }
        }
    }
    var_22 = ((((var_1 == (((var_5 ? var_10 : var_10)))))) > var_10);
    #pragma endscop
}
