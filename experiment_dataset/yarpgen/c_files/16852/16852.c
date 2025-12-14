/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max(var_4, ((min(57347, var_5)))))) ? var_4 : var_6));
    var_20 = (max(var_20, var_0));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_21 = (max(var_21, (((((min(-var_15, 57347))) * ((var_3 ? var_4 : (arr_0 [i_0]))))))));
        var_22 = (max(var_22, ((max(((~(arr_2 [i_0]))), (min((arr_2 [i_0]), (arr_2 [i_0]))))))));
        var_23 = (!var_7);
        var_24 = (arr_0 [3]);
    }
    #pragma endscop
}
