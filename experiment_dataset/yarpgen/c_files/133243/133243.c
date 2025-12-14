/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_13);

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_12;
        arr_5 [0] |= -var_2;
        var_21 = (((arr_1 [i_0 - 1] [i_0]) ? ((((92 >= ((1540358355 ? var_11 : -101)))))) : ((min((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    var_22 = (var_18 - var_14);
    #pragma endscop
}
