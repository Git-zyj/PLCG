/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_2 ? ((-123 ? -775879750 : 18113)) : -4294967275));
    var_14 = (-100 >= 18113);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = 1;
        arr_2 [i_0] = (min(60, 60));
    }
    #pragma endscop
}
