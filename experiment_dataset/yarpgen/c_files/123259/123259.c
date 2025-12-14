/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_8, ((var_8 ? var_2 : 137))));
    var_11 = 15565301553867621174;
    var_12 |= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (max(var_7, (!var_3)));
                var_14 ^= (arr_2 [1]);
                var_15 = var_2;
            }
        }
    }
    #pragma endscop
}
