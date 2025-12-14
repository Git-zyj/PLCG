/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_14, (!var_11)));
    var_18 = (max(var_11, var_13));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = -64;
        arr_3 [i_0] [i_0] = (!var_9);
    }
    #pragma endscop
}
