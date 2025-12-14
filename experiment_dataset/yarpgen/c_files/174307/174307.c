/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_7, ((max(-1587291059, var_5)))));
    var_13 = 1630039812;
    var_14 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = arr_3 [3] [i_1];
                arr_7 [i_0] = var_8;
            }
        }
    }
    #pragma endscop
}
