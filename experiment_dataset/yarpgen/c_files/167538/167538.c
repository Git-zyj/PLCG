/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = var_8;
        arr_4 [i_0] = ((((arr_2 [i_0]) ? (arr_1 [i_0]) : (var_5 && var_0))));
    }
    var_10 = 3177905694;
    #pragma endscop
}
