/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 &= (((((max((arr_3 [i_0] [i_0]), var_13)) ? 3708989633 : -361873208)) ^ (arr_1 [i_0])));
        var_20 = (min(var_20, ((min((arr_0 [i_0]), 361873207)))));
        var_21 = (max(-3909416129, 728316522));
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            var_22 = (min(var_22, 195));
            var_23 = 56;
            var_24 &= ((((min(0, 186))) | (arr_3 [i_2 - 3] [i_1 - 3])));
        }
        arr_9 [i_1] = 33776997205278720;
        arr_10 [0] [i_1] &= ((~((361873178 ? 1930418501 : var_11))));
        var_25 = (~(arr_4 [i_1]));
        arr_11 [1] [i_1] = var_17;
    }
    var_26 = (~var_14);
    #pragma endscop
}
