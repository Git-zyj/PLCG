/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_13, (((var_1 && ((max(708392889, var_1))))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(17399, ((~(((arr_0 [i_0]) << (-28816 + 28826)))))));
        var_16 &= ((min(1, (min(14807454437265845955, (arr_0 [i_0]))))) | (~3584));
        var_17 = var_3;
    }
    #pragma endscop
}
