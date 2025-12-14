/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~(((((178 ? 78 : 6342224584173157410))) ? (((178 >> (12104519489536394207 - 12104519489536394198)))) : (max(77, -8300100971966040236))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 -= (max(((((~var_11) ? ((0 ? 77 : 65535)) : ((var_2 ? var_9 : var_7))))), ((((max(77, 3223054448))) ? (((-108 ? var_3 : -8300100971966040236))) : (1071912848 | 4446974844011477244)))));
        var_14 = -0;
    }
    #pragma endscop
}
