/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_11 = var_4;
        arr_2 [i_0] = var_7;
    }
    var_12 = ((((max(((max(var_10, var_10))), var_0))) % (76 ^ -var_1)));
    var_13 = var_9;
    var_14 = ((((min(var_5, -46))) ? ((76 >> (var_4 - 47271))) : (max(((max(var_1, var_2))), (~var_2)))));
    #pragma endscop
}
