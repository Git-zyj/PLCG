/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (min(var_2, 14092875515952066184));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 *= (var_10 ? var_9 : (arr_1 [i_0]));
        var_20 = (max(var_20, (arr_1 [6])));
        var_21 = ((!(!4353868557757485431)));
    }
    var_22 *= (var_2 ? (((var_1 ? var_9 : ((1312963085 ? var_6 : 1))))) : ((~(min(0, 14092875515952066204)))));
    #pragma endscop
}
