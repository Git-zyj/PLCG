/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_16 / (var_6 - var_11)))) ? ((((min(var_6, var_15)) == (1 >> 1)))) : (min(((var_12 ? var_1 : var_6)), var_9))));
    var_19 ^= min((((((var_15 ? var_0 : var_7))) ? ((max(var_14, var_9))) : ((var_8 ? var_0 : var_7)))), var_3);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = (((!-8320) && (((var_2 ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 + 2]))))));
                var_21 = ((-(((arr_0 [10]) ? (arr_1 [i_0 - 2] [i_0 - 1]) : (arr_3 [i_1 - 1])))));
            }
        }
    }
    var_22 = (((-3957471192814047852 <= 0) ? ((26301 ? var_11 : ((max(134, var_11))))) : var_0));
    #pragma endscop
}
