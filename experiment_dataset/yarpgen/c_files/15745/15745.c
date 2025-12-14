/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 18446744073709551586;
    var_18 = var_10;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 += ((!(((-15423 ? (arr_0 [i_0]) : ((4294967295 ? 83 : 15423)))))));
        var_20 = (min(((4294967295 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))), 3854465394));
        var_21 *= arr_1 [i_0] [i_0];
        var_22 = (2854385734 && 18446744073709551615);
        var_23 = (!(((max(37, 228)))));
    }
    var_24 = min(var_4, (((var_11 * -5308) ? var_5 : (((var_9 ? 4294967295 : var_7))))));
    #pragma endscop
}
