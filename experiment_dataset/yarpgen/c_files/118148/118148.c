/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((!(!var_0))))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = 308110678;
        var_13 = ((((((((var_5 ? var_11 : var_7))) ? (arr_3 [i_0 - 2]) : -308110669))) ? ((min(0, ((var_2 ? -35 : var_9))))) : ((-(arr_3 [i_0 + 1])))));
        var_14 = (min(((var_7 - (arr_1 [i_0 - 1] [i_0 - 1]))), ((var_4 ? var_4 : var_4))));
    }
    #pragma endscop
}
