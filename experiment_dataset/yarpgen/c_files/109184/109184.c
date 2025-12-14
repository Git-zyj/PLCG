/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((min(((var_4 ? 0 : var_3)), ((var_12 ? 1 : var_6))))), ((var_0 ? -0 : ((var_4 ? var_12 : var_2))))));
    var_14 ^= (max((((var_10 ? 29149 : -40))), (((var_3 <= 1) | (min(var_2, var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (((max((-2420765606149331431 || var_11), 2379464106))) ? var_4 : ((((arr_4 [i_0 - 2] [i_0] [i_0 + 1]) && (1 < var_9)))));
                var_16 = var_7;
                var_17 = (~4294967295);
                arr_6 [i_0] = ((((var_9 ? (arr_5 [i_0] [i_1] [i_1]) : (((arr_4 [i_0] [i_0] [i_1]) ? var_0 : var_10)))) >= ((28 ? ((max(var_10, 8128))) : 8128))));
            }
        }
    }
    var_18 = var_11;
    #pragma endscop
}
