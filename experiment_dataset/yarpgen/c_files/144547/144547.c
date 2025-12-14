/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_7, -2414980646291866836));
    var_15 &= var_10;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = 250;
        var_16 = ((250 | (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_0])))));
        var_17 = (max(var_17, var_2));
        var_18 = ((((-(arr_2 [i_0]))) + var_6));
        var_19 *= 31086;
    }
    var_20 = var_4;
    var_21 = (((((-3901321961956518140 ? 2992811793 : -3901321961956518133))) ? 3901321961956518133 : var_9));
    #pragma endscop
}
