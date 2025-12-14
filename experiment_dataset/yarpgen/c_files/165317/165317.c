/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0 - 1] = var_2;
        arr_5 [i_0 - 1] [i_0 + 1] = 17865;
        var_10 = (((arr_1 [i_0 - 1]) ? -122 : ((-17855 ? -17857 : ((17865 ? var_8 : 9096))))));
    }
    var_11 = var_4;
    var_12 = var_6;
    var_13 = ((((((min(var_2, var_4))) ? var_9 : var_7)) >> (-4953308821380153299 + 4953308821380153327)));
    #pragma endscop
}
