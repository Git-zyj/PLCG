/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = 9223372036854775807;
        var_14 += ((-(((!((min(-9223372036854775807, var_2))))))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_15 = ((min(9223372036854775807, 267707554)));
        var_16 = min(4294967289, ((-(var_0 < var_7))));
        arr_7 [i_1] = (!356147384);
    }
    var_17 = (min(var_13, (min(1, (max(1724658630, var_0))))));
    var_18 = var_6;
    #pragma endscop
}
