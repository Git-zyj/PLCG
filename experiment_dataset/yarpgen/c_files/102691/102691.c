/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = var_1;
        var_13 |= var_7;
    }
    var_14 ^= (((((2147483647 ? 2147483644 : 384))) < (min(((var_7 ? 208 : 576390383559245824)), (var_1 != var_3)))));
    var_15 = ((((((((var_11 ? 2147483628 : var_0))) ? (~var_5) : (var_6 / var_2)))) && var_8));
    var_16 = (min(var_16, (((((min((~var_5), ((var_3 ? 786095012 : var_9))))) ? ((var_5 << (((min(16747771831106450961, 47)) - 47)))) : (var_0 < var_3))))));
    var_17 = (max(var_11, ((((var_5 ? var_10 : 2048)) ^ (((15 ? var_1 : var_11)))))));
    #pragma endscop
}
