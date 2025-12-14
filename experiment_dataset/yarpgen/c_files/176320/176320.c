/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 += 17052576367677683824;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = var_10;
                var_15 ^= -var_1;
                arr_6 [i_0] [i_0] [i_1] = var_10;
            }
        }
    }
    var_16 = (max(var_16, var_4));
    var_17 = (min(1394167706031867791, (max(1, var_3))));
    #pragma endscop
}
