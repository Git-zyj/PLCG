/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (!(0 / var_4));
        var_20 = ((!(((~(~var_10))))));
        var_21 = 12970746871949887966;
        arr_4 [i_0] [9] = (((11054315594472608350 & 22) ? 18446744073709551593 : ((max(var_1, var_13)))));
    }
    var_22 &= max((((var_16 ? var_14 : 1))), 2382);
    #pragma endscop
}
