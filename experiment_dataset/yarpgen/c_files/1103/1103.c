/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= (arr_0 [11]);
        var_17 *= ((max((arr_0 [i_0]), (max(var_12, 607066688118180980)))));
        var_18 = (((((min((arr_0 [i_0]), 1010065438))) ? (max((arr_0 [i_0]), 607066688118180984)) : 4119458092)) >> (((min((((var_0 ? (arr_0 [i_0]) : var_6))), (((-1 + 9223372036854775807) << (((arr_0 [i_0]) - 29596)))))) - 29534)));
        arr_3 [0] [i_0] |= ((((min(var_5, (arr_0 [i_0])))) ? (((((((var_2 ? 4294967292 : (arr_1 [i_0] [i_0])))) || (!1414638612))))) : (((((-1 ? 2 : -1))) ? ((((!(arr_0 [i_0]))))) : var_15))));
        arr_4 [i_0] = arr_0 [1];
    }
    var_19 &= (-var_10 % 4095);
    #pragma endscop
}
