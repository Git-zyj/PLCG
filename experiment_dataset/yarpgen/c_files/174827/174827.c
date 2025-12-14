/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [8] [i_1] |= ((1 ? 3 : 1));
                var_15 = (((var_1 ? var_0 : (arr_0 [i_0]))));
            }
        }
    }
    var_16 = var_3;
    #pragma endscop
}
