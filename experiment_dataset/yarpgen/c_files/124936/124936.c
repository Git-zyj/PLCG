/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_19 = var_12;
        var_20 = (min(var_20, ((min((arr_1 [i_0] [i_0 - 1]), (min(var_11, var_11)))))));
        var_21 = ((1 << (18446744073709551615 - 18446744073709551588)));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_22 = (min(var_22, -173272361));
        arr_6 [i_1] = (((arr_0 [i_1 - 2]) >> (4294967295 - 4294967274)));
        var_23 = 0;
        arr_7 [i_1] = (((arr_4 [i_1]) ? 65535 : (((!(arr_1 [i_1] [24]))))));
        var_24 = 6997715606267586256;
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_25 += ((var_13 ? 511 : -173272361));
        arr_10 [i_2] = ((128 ? (arr_4 [i_2 - 2]) : ((((-1 && (arr_1 [i_2] [i_2])))))));
        var_26 = (~65531);
    }
    var_27 = (max(var_27, (((((((var_11 ? var_13 : var_14)) ? var_6 : (min(var_1, var_8)))))))));
    #pragma endscop
}
