/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((117 ? -566415709 : (-32767 - 1)));
    var_15 ^= ((var_1 ? ((-(min(var_5, var_12)))) : var_12));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_16 = (max((max(566415709, 4177905185)), ((max((arr_1 [i_0 - 1]), (((arr_0 [i_0]) ? (arr_0 [i_0]) : -566415709)))))));
        var_17 = (max(var_17, ((min(-0, (var_2 / var_11))))));
    }
    var_18 = var_9;
    #pragma endscop
}
