/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((-1206 && ((max(var_7, 46183))))), (!var_13)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_17 = ((-(64355 ^ 16)));
        var_18 = ((((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : var_9))) && (arr_0 [i_0 + 1])));
        arr_2 [i_0] [i_0] |= ((1166 && ((((arr_1 [i_0 - 2] [i_0]) & 12979259346851795958)))));
    }
    var_19 = ((!(((((var_0 ? var_11 : var_14)) << (((~var_8) + 239)))))));
    #pragma endscop
}
