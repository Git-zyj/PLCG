/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~123);

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_19 = (min(var_19, (((-var_6 ? var_15 : (((!((max(var_4, var_12)))))))))));
        arr_2 [i_0] = (min((((1528 - (arr_1 [i_0])))), var_4));
        arr_3 [i_0] [i_0] = ((!((min(var_15, ((var_0 ? var_15 : var_13)))))));
        arr_4 [i_0] &= var_6;
    }
    #pragma endscop
}
