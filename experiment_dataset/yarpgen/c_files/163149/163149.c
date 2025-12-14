/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, 6814868904546324163));
    var_20 = (var_7 - var_2);
    var_21 = 27239;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_22 += (((!var_2) ? (min(-742112073524732548, (!var_2))) : (--5078)));
        var_23 &= ((~(min(((-27239 ? 27238 : 11631875169163227446)), (((var_16 ? -742112073524732534 : 89)))))));
    }
    var_24 = 742112073524732534;
    #pragma endscop
}
