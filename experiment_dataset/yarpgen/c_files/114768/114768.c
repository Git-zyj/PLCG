/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_14 *= 1;
                var_15 = ((((var_4 | ((var_3 ? -32747 : var_10)))) == var_9));
                var_16 = (min(var_16, (((var_9 & (1785240497 | var_11))))));
                var_17 = (min(var_17, ((((-1785240516 && 43) < (593229246325243035 == var_8))))));
            }
        }
    }
    var_18 = (-32747 | var_8);
    var_19 &= ((var_2 - (((1 < 35018) ^ ((30361 ? var_8 : var_4))))));
    #pragma endscop
}
