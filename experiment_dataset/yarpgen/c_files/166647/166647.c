/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_1;
    var_16 = ((((((min(var_4, 6028))) ? var_4 : var_3))) ? (8 >> var_7) : ((((var_11 % var_13) / var_2))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [1] = (arr_1 [i_0]);
                arr_5 [2] [i_0] = var_11;
            }
        }
    }
    var_17 = (((((max(216, var_6)))) - var_3));
    #pragma endscop
}
