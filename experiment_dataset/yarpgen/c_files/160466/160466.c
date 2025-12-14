/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min(var_12, (var_17 + var_15)))) ? 161 : (max(var_9, ((var_10 ? var_14 : var_4))))));
    var_19 = 0;
    var_20 = ((((-((var_1 ? 248 : var_17)))) < (~58720256)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 = (min(var_21, var_12));
        var_22 = ((min(((var_9 - (arr_0 [i_0] [10]))), var_2)));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_23 += (min((max(-58797, (32767 <= -125))), (arr_3 [i_0] [i_0])));
            var_24 = (arr_2 [i_0]);
            var_25 += 6738;
        }
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_26 ^= ((+((+(max((arr_5 [i_2]), 255))))));
        arr_6 [i_2] = var_1;
        arr_7 [i_2] [i_2] = var_12;
    }
    #pragma endscop
}
