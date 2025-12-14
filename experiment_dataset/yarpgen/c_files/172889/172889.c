/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_10 = (-2147483647 - 1);
        var_11 *= ((!((((arr_1 [i_0]) ? ((var_2 ? var_8 : 11318412269606209923)) : 11421)))));
        var_12 -= ((max((var_6 != 1), (arr_0 [13] [i_0]))));
        arr_2 [2] = (((arr_1 [i_0]) % (((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))));
        var_13 ^= (min(var_2, (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_8))));
    }
    var_14 = var_6;
    #pragma endscop
}
