/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = 27366;
        arr_5 [i_0] |= (min((((arr_0 [i_0] [i_0]) ? ((var_9 ? (arr_2 [i_0]) : var_6)) : (((-27375 ? (arr_2 [i_0]) : -27372))))), (!13108710991503084010)));
        arr_6 [i_0] = (((arr_0 [i_0] [i_0]) || (((max((arr_0 [i_0] [i_0]), var_6)) <= (arr_2 [i_0])))));
    }
    var_12 = ((((((max(var_4, var_0))) ? (((var_4 ? var_10 : 176))) : (~var_9))) > var_2));
    var_13 = var_2;
    #pragma endscop
}
