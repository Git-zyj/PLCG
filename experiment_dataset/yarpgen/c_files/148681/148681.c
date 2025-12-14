/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (min((((((var_0 ? var_5 : var_3))) ? var_11 : 15766)), var_5));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((min(-1, 255)));
        var_16 = (min(var_16, ((min(-var_7, (min(var_3, (arr_1 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_17 = (max(var_17, (arr_1 [i_1])));
        var_18 = ((((((min(0, 0)) << (((~-1016759167) - 1016759146))))) ? 6 : (min((min(-1, var_10)), (arr_1 [i_1])))));
    }
    var_19 = ((-(var_12 - 6049)));
    #pragma endscop
}
