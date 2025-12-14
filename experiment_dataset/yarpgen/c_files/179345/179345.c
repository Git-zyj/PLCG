/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0 - 1] [i_0] = var_9;
        var_16 = arr_3 [i_0];
        var_17 = (min(var_17, ((((((((max(-1007002032, 1))) ? (arr_2 [i_0]) : -8879396828266929435))) | (arr_0 [i_0]))))));
        arr_5 [i_0] [i_0] = (min((min((arr_0 [i_0]), var_6)), var_12));
    }
    var_18 = (max(var_18, var_11));
    var_19 = (max(var_19, 18446744073709551615));
    var_20 = var_15;
    #pragma endscop
}
