/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (((-(!var_9))));
        arr_2 [i_0] [2] &= (min((((arr_0 [i_0]) / var_7)), ((-18818 ? (arr_0 [2]) : (arr_0 [i_0])))));
    }
    var_21 = var_19;
    var_22 = 12;
    #pragma endscop
}
