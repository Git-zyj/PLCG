/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = ((-((max(1451, 49610)))));
        var_15 = ((49610 / (1 * -8192)));
    }
    var_16 = var_13;
    var_17 ^= (min(((60 ? (max(18446744073709551615, 7680)) : (((-4742107848585327052 ? 42333 : 15918))))), (0 - 0)));
    var_18 *= var_9;
    #pragma endscop
}
