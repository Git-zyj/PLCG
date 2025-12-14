/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!((((min(120, 1894504394)) + 9891169)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min((-2147483647 - 1), -2246128318205849565));
        var_12 = (((-32767 - 1) ? (-2147483647 - 1) : 35075));
    }
    var_13 = (!(~var_1));
    #pragma endscop
}
