/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(18446744073709551615, 4294967295));
    var_18 = var_16;
    var_19 = ((var_16 / ((min(1707038532, ((min(var_1, var_2))))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_20 = (~16);
        arr_4 [i_0] [i_0] = (!-96);
        arr_5 [i_0] [i_0] = 57;
        var_21 = (arr_2 [i_0]);
    }
    #pragma endscop
}
