/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_20 &= (min((arr_1 [i_0] [i_0]), ((max(60, -31208)))));
        var_21 = (((arr_3 [i_0 - 1]) ? var_5 : (((arr_1 [i_0] [i_0]) ? ((max((arr_2 [12] [1]), 111750080))) : ((var_15 ? (arr_0 [i_0] [5]) : (arr_3 [i_0 + 1])))))));
        var_22 &= ((((!(arr_0 [i_0 - 2] [i_0 - 3]))) ? ((min(var_19, (~var_5)))) : (arr_0 [i_0 + 3] [i_0 + 1])));
    }
    var_23 = (max(var_23, ((((max(var_6, var_6)))))));
    #pragma endscop
}
