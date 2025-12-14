/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_13;
    var_17 = var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (min(var_18, (!22111)));
        arr_2 [i_0] = min((1 * -22111), (6057150367016377000 / -8825015324807700315));
        var_19 = min((min((arr_1 [i_0]), 18400540377496721900)), (!-1330729836769699370));
        var_20 = (((arr_1 [i_0]) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : var_11)) : (min((arr_1 [i_0]), var_1))));
    }
    #pragma endscop
}
