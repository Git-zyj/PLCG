/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(var_10, (((arr_0 [i_0]) ? (max((arr_1 [i_0]), 4294967295)) : (17880074228145744485 || 255)))));
        var_11 -= 3737386353;
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_12 = 566669845563807131;
        var_13 = (((((-var_0 | ((max((arr_1 [18]), 0)))))) ? (min(((max((arr_1 [8]), 1804741605))), (~751203407))) : (((9480 ? 63 : 1804741605)))));
        var_14 = (arr_3 [i_1] [i_1]);
    }
    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = 4294967291;
        arr_10 [i_2 + 1] = (~-var_10);
    }
    #pragma endscop
}
