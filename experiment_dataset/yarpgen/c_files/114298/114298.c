/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = var_4;
    var_15 = var_11;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((251 ? ((~(arr_2 [i_0]))) : (min((arr_2 [i_0]), ((min(251, 32571)))))));
        var_16 = 251;
    }
    #pragma endscop
}
