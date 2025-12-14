/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((!(((((min((arr_2 [i_0] [i_0] [i_1]), 1))) ^ 1)))));
                var_10 = 1;
                var_11 = ((((min(((min(var_1, 1))), var_7))) ? (min((min(7780439577517663194, 6556156746026729465)), -17632)) : ((((arr_1 [i_0]) / -var_3)))));
            }
        }
    }
    var_12 = (max(var_3, ((~((var_0 ? var_8 : 0))))));
    var_13 = var_3;
    var_14 = var_8;
    #pragma endscop
}
