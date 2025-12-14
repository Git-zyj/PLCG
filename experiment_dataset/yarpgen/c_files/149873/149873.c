/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = ((0 / ((1 | (~10812)))));
                var_22 -= (max(0, ((!(arr_5 [i_0])))));
            }
        }
    }
    var_23 = var_16;
    var_24 = (var_14 - var_14);
    var_25 = var_5;
    #pragma endscop
}
