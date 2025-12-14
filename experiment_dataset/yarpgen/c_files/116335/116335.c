/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (min((var_0 && var_7), (!var_1)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 += (((!((min((arr_1 [i_0]), 1))))));
        var_13 = (max(var_13, ((-((36 ? 1 : (arr_1 [i_0])))))));
        var_14 = (max(var_14, (((!(arr_1 [i_0]))))));
    }
    #pragma endscop
}
