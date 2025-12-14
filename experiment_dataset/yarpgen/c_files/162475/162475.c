/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 46036;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = (min(var_16, ((((arr_0 [i_0] [i_0]) ? (min((((-4105844467884774929 <= (arr_1 [i_0])))), (arr_1 [i_0]))) : (((min(1, 166)))))))));
        var_17 = (arr_1 [i_0]);
        var_18 = (max(var_18, 22));
        arr_2 [i_0] = ((((~((min(var_1, 1))))) / var_7));
    }
    var_19 = (min(var_19, var_7));
    var_20 &= (min((max((var_9 + 0), 4630)), var_8));
    var_21 = (min(var_21, var_5));
    #pragma endscop
}
