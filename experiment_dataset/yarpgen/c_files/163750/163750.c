/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (min(((!(((1270443900 ? 4250583283 : var_7))))), (var_6 != var_2)));
    var_12 = (1341973563 ? 2320990363 : var_1);
    var_13 = (min((!1973976922), (max(2320990369, var_9))));
    var_14 |= var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = (var_10 >> (2361586318 - 2361586288));
        var_16 = (min(var_16, (440573972 & 3877332251)));
        var_17 = (((arr_1 [i_0]) <= var_8));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_18 = ((-(((!(arr_3 [i_1 - 1]))))));
        var_19 &= ((max(var_10, 9)));
    }
    #pragma endscop
}
