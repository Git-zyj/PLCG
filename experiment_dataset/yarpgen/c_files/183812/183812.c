/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_12 = var_5;
        arr_2 [i_0] = (min((var_10 + var_9), (((var_9 == (max(var_8, var_9)))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 7;i_1 += 1)
    {
        arr_6 [i_1 - 2] = (~var_5);
        var_13 = (var_8 && var_6);
    }
    var_14 = (max((max((~var_9), var_6)), var_11));
    var_15 = (max(((((min(0, 0))) + ((var_0 << (108 - 100))))), (((((var_0 ? 1548152655862472456 : 4439)) != 6993732088391954617)))));
    #pragma endscop
}
