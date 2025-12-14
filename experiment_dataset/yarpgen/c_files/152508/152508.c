/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_19 += (min(1712034590, var_2));
            arr_4 [14] &= var_11;
            var_20 = (max(var_20, var_12));
        }
        var_21 ^= (((~37478) ? var_0 : -var_5));
        var_22 = var_17;
    }
    #pragma endscop
}
