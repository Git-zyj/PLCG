/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= 20;
    var_17 = ((((1 ? var_14 : (max(var_2, var_1)))) == (max((min(var_4, -802595598)), 57778))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] &= ((802595598 ? 14 : 1361102677320576194));
                var_18 -= ((max(-114, var_7)));
            }
        }
    }
    #pragma endscop
}
