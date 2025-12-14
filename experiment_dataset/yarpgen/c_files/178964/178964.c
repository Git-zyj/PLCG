/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_13;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0 - 3]) ? (arr_0 [i_0 - 3]) : var_2));
        var_18 -= (-405781741 - 70);
    }

    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_19 = ((((arr_3 [i_1]) ? (arr_3 [i_1]) : 2780)));
        var_20 = 13808812840089259974;
        arr_5 [i_1] = (~(~var_10));
    }
    var_21 = (((((~var_9) ? (65535 | 7) : ((var_13 ? var_6 : var_9)))) > var_15));
    var_22 = var_10;
    #pragma endscop
}
