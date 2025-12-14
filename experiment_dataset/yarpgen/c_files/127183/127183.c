/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = ((((106 != (arr_1 [i_0]))) || var_8));
        arr_2 [i_0] = (-1111633180 & 15246518030105975318);
        var_20 = ((var_16 ? var_8 : ((1 ? 221 : 37755))));
    }
    var_21 = var_5;
    #pragma endscop
}
