/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((max(var_2, (min(var_0, var_9))))) || ((!(var_2 || 12559))));
    var_12 = var_8;
    var_13 = var_1;

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_14 *= -10;
        var_15 *= (min((arr_1 [i_0 - 3]), ((max(1, 24797)))));
        var_16 = (((((1 ? (arr_1 [i_0 - 1]) : var_6))) && (15536305677980399552 + -701620713770831143)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_17 -= 1;
        arr_5 [0] |= (arr_3 [i_1]);
        var_18 -= 1339610848;
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = (((((var_0 < (arr_7 [i_2]))) || (arr_9 [i_2]))) ? 0 : (arr_7 [i_2]));
        arr_11 [i_2] &= (((arr_1 [i_2]) + (arr_7 [i_2])));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        var_19 = (min(var_19, -1));
        arr_16 [i_3] [i_3] = ((var_4 - (arr_13 [i_3] [i_3])));
        arr_17 [17] = var_3;
        var_20 = 54216;
    }
    #pragma endscop
}
