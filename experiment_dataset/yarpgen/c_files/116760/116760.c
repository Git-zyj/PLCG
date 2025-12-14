/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((min((var_10 >= var_9), (0 != var_18)))) >> ((((10 << (4294967276 - 4294967260))) - 655360)));
    var_20 &= var_13;
    var_21 &= var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] &= (20 ? (4294967287 <= 1) : 16601);
                arr_5 [i_1] = (((arr_2 [i_0] [i_1] [i_1]) - (~6665820562704383365)));
            }
        }
    }
    var_22 = var_13;
    #pragma endscop
}
