/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_19 = (min(1842644879, -1807343692));
        var_20 = ((+((((min((arr_2 [6] [5]), -2004962402)) > 0)))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((1577351599 || (arr_1 [15])));
        arr_7 [i_1] = (((arr_3 [i_1]) + ((var_15 ? (min(1790159876, 4294967282)) : var_15))));
    }
    var_21 = 127;
    var_22 = (((!-20) | 0));
    #pragma endscop
}
