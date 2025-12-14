/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_4 << ((((!var_8) <= -1823649249)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = min((arr_1 [i_0]), (arr_1 [i_0]));
        var_18 = 18;
    }
    #pragma endscop
}
