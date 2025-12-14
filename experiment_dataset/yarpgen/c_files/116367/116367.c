/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((min(var_11, var_18)));
    var_20 = ((var_4 << (((-0 - var_12) - 18446744073153757788))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [7] [i_0] = (arr_2 [i_0]);
                var_21 = ((((max(-97, 36))) ? ((((-9223372036854775807 - 1) & (arr_2 [i_0])))) : 16140901064495857664));
            }
        }
    }
    #pragma endscop
}
