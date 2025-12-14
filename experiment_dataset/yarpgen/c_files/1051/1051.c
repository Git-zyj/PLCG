/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = var_1;
                var_17 = ((min(119, ((var_3 ? 72 : 122)))));
                var_18 = (((((((-(arr_4 [1] [i_1]))) == 90))) << (arr_1 [i_1])));
            }
        }
    }
    var_19 = ((1222104586 < (min(92, var_7))));
    #pragma endscop
}
