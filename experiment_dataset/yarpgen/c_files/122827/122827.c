/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_2;
    var_17 = (min(var_17, var_15));
    var_18 |= var_4;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (arr_0 [i_0]);
        arr_2 [15] = var_12;
        var_20 = (!3725871520);
        var_21 ^= (arr_1 [i_0]);
        arr_3 [i_0] = 2093927334;
    }
    #pragma endscop
}
