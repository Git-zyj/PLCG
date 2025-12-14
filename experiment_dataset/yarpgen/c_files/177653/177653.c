/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_12 = (max((max((-2147483647 - 1), (((-2147483647 - 1) ? 54885 : 17822244094217334486)))), ((0 ? ((65508 ? 195 : 16302076189706739960)) : (~7)))));
        var_13 = (min(var_13, (min((~2144667884002811626), ((max(64439, 0)))))));
        var_14 |= (((((min(52, 1)))) < ((10743514516266044537 ? 1 : 2144667884002811655))));
        var_15 = (min(2538973520082996814, (((8845722684661798283 - (-2147483647 - 1))))));
    }
    var_16 = (max(var_16, -var_7));
    #pragma endscop
}
