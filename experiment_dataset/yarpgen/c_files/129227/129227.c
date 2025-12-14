/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((min(-69, (var_11 ^ var_8))));
    var_15 = (((((((!var_9) != var_6)))) & var_2));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = var_13;
        var_17 = (max(var_17, (arr_2 [i_0] [13])));
        var_18 = (min(var_18, (arr_1 [i_0])));
        var_19 = (((7 / (arr_1 [i_0]))));
    }
    var_20 = (max(var_20, (((((max(-var_4, var_10))) * (min(7243388938616265778, var_13)))))));
    #pragma endscop
}
