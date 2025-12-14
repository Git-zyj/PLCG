/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, -24495));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = (min(var_16, (((max(((max((arr_0 [i_0]), (arr_3 [22] [i_0])))), (((arr_2 [i_0]) ? (arr_1 [4]) : var_2))))))));
        arr_4 [i_0] [i_0] = var_5;
        var_17 *= (max((max(((var_14 ? (arr_2 [14]) : (arr_2 [i_0]))), ((min(var_3, 7614))))), (((max(var_8, (arr_0 [i_0])))))));
    }
    var_18 = (min(var_18, (((((min(7626, (max(-7628, -17402))))) ? (max(var_13, ((min(var_0, var_0))))) : -7636)))));
    var_19 = (min((((var_1 && ((max(var_3, var_13)))))), var_0));
    #pragma endscop
}
