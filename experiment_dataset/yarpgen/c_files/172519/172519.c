/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_16 ? (max(var_14, ((18883 ? var_14 : var_12)))) : (!var_2)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 = (arr_0 [i_0]);
        var_22 = ((((((arr_1 [i_0] [i_0]) <= (arr_0 [i_0])))) % (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))));
        var_23 *= (((1245278568 ? (arr_0 [10]) : (((!(arr_2 [i_0] [i_0])))))));
    }
    var_24 = var_14;
    var_25 -= -var_12;
    var_26 = (((var_2 < (~var_5))));
    #pragma endscop
}
