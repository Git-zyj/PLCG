/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_12, 3));
    var_15 = var_10;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_16 = (max(var_16, (((((((arr_0 [i_0 - 1]) ? var_2 : (arr_1 [i_0 + 1])))) ? (arr_0 [i_0 + 2]) : (max(67108800, var_13)))))));
        var_17 -= ((((((~14901132506629723265) >> (var_0 - 107)))) ? (arr_0 [i_0 + 1]) : (((~(((arr_1 [i_0 + 1]) ? (arr_1 [i_0]) : 17)))))));
    }
    #pragma endscop
}
