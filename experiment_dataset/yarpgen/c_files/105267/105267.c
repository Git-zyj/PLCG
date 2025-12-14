/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((!((max(var_4, var_7))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 *= (((((arr_2 [i_0]) + (arr_2 [i_0])))) ? var_0 : (arr_2 [i_0]));
        var_18 = ((((((!16383) < 109))) % ((min((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    #pragma endscop
}
