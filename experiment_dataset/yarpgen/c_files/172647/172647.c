/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((~var_0), (((~var_5) ? 116 : (-112 ^ 574208952489738240)))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = arr_0 [i_0];
        arr_4 [i_0] = ((-1 ? (((~6) ? (33 | var_4) : 2624002031816362181)) : -799762946));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_12 = 1552860644;
        var_13 = ((var_9 - (((((799762946 ? (arr_1 [i_1]) : var_2))) ? ((min((arr_5 [i_1]), var_4))) : -55))));
    }
    #pragma endscop
}
