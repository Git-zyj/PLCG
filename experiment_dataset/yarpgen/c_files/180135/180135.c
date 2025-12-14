/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 1] = ((!((max((min(1409415587, var_9)), -1868795046)))));
        var_20 |= (((var_17 ? -9043 : (min(var_8, var_15)))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_5 [i_1] = (min(1, (min(var_4, -var_2))));
        var_21 = var_7;
    }
    var_22 = ((((((max(-9043, 12752741640778335598))) || 18446744073709551615)) && var_14));
    #pragma endscop
}
