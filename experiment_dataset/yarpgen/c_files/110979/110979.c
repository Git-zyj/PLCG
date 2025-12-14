/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = var_0;
        var_16 = ((((((arr_0 [20] [i_0]) ? 57129 : 65527))) ? ((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) : ((var_5 & (arr_0 [i_0] [i_0])))));
        var_17 += (((var_5 > ((min(var_3, var_8))))));
    }
    var_18 = var_4;
    #pragma endscop
}
