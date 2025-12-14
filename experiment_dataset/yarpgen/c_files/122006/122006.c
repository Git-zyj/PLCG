/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    var_17 = var_9;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [16] = 65535;
        arr_3 [i_0] = 65518;
        arr_4 [13] = ((((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) > (((arr_1 [i_0] [i_0]) ? ((var_9 ? var_15 : 2149229675)) : (!var_7)))));
        var_18 = (arr_1 [1] [i_0]);
        arr_5 [i_0] = ((min(65524, (~1))));
    }
    #pragma endscop
}
