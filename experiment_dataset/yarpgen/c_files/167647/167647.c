/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0 - 3] = (min((min((arr_0 [i_0 + 1] [i_0]), var_4)), (min((arr_0 [i_0 - 3] [i_0 - 1]), var_3))));
        var_10 = 143552238122434560;
        arr_3 [i_0] [13] = (((arr_1 [i_0 - 3]) < (max((arr_1 [i_0 + 1]), 143552238122434560))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_11 ^= (min(((((arr_4 [i_0 - 3] [0]) ? var_8 : ((max((arr_1 [i_0]), var_3)))))), (min((-73 > 8020657615910579164), var_6))));
            var_12 = (arr_1 [i_0 + 1]);
        }
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        var_13 &= (min((((((arr_0 [i_2 - 1] [i_2 - 1]) ? (arr_8 [i_2] [i_2]) : var_4)))), ((-(min(143552238122434560, var_4))))));
        arr_9 [4] |= (max((min(var_2, (-2147483647 - 1))), -8020657615910579148));
    }
    var_14 = ((var_3 ? 143552238122434560 : (((var_1 ^ var_5) ? (min(2590333653, 143552238122434570)) : (18303191835587117042 > var_0)))));
    var_15 = var_9;
    #pragma endscop
}
