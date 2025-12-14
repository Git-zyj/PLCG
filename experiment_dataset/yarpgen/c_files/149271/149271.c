/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 &= max((max((((0 ? (arr_2 [i_0]) : (arr_2 [i_0])))), (min((arr_1 [i_0]), 1998501017)))), ((min(((~(arr_1 [i_0]))), ((min((arr_1 [i_0]), 1217)))))));
        var_13 = min((((!((max(-739206249, (arr_1 [i_0]))))))), var_3);
        var_14 = ((+((+(min((arr_0 [i_0] [i_0]), var_6))))));
    }
    var_15 = var_3;
    var_16 = ((max(4041357837, var_3)));
    var_17 = ((((!(!var_0))) ? (max(-var_1, var_3)) : (((((((var_3 ? var_8 : 1941738515))) || (var_0 & var_5)))))));
    #pragma endscop
}
