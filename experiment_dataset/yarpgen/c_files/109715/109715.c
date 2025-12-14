/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 62;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_19 = (max(var_19, (-20694 < var_4)));
        var_20 |= (((var_17 < var_8) ? var_1 : 2047));
        var_21 = (2047 >> 36);
    }
    #pragma endscop
}
