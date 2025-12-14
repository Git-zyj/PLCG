/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 = var_7;
    var_13 = var_3;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 += ((((~(((arr_0 [0]) ^ var_5)))) % (min(var_7, (arr_1 [i_0] [i_0])))));
        var_15 = (max(var_15, ((min((max(((var_2 << (64512 - 64512))), var_6)), var_8)))));
    }
    for (int i_1 = 1; i_1 < 6;i_1 += 1)
    {
        var_16 = (((var_4 | var_3) ^ var_1));
        arr_6 [i_1] [i_1] = (((-2147483647 - 1) ? (min(1551503968, -730402269538657911)) : ((((arr_3 [i_1 + 1]) / (arr_2 [i_1 + 4]))))));
    }
    #pragma endscop
}
