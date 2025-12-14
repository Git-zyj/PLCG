/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((((214259883 ? 15 : 10)) > var_0)), ((!((min(var_1, var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = (min(((var_5 ? var_6 : var_1)), -1479866636));
                var_13 = ((+(max((arr_1 [i_1] [i_1]), ((max(var_6, 10)))))));
                var_14 = var_0;
            }
        }
    }
    var_15 ^= (max((((-214259884 ? 594397710 : 1))), (((246 ? -1 : -9314)))));
    #pragma endscop
}
