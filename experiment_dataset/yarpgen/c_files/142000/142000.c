/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = (140 || 1);
        var_20 = ((!(((-((max(-72, (arr_0 [i_0] [i_0])))))))));
        var_21 += (arr_1 [i_0]);
    }
    var_22 = ((-(((((var_17 ? 796704697 : -72))) ? var_1 : (((min(1, var_8))))))));
    var_23 = (!var_1);
    var_24 = ((140 ? 92 : -4054617341967509688));
    #pragma endscop
}
