/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (0 != 0);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = (min(var_17, (arr_0 [i_0] [i_0])));
        arr_2 [7] = (((((0 ? ((-(arr_1 [i_0] [i_0]))) : var_7))) ? var_8 : (min(31, -117))));
        arr_3 [i_0] = (((((((arr_0 [i_0] [i_0]) >= var_8)))) >= (max((arr_1 [i_0] [i_0]), 3454201747))));
        arr_4 [i_0] |= min(var_15, (arr_0 [i_0] [i_0]));
    }
    var_18 = (981874349 != var_4);
    #pragma endscop
}
