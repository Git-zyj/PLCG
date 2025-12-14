/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_14 ^= ((max((!var_8), 40034)));
                var_15 = (((((arr_2 [i_0] [i_1 - 3]) ? 10757 : (arr_2 [i_0] [7]))) < 255));
            }
        }
    }
    var_16 = ((((max(((var_8 ? var_0 : 10757)), 1))) ? var_3 : var_7));
    #pragma endscop
}
