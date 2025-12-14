/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(-37, 0));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = (max(((((max(0, var_2))) | ((9223372036854775807 ? var_7 : (arr_1 [i_0] [i_0]))))), (((!((max(var_12, var_2))))))));
        var_19 = arr_1 [11] [i_0];
    }
    #pragma endscop
}
