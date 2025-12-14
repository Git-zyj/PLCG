/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((1 || ((min(var_10, (54872 != 1))))));
    var_17 |= ((1 || ((((~var_8) * ((min(var_2, 0))))))));
    var_18 = (min(var_18, 2147483647));
    var_19 = (max(((-((min(1, 1))))), ((~((max(1, 1)))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_20 = 1;
        var_21 = (max(var_21, ((((arr_2 [i_0 - 1]) ? 1 : 1)))));
    }
    #pragma endscop
}
