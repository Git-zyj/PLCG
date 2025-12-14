/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, 1));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = (((((1 ? (arr_0 [i_0] [i_0]) : var_4))) ? var_7 : ((10389487935718893430 ? var_5 : (arr_1 [i_0])))));
        var_17 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_18 = var_12;
        var_19 *= var_8;
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_20 = var_14;
        var_21 = -2181200336890308137;
    }
    #pragma endscop
}
