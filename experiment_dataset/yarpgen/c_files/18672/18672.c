/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((max((min(var_2, -1349461562)), ((min(var_1, var_13)))))) ? (min(var_7, 1154438921)) : var_7));
        arr_5 [i_0] = 0;
        arr_6 [i_0] [i_0] = -var_5;
    }
    var_15 = (min((((~(min(2147483616, -1607782571))))), ((-(min(2129616928938094097, var_1))))));
    var_16 = (~var_2);
    #pragma endscop
}
