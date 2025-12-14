/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 12399720897930532017;
    var_11 = (min((max((min(var_5, 4916523251300736564)), ((min(var_8, var_0))))), ((max((min(var_4, -1900299441)), (max(1900299440, var_6)))))));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_12 = (max(var_2, ((max((arr_0 [i_0] [i_0]), 21553)))));
        arr_2 [2] |= (((max((251 ^ var_0), (((var_5 ? var_6 : var_6))))) | 28));
    }
    #pragma endscop
}
