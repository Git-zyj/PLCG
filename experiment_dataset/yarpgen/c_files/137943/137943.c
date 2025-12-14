/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 = (((var_7 | 255) ? 46019 : ((1 ? 0 : 120))));
        var_13 = (((arr_0 [i_0] [i_0]) ? (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : (arr_1 [i_0] [1])));
    }
    var_14 = ((15 >> ((((min(var_5, (max(var_11, 109))))) - 83))));
    var_15 |= var_9;
    var_16 = var_3;
    #pragma endscop
}
