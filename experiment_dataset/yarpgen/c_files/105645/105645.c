/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    var_14 = 2395410822;

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [7] [i_0] = (min(var_12, (max(var_3, (arr_1 [i_0])))));
        arr_3 [i_0] = (!957818800);
        var_15 -= (max((~1899556478), (~var_12)));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_16 = ((~3250507005) ? (((~(var_5 ^ 52954)))) : (min((~0), var_11)));
        var_17 = (arr_5 [i_1]);
        var_18 = 12581;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] [i_2] = 1;
        var_19 *= ((((min(var_1, 1))) ? ((var_6 ? (max(var_7, var_5)) : -61485)) : (((max(59576, 56627))))));
    }
    #pragma endscop
}
