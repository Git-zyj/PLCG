/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_11;
    var_19 = (-127 - 1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 += var_17;
        var_21 *= (((-(arr_1 [i_0]))));
        arr_3 [i_0] &= ((-16 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
        var_22 = (arr_0 [i_0] [i_0]);
    }
    var_23 = (max(var_23, (134217726 >= var_7)));
    #pragma endscop
}
