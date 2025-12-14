/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_2 [i_0] [i_0]);
        var_13 = (min(var_13, -53200));
    }
    var_14 &= -2088736691599317465;
    var_15 = 3542371056;
    var_16 = (min(var_5, var_10));
    #pragma endscop
}
