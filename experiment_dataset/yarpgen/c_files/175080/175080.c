/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~26004);
    var_16 = (max(1, (max((((25980 ? 1 : 1))), (max(1, -4116607183233774260))))));
    var_17 = (255 ^ 65535);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 26004;
        arr_3 [0] [i_0] = var_5;
        var_18 = (-5054 + var_7);
        var_19 = ((~(arr_1 [i_0])));
    }
    #pragma endscop
}
