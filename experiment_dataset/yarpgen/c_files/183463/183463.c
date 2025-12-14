/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = (((((4294967295 ? 696694957 : -833417823))) && ((min(1, -84)))));
                var_14 |= ((var_2 - -70) <= ((3216297922 ? var_6 : -1398137305189850863)));
            }
        }
    }
    var_15 = var_4;
    var_16 = ((69 ? (((172 <= var_8) ? var_11 : (!var_10))) : var_8));
    #pragma endscop
}
