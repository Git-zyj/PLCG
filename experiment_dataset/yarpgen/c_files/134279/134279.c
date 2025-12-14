/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((!((((203 || 25) + (4358551384447931091 & var_11)))))))));
    var_14 = -4426646435890397276;

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_15 |= ((!(~3)));
        var_16 += ((~(~var_4)));
    }
    #pragma endscop
}
