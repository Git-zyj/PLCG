/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -8516347621704337157;
    var_12 = -8516347621704337157;
    var_13 = -8516347621704337147;
    var_14 = 8516347621704337156;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_3 [0] [i_0] = 0;
        var_15 &= (~(~10));
    }
    #pragma endscop
}
