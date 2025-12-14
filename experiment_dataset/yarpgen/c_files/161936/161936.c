/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((43023 ? 32767 : 3965456391))) || -18446744073709551613)));
    var_19 = (var_12 & var_0);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = ((var_1 * (arr_1 [i_0])));
        var_21 = ((!(arr_0 [i_0])));
    }
    #pragma endscop
}
