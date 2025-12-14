/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((min(var_2, var_10)), ((max((var_5 % -1828211996), ((min(var_3, 0))))))));
    var_13 = (max(var_13, (((~(min((var_11 | var_3), (max(650064680, var_6)))))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (max(0, 8381111206935728856));
        arr_2 [i_0] = -323647707;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_15 = (max(var_15, (((-(!87))))));
        var_16 = (((min((((9925301840666721784 ? 94 : 2035891487))), var_2)) + ((((((var_2 ? 2374667598 : 10571))) ? (((var_9 ? 13955 : 779))) : ((var_2 ? var_10 : var_6)))))));
        var_17 = (((~(2 | -7))));
        var_18 = (min(((min((!18446744073709551615), (~102)))), ((((max(var_8, var_3))) ? 2687425456 : (!var_10)))));
        var_19 = ((!(!-18)));
    }

    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        var_20 = (min(var_20, ((((!-9086228054719349450) * (!var_11))))));
        var_21 &= (~var_10);
    }
    #pragma endscop
}
