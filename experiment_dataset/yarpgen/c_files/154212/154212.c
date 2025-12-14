/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((min(var_0, var_7))) ? var_10 : ((var_8 ? var_4 : var_0))))) ? ((11987018963973779512 ? (((max(var_6, var_1)))) : (min(var_15, var_11)))) : (((var_14 ? var_6 : var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_21 += (min((min(((7807685293631994909 ? -21459 : -21459)), -21473)), var_0));
                arr_4 [i_0] [i_1 + 1] = (((((2147483647 ? 9017272145062667097 : -21468))) ? ((var_11 ? var_2 : var_10)) : (((var_19 ? var_3 : var_13)))));
            }
        }
    }
    #pragma endscop
}
