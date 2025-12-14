/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((min(var_1, var_17))) ? 54955 : var_8))) ? var_11 : var_2));
    var_21 = (~var_2);
    var_22 = (max(var_22, ((min(var_16, (max((~54941), 10581)))))));
    var_23 = var_11;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_24 *= 35;
        var_25 = (max(var_25, (arr_2 [i_0])));
        var_26 = (min(var_26, ((max(((127 / (((arr_2 [i_0]) ? var_6 : (arr_0 [i_0]))))), ((((((arr_2 [i_0]) >= 124)) ? 1158154756 : (((-(arr_1 [13] [i_0]))))))))))));
        var_27 += 54916;
    }
    #pragma endscop
}
