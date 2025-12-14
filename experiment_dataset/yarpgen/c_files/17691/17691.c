/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    var_21 ^= (((((var_1 ? 1211306531639691350 : 255))) >= ((55331939 ? ((1 ? 11679335346873580072 : 157)) : 255))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_22 = (max(var_22, -255));
        var_23 = ((-((-(var_10 - var_6)))));
    }
    #pragma endscop
}
