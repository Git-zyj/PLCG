/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((-var_12 || var_7) ? (((min(var_8, 21806)) << (((var_7 | var_10) - 1203813369)))) : (var_12 >= var_1)));
    var_16 = (((((1 ^ (1 && 179)))) ? 10435759639593407867 : 2549998894));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0 + 3] [i_0] [i_1] = min((arr_5 [8] [8]), (((~var_12) ? ((var_7 ? var_12 : var_13)) : (arr_0 [i_1 - 1]))));
                arr_7 [i_0 + 1] = ((~(((var_11 < (~43720))))));
            }
        }
    }
    #pragma endscop
}
