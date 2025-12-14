/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (min((((33554431 | var_13) & (((var_14 ? var_8 : 48430))))), (min(((var_14 ? 0 : var_0)), ((max(var_15, var_15)))))));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_18 = (min(var_18, var_13));
        var_19 = (min(var_19, ((min(-2147483622, 33554431)))));
    }
    var_20 = ((((((var_14 ? var_16 : var_14)) ? var_11 : (2147483621 + var_11)))));
    var_21 = (min(var_21, (max(3910461721, 17106))));
    var_22 = (min(var_22, ((((var_5 + 2147483647) << (33554431 - 33554431))))));
    #pragma endscop
}
