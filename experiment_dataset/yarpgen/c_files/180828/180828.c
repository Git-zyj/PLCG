/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 ^= ((-(((!(((127 ? 11130200946026670460 : var_7))))))));
    var_13 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = (-16 / 8125996580152377851);
        var_15 = (9 / var_1);
    }
    #pragma endscop
}
