/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_3 - 14) ? (896 || -896) : (min(var_7, var_9)))) >> (((((((~0) + 2147483647)) >> -1996219431)) - 1073741795))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 -= ((896 ? (max((0 ^ 1), ((min(1, -5586))))) : (((arr_0 [1]) ? (arr_0 [12]) : (arr_0 [8])))));
        var_14 -= (max(1, (!57344)));
        var_15 = (max(1, -139608856));
    }
    #pragma endscop
}
