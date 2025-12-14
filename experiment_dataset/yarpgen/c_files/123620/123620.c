/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((min((max(-616430764617849792, var_11)), 4016712275377024948)), (min(var_16, ((min(1, 1)))))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_18 = (arr_2 [i_0]);
        var_19 = arr_0 [i_0] [i_0];
        var_20 = 176;
        var_21 = 1;
    }
    #pragma endscop
}
