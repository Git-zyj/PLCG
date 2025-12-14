/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((((((min(var_14, var_14))) && var_11))), var_14));
    var_17 = (((var_6 ? ((var_7 ? var_0 : -15810)) : (~0))));
    var_18 = (max(var_18, ((var_12 ? ((~(max(var_3, -18)))) : ((((((-385006518 ? var_13 : 48)) <= var_5))))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] = ((64221801 % (arr_1 [1])));
    }
    #pragma endscop
}
