/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_11 -= ((((((arr_1 [i_0 + 1]) ? (arr_1 [i_0 - 1]) : 1))) ? ((min(131, 119))) : ((33928629 ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1])))));
        arr_2 [i_0] = 9390645090950199972;
        var_12 = ((max((min(var_7, 454213728), (~1)))));
    }
    var_13 = (max(var_13, (!108)));
    var_14 = (min(124, ((((934517030 | 1) || (var_5 >= 1))))));
    var_15 = var_2;
    var_16 = ((((var_5 ? 131 : ((4294967295 ? var_9 : 4294967293)))) + 2644332284));
    #pragma endscop
}
