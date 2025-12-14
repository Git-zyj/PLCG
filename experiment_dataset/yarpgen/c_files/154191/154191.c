/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 = ((-((((-2857059159404375432 ? 2857059159404375432 : var_0)) | (!0)))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_15 = 2857059159404375432;
        var_16 = (max(var_16, (arr_0 [i_0 - 3])));
        var_17 *= (((arr_0 [i_0 + 2]) >= (arr_1 [i_0 - 2])));
    }
    #pragma endscop
}
