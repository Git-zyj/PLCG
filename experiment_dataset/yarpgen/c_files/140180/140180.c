/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_1 [i_0]) ? (1 ^ 8431) : (max(var_12, var_1))))) ? ((((arr_1 [i_0]) > var_10))) : ((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [8])))));
        var_20 = (!1);
    }
    var_21 = var_10;
    var_22 = var_15;
    var_23 = ((max(var_15, 1)));
    #pragma endscop
}
