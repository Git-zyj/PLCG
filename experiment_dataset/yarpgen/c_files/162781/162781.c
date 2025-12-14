/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_1 ? var_15 : var_11));
    var_20 = var_1;
    var_21 = (((1 ? 0 : -53)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [0] &= var_13;
                var_22 = min(32, ((min((arr_4 [i_0] [i_0 - 1]), (arr_4 [i_0] [i_0 - 1])))));
                var_23 = (max(var_23, (arr_1 [1])));
                arr_6 [i_0] [i_1] [i_0] = (max((min((max(var_17, (arr_3 [i_0] [i_1]))), (min((arr_1 [i_0]), (arr_0 [i_0]))))), (arr_2 [i_0 + 2] [i_0 - 1])));
            }
        }
    }
    var_24 *= var_4;
    #pragma endscop
}
