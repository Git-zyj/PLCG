/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_1;
    var_15 = (min(((var_5 ? var_8 : (var_1 || var_6))), var_5));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = (((min(15248847075067710040, (arr_1 [i_0])))));
        arr_3 [6] [i_0 + 2] = (((arr_0 [i_0]) <= 0));
        arr_4 [i_0] = (max(((((arr_1 [i_0 + 4]) && ((((arr_0 [i_0 - 1]) << (((arr_1 [i_0]) - 46105)))))))), 185));
    }
    var_16 = var_6;
    #pragma endscop
}
