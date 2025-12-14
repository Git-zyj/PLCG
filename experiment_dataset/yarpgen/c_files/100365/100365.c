/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = -0;
        arr_3 [i_0] [i_0] = (-26568767470480728 != var_10);
        var_21 = ((9223372036854775776 ? 10324 : 0));
        var_22 = -9223372036854775806;
    }
    #pragma endscop
}
