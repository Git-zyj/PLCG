/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!(((var_6 && var_17) || 204))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] [i_0 + 1] = ((((var_11 | (204 + 0))) >= (arr_1 [i_0 - 2] [i_0])));
        var_20 = ((((min(63, 255))) <= (var_7 != var_1)));
        var_21 = arr_1 [i_0] [i_0];
    }
    #pragma endscop
}
