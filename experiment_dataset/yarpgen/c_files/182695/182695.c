/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_4;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = ((((((arr_0 [i_0]) ^ (arr_1 [i_0])))) ? (((arr_0 [i_0]) >> (((min(255, 9223372036854775807)) - 253)))) : ((-(arr_0 [i_0])))));
        var_14 |= (((((arr_0 [i_0]) & (~28)))) && ((((arr_0 [i_0]) ? var_10 : 1))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_15 = 1;
        var_16 *= ((((55 ? (((min((arr_0 [15]), (arr_0 [i_1]))))) : ((2107003056797272257 % (arr_2 [1]))))) <= 25));
        var_17 ^= (arr_1 [i_1]);
        var_18 *= (-2107003056797272258 <= -17);
        var_19 ^= ((1 ? 1 : 1));
    }
    var_20 = ((var_11 ? 9223372036854775807 : (max(var_7, (((var_3 ? 1 : var_8)))))));
    #pragma endscop
}
