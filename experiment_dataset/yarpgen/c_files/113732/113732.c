/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_13 > var_14) == var_2));
    var_19 &= (((~127) % var_0));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = var_5;
        var_21 = (max(var_14, 8191));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_5 [18] = ((((!(arr_4 [i_1])))));
        var_22 = var_14;
        var_23 = var_14;
        var_24 = (((arr_4 [i_1]) ? (~-96) : 8191));
        var_25 = ((+(((arr_4 [i_1]) ? (arr_4 [i_1]) : var_1))));
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        var_26 = var_6;
        var_27 = ((var_15 ? -22 : 237));
        var_28 = (12 ? ((var_17 ? 4271439208 : -1780918848)) : 2348769377);
        var_29 = ((~(~18446744073709551615)));
        arr_8 [i_2] = ((-(~1274162381)));
    }
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        arr_11 [i_3] = arr_2 [i_3];
        var_30 = ((var_1 ? var_10 : var_7));
        arr_12 [i_3] = ((!(((var_4 ? var_7 : (arr_9 [i_3 - 1]))))));
    }
    #pragma endscop
}
