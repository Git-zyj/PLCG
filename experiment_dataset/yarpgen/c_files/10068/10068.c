/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_0 ? 7482122812472181221 : 8574640703486699367)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_20 = -var_11;
        var_21 = ((2495772493354866843 ? (~var_16) : (~9365428305252720543)));
    }
    #pragma endscop
}
