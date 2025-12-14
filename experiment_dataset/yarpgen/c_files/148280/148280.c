/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = (min(var_20, -var_3));
        var_21 = ((((((var_13 != var_19) ? (max(var_17, var_1)) : (!var_1)))) && ((((max(-26714, 217))) && ((max(var_8, var_19)))))));
        var_22 = (max(((~((var_7 >> (var_13 - 32143))))), ((((var_2 | var_4) != (!var_4))))));
    }
    var_23 = (min(var_23, ((min((max(((var_3 ? var_12 : var_15)), (var_9 <= var_7))), (((~(!var_6)))))))));
    #pragma endscop
}
