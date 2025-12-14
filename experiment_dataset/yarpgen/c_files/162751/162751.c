/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -5314496004033263828;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (arr_3 [6])));
                var_19 = (max(var_19, -var_8));
                var_20 = (max(var_20, (-127 - 1)));
                var_21 = 27131;
                var_22 *= (arr_0 [i_0 - 1]);
            }
        }
    }
    var_23 = (((((-38404 ? 38405 : 27131))) < ((38390 ? 12556094956217620169 : 2983116969))));
    var_24 = (~var_9);
    #pragma endscop
}
