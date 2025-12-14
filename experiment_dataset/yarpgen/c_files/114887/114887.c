/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((arr_1 [10] [0]) ? var_7 : (arr_1 [i_0] [i_0])));
        var_17 = ((((((-3676845904200029059 + 9223372036854775807) << (((arr_2 [i_0]) - 17887))))) ? (arr_1 [i_0] [i_0]) : 115));
    }
    var_18 = (max(-15032, 27));
    var_19 = var_6;
    #pragma endscop
}
