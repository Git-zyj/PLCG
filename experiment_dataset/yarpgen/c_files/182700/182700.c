/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += max((max(var_8, ((min(var_5, var_9))))), (((((82 ? 15461 : 15461))) ? ((20679 ? var_6 : var_0)) : (((var_7 ? var_4 : var_7))))));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_13 = (min(((max(18000, 15448))), ((var_1 ? 15454 : (arr_1 [i_0 - 1] [i_0])))));
        var_14 = min((max((arr_0 [17]), (arr_1 [i_0] [i_0 - 1]))), ((min(9134460293748694281, 15461))));
    }
    var_15 = var_11;
    #pragma endscop
}
