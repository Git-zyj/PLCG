/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_20 = (arr_0 [i_0]);
        var_21 = (!41);
        var_22 *= (((((+(((arr_1 [0]) ? (arr_0 [1]) : (arr_0 [2])))))) ? (((((arr_0 [10]) ? (arr_0 [10]) : (arr_0 [1]))) << (((((arr_1 [10]) ^ (arr_0 [0]))) - 1549218209927285603)))) : ((((~(arr_0 [2]))) | (((~(arr_1 [0]))))))));
    }
    var_23 = var_19;
    var_24 = ((1672584306544614489 > (~255)));
    var_25 = (((~var_1) % (((((var_14 ? var_15 : var_16))) ? ((var_10 ? var_16 : var_9)) : (~var_9)))));
    #pragma endscop
}
