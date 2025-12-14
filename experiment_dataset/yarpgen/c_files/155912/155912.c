/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_5;
    var_14 = (min(var_5, -2538));
    var_15 = (-2555 + 1034010282);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = (((min((arr_0 [i_0]), (~83))) <= ((((min((arr_0 [i_0]), (arr_1 [i_0])))) - -2538))));
        var_17 = var_0;
    }
    var_18 = (max(var_18, (var_10 < 192)));
    #pragma endscop
}
