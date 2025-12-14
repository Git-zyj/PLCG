/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((max(var_3, var_9)) | ((var_2 ? var_6 : var_2)))) == (var_1 <= var_3)));
    var_11 = (~var_0);
    var_12 = (max((((var_0 <= (~var_7)))), var_1));
    var_13 = 65535;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = ((var_5 ? ((var_5 >> (var_0 - 51378))) : (var_8 / var_3)));
        var_15 = ((var_0 ? (((~((var_3 ? var_2 : var_8))))) : (((max(var_9, var_7)) << ((((var_0 ? var_4 : var_1)) - 7172540987933956915))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_4 [i_1] [11] = (((var_7 ? var_6 : var_3)));
        var_16 = ((-((var_9 ? (var_1 % var_8) : var_1))));
        var_17 &= (((21 != -7255) ^ (var_2 / var_5)));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_18 = var_4;
        var_19 = ((~((~(var_2 <= var_6)))));
    }
    #pragma endscop
}
