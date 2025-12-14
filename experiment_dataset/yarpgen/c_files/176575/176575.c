/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_18 = (arr_1 [i_0 - 2] [11]);
        var_19 = (max(var_19, 1));
        var_20 += -24034;
        arr_2 [i_0] |= ((-22446 ? ((-(arr_0 [i_0]))) : 229));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_21 -= -var_9;
        var_22 = ((-(arr_3 [i_1])));
        var_23 = ((arr_0 [i_1]) * 3364017733);
        var_24 = (min(var_24, ((((((arr_5 [i_1] [i_1]) ^ 887088167)) & (~1))))));
        arr_6 [i_1] [i_1] = ((0 && (251 & 1)));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_25 = -2;
        var_26 = (min(var_26, (((((((164 * var_5) ? (arr_9 [i_2]) : var_1))) ? (min(var_5, (arr_1 [i_2] [i_2]))) : ((((((var_6 / (arr_3 [11])))) ? var_4 : ((var_15 ? (arr_7 [i_2] [3]) : 0))))))))));
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 13;i_3 += 1)
    {
        var_27 |= (arr_1 [i_3 - 4] [i_3 - 3]);
        var_28 = var_3;
        var_29 = (min(var_29, (((((((arr_11 [1]) ? -28764 : var_13))) ? 316527514 : (arr_4 [i_3]))))));
    }
    #pragma endscop
}
