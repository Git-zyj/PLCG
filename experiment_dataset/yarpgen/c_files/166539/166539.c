/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1;
    var_15 = 38274;
    var_16 = (max(var_16, 70));
    var_17 = ((max(var_9, -23270)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = (arr_0 [i_0] [i_0]);
        var_19 &= 90;
        arr_2 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
        var_20 = 3690551608;
    }
    #pragma endscop
}
