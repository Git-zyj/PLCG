/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = 1248411634;
        arr_3 [i_0] &= var_5;
        var_20 = (((((arr_0 [i_0] [i_0]) ^ ((max(var_19, var_4))))) * ((235 ? (arr_1 [i_0]) : (arr_1 [i_0 - 1])))));
    }
    var_21 = (max(var_21, (((var_5 ? var_17 : ((1 ? -4187 : 11)))))));
    #pragma endscop
}
