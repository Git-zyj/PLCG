/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -124;
    var_16 = var_11;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = arr_1 [i_0];

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_17 = ((65535 ? (((((min((arr_1 [i_0]), 60569))) >> (var_9 - 166)))) : (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
            var_18 = (arr_4 [i_1] [i_0]);
            var_19 = 60569;
        }
    }
    var_20 = var_1;
    #pragma endscop
}
