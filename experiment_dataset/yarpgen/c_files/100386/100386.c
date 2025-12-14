/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((var_7 ? (((!(~213879301)))) : (var_6 || 0)));
    var_13 = (max(var_13, 0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = ((-536870912 ? 213879301 : -213879302));
        var_15 = ((((var_1 ? 603356063 : 0)) > (var_2 - -452834257)));
    }
    #pragma endscop
}
