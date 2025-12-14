/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = ((((((min(8181536191879507769, 8181536191879507773))) ? (1 & 5002984135412611431) : 8364692721464538084)) ^ ((38 ? (arr_1 [i_0 + 2]) : 8181536191879507779))));
        var_12 ^= ((+((-6750988414607514970 ? (arr_2 [i_0 - 4]) : (((arr_1 [i_0]) ? 4762842415220252111 : 8181536191879507769))))));
        var_13 = ((~(((arr_3 [i_0 - 3]) ? 1 : (arr_3 [i_0 - 1])))));
        var_14 = ((-((~(arr_3 [i_0 + 1])))));
    }
    var_15 = (max(var_15, var_2));
    var_16 = var_1;
    #pragma endscop
}
