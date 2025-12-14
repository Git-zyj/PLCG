/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_9));
    var_16 = (min(var_3, (!4614356751246682976)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_1] &= (max(10567342181493070893, 7879401892216480721));
                var_17 = -6049;
            }
        }
    }
    #pragma endscop
}
