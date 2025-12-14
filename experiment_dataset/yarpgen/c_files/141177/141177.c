/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_14 = ((((((~(arr_1 [i_0])))) ? (~var_0) : var_4)));
        var_15 = (max(((1 ? (~234) : (max(0, (arr_1 [i_0]))))), var_2));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_16 = (arr_4 [i_1] [i_1]);
        var_17 ^= (1811507845 && 2085338667);
        arr_5 [i_1] = ((1 ? (arr_3 [i_1]) : (~21092)));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        var_18 = -11;
        var_19 = var_12;
        var_20 = 250;
    }

    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_21 |= ((15390839555989941282 ? 82 : 32768));
        var_22 = ((~((114 ? -6 : (arr_1 [20])))));
        var_23 *= (~var_9);
    }
    var_24 = var_4;
    #pragma endscop
}
