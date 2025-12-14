/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -var_3;

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_14 = var_10;
        arr_2 [i_0] = var_9;
        var_15 = (max(var_15, (~var_0)));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] |= ((!(arr_3 [i_1])));
        var_16 = (min(var_16, (((((32 << (15068794217419438106 - 15068794217419438090))) != (((arr_0 [i_1]) & -1)))))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_17 = (max(var_3, (!1)));
        var_18 = (min(var_18, (arr_7 [i_2] [i_2])));
    }
    #pragma endscop
}
