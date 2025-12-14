/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(7249, 0));
    var_11 = (((((!(((0 ? var_6 : var_0)))))) + var_5));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_12 ^= (((!((min(126, 0))))) ? ((((min(var_8, var_2))) >> (((((-9223372036854775807 - 1) - -9223372036854775803)) + 9)))) : (arr_1 [0]));
        var_13 = var_9;
    }
    #pragma endscop
}
