/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] |= var_18;
                arr_6 [i_0] [i_1] = var_6;
            }
        }
    }
    var_20 = -491128866;
    var_21 = (min((var_12 == 0), (((!(var_13 + var_8))))));
    #pragma endscop
}
