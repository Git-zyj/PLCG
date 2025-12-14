/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [0] = var_9;
        var_16 = (~var_9);
    }
    var_17 &= ((((!(var_2 >= var_13))) || var_3));
    var_18 = ((((((var_4 ? 0 : var_4))) ? (min(var_4, 8256073117261889732)) : (14 - var_0))));
    var_19 = (min(var_19, ((max(((27 ? var_3 : var_5)), ((((max(4294967266, var_3))) ? (var_3 & 17624267452851593802) : var_2)))))));
    #pragma endscop
}
