/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_19 = (((3794644233466380251 / (arr_3 [i_0 + 1]))) * ((min((arr_2 [i_0]), (((arr_0 [i_0]) * (arr_2 [i_0])))))));
        var_20 = (2425123722353051555 / 1642052263803949830);
    }
    var_21 = var_5;
    var_22 = (6794231057286837832 + -106);
    #pragma endscop
}
