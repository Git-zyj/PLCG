/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        var_15 = arr_1 [7];

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            var_16 = (((max(32767, (!var_0)))));
            var_17 = var_8;
            arr_7 [11] = 91;
            var_18 = 12554406793103212063;
            var_19 = (min(var_19, ((max(1, 60623)))));
        }
    }
    var_20 = (max(var_20, 0));
    #pragma endscop
}
