/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = max((arr_5 [i_0] [i_0]), var_4);
                var_18 = ((!((((0 < 145) ? var_3 : var_13)))));
            }
        }
    }
    var_19 = ((((((((var_0 ? var_13 : var_2))) ^ (var_8 * var_4)))) ? (var_13 - var_5) : var_13));
    var_20 = max(((var_4 ? (((var_13 << (var_10 - 210)))) : var_16)), (((-var_9 - (var_0 + var_6)))));
    var_21 ^= (var_7 | (~var_15));
    var_22 = var_7;
    #pragma endscop
}
