/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (var_11 ? (var_9 < var_8) : (!var_19));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 *= (arr_1 [i_0] [16]);
        var_22 = (arr_2 [i_0]);
        var_23 = (max(var_23, (((var_13 - (min(var_8, var_15)))))));
    }
    #pragma endscop
}
