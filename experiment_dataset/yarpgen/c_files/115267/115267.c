/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_21 = (-5008377115571901721 > -5008377115571901718);
        var_22 &= (min((arr_1 [i_0]), (max((arr_0 [i_0]), 1))));
    }
    var_23 = -var_11;
    #pragma endscop
}
