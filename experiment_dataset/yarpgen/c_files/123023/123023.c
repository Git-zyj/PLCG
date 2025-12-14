/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_10;
    var_21 = (max(var_21, var_19));
    var_22 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_23 = (min(var_23, (((((((var_5 ? var_11 : (arr_0 [i_2]))))) + (arr_5 [i_2 + 2] [i_1]))))));
                    var_24 += ((var_19 ? 281474976710655 : (((1504175365888511392 ? 18079427129915153006 : -1532213088)))));
                    arr_10 [i_0 + 2] [i_2] [i_2] [i_0 + 2] &= var_16;
                }
            }
        }
    }
    #pragma endscop
}
