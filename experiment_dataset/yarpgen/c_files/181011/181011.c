/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((min(0, 18446744073709551615)))));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_20 = (min(var_20, (arr_0 [i_0] [i_0])));
        var_21 = (-2066728914 - var_4);
        var_22 *= (arr_2 [i_0]);
        var_23 = ((!((max((((arr_3 [i_0]) ? 18446744073709551595 : 18446744073709551599)), (((var_1 ? 16384 : var_7))))))));
    }
    #pragma endscop
}
