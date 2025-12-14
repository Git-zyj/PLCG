/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_2);

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_11 = (arr_1 [i_0] [i_0 + 4]);
        var_12 = (((((-22479 ? (arr_1 [i_0] [i_0 + 3]) : (var_9 & var_2)))) ? (max((max(var_3, var_0)), var_3)) : (arr_2 [i_0] [i_0])));
    }
    var_13 -= ((var_4 ? (max(var_0, var_4)) : var_1));
    #pragma endscop
}
