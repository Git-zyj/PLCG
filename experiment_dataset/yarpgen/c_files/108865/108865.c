/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (arr_2 [i_0]);
        var_16 &= 235;
        var_17 *= ((((((arr_1 [i_0] [i_0]) ? 1 : (arr_2 [i_0])))) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])));
    }
    var_18 = (max(var_18, ((min(((var_5 ? ((var_11 ? 9006924376834048 : 1)) : (var_8 == var_8))), (-32767 - 1))))));
    var_19 = (!var_4);
    #pragma endscop
}
