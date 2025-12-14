/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = (max(var_18, (min((((~433250310) ? (arr_0 [i_0]) : var_11)), ((~(~-433250305)))))));
        var_19 = (min(var_17, (((min(-433250305, -8670583594913629912))))));
    }
    var_20 = var_13;
    var_21 |= ((!((var_4 || (4096 && var_10)))));
    #pragma endscop
}
