/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((!var_5), ((var_3 ? (var_7 & var_5) : 23686))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 1;
        var_11 = (((47062 & (arr_1 [i_0]))));
    }
    #pragma endscop
}
