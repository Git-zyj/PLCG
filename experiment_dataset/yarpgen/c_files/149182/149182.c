/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    var_18 = var_9;
    var_19 &= (max((!var_9), ((!(((255 ? var_10 : 255)))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 *= (((((-(arr_0 [i_0] [i_0])))) ? (!4294967295) : ((((min(14, var_4))) / -656875571))));
        var_21 = (max(var_21, var_5));
        var_22 = (!var_15);
        var_23 = (max(255, ((((max(var_14, (arr_1 [i_0])))) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
    }
    #pragma endscop
}
