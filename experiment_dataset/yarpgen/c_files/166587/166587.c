/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((((-(var_11 & var_17)))), (max(((max(var_7, 32758))), (var_6 % 32742)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = ((32720 ? (-2147483647 - 1) : -32757));
        var_20 = (((arr_0 [i_0]) >= (arr_1 [i_0] [i_0])));
        arr_2 [i_0] = (((arr_1 [i_0] [i_0]) <= (arr_1 [i_0] [i_0])));
        var_21 = 32757;
    }
    #pragma endscop
}
