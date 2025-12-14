/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 5642429711281528066;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_17 = (max(var_17, (((4279067782 * ((((((var_14 + (arr_0 [9])))) ? 182 : (((arr_1 [i_0]) ? (arr_0 [i_0]) : var_8))))))))));
        var_18 = (arr_0 [i_0]);
    }
    var_19 = ((((((var_15 - var_11) + (-6114039497528183689 - 46)))) ? ((((1 ? 62 : 20718)) | (~var_10))) : ((((var_12 ? var_4 : 1345335949))))));
    #pragma endscop
}
