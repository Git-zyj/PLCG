/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max(((((var_3 || var_1) ^ (min(var_15, 40809))))), (((((max(60, 24729)))) + (var_13 + var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [12] = (min(1038132386, (max((var_17 + 16530), (17380907603474193852 != 64)))));
                var_20 &= ((var_16 ? var_12 : ((((~157) ? (arr_3 [i_0] [6]) : (((3256834909 ? 228 : 40809))))))));
            }
        }
    }
    #pragma endscop
}
