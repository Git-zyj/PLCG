/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = (min(((((max(var_13, (arr_1 [i_0]))) <= (((((arr_2 [6] [i_0]) || 8380416))))))), (arr_2 [i_0] [i_0])));
        var_21 *= (((max((max(7907444202772635690, 12875322705894406583)), ((min(2340816800, 60))))) % ((max(3, 2340816813)))));
        arr_3 [i_0] = ((!(((~((max(var_0, (arr_2 [i_0] [i_0])))))))));
        var_22 = (((((arr_2 [i_0] [i_0]) & (((arr_1 [i_0]) & var_2)))) >> ((((~(arr_0 [i_0] [i_0]))) + 729016213))));
    }
    var_23 = var_2;
    var_24 = ((var_8 ? var_4 : (min(var_2, 0))));
    #pragma endscop
}
