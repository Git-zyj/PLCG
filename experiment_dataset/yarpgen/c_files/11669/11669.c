/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_12);
    var_20 = var_2;
    var_21 = ((var_1 ? (~-var_8) : ((((min(var_12, var_5))) ? ((var_9 ? var_3 : var_8)) : (((var_2 << (var_9 - 24662))))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_22 -= (((-(arr_1 [i_0] [i_0]))));
        arr_2 [i_0] = ((((max((arr_0 [i_0]), var_18))) ? (((((arr_1 [8] [i_0]) > -var_16)))) : (((arr_1 [i_0] [i_0]) ? var_7 : (arr_0 [i_0])))));
        var_23 = (arr_1 [i_0] [i_0]);
        var_24 ^= (min((min((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))), (~var_4))), ((-(((arr_1 [i_0] [i_0]) ? var_2 : var_1))))));
    }
    #pragma endscop
}
