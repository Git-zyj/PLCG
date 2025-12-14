/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_8;
    var_18 = min(1090715534753792, (((((min(var_5, var_0))) ? var_15 : var_13))));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_19 = -5200229709405888153;
        var_20 = ((((!((((arr_1 [10]) - var_3))))) ? var_9 : var_3));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_21 = ((((arr_5 [i_1]) < var_13)));
        arr_6 [i_1] = (var_5 ^ var_15);
    }
    var_22 = var_1;
    #pragma endscop
}
