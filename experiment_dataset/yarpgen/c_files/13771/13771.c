/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_20 |= 56811;
        var_21 *= (!14348130277364525656);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_22 = ((-(arr_2 [i_1] [i_1])));
        var_23 = ((-2604 % ((max(1, 1)))));
    }
    var_24 = (max(var_24, (((min(1, -2600))))));
    #pragma endscop
}
