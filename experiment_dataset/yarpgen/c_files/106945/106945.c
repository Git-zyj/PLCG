/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(~var_7)));
    var_14 = (((min((!2462893656528891829), 536866816)) * (((var_7 ? var_0 : var_11)))));
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_16 -= min(((-(arr_0 [i_1 + 1]))), ((~(arr_1 [i_1 - 1]))));
                var_17 = (min(((~(arr_2 [10]))), ((65528 ? ((18935 ? 66 : 43)) : ((-43 ? -44 : -372938956))))));
            }
        }
    }
    #pragma endscop
}
