/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min((min(var_5, var_6)), var_0))) <= ((min(var_8, (min(var_0, 65535)))))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((~((((!24398) <= (0 + 32758))))));
        var_16 = var_12;
        var_17 = (min(((((min(-3011, var_2))) / (arr_0 [i_0]))), -24398));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_18 = (117 == var_11);
        var_19 = ((((min(24398, (min(var_6, -3608989605378215147))))) - (((arr_3 [i_1] [i_1]) - (arr_3 [12] [12])))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_8 [12] = 1;
        arr_9 [i_2] = ((!(arr_6 [i_2] [i_2])));
        var_20 = (min(48, ((max((arr_7 [i_2]), (arr_7 [i_2]))))));
    }
    #pragma endscop
}
