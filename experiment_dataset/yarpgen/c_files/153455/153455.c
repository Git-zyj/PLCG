/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((var_2 & var_0) ? var_9 : 1))) && 254));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = var_6;
        arr_2 [i_0] = var_9;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (((5 >> (-82 + 86))));
        var_16 = ((-935661853 ? 620727230 : 524256));
        arr_6 [i_1] [i_1] = 250;
        arr_7 [i_1] = 4;
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] [i_2] = (min(((-42320 - ((4 ? -1 : 16196298250325697798)))), -2040));
        var_17 = (((((~-2154) * (max(var_1, var_11)))) % ((((min(var_5, 2991069403)))))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] [i_3] = (107 < var_7);
        var_18 = ((((var_10 << (((var_2 - 49152) - 15423407892839688871)))) < (max((max(-524247, var_5)), -2003815786))));
    }
    #pragma endscop
}
