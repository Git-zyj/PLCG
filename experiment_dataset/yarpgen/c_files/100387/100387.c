/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_11 = (min((!var_2), (((arr_1 [i_0]) - (arr_1 [i_0])))));
        var_12 = (~-22);
    }
    var_13 = ((var_0 <= (!-1008023141)));
    var_14 = var_2;
    var_15 = -var_4;
    #pragma endscop
}
