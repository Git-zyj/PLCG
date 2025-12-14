/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (max(1048064, (arr_0 [i_0])))));
        var_19 -= (!(var_6 || 166));
    }
    var_20 |= (max(1048064, 0));
    var_21 = var_7;
    var_22 = (min(var_22, (min(var_16, (min(var_4, (!var_6)))))));
    var_23 = 1048064;
    #pragma endscop
}
