/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) ? (((arr_1 [i_0]) + (arr_0 [i_0]))) : ((min(40388, 94)))));
        arr_3 [i_0] = -var_16;
    }
    var_20 = (max(((43986 ? var_8 : var_12)), (((!(((var_15 ? var_14 : var_13))))))));
    var_21 = ((((!(var_4 || -94))) && (!var_17)));
    #pragma endscop
}
