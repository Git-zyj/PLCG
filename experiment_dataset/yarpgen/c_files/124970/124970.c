/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (((var_3 == (!var_1))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_15 += (((arr_0 [i_0 + 1] [i_0 + 1]) * 0));
        arr_2 [i_0] = var_13;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_16 = var_0;
        arr_5 [i_1] = var_4;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_17 = ((-4673022376926839832 | (((1171256743129149146 ? (arr_7 [i_2]) : 16)))));
        var_18 = (max(var_18, ((((arr_6 [2] [i_2]) ? 255 : 78977082)))));
    }
    var_19 &= (var_5 <= var_11);
    #pragma endscop
}
