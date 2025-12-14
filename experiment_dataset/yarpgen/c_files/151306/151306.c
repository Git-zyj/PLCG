/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((var_6 - var_8) + (((21254 ? var_9 : 230)))))) ? ((((-92 ? var_0 : -6786553219065415677)) - (var_6 + 21254))) : var_2));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_14 = (min(var_14, (((((max((arr_0 [i_0 + 1]), (((arr_1 [i_0 + 1] [i_0]) ? (arr_0 [i_0]) : 103))))) ? var_10 : (arr_2 [i_0] [i_0]))))));
        var_15 = (max(var_15, (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 = (max(var_16, (arr_3 [i_1])));
        var_17 *= ((2147483625 ? (((arr_6 [i_1] [i_1]) | (arr_5 [i_1] [i_1]))) : var_3));
        var_18 = (((max((arr_5 [i_1] [i_1]), var_1)) | var_0));
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_19 ^= 30;
        var_20 = (min(var_20, (((((((arr_8 [i_2] [20]) + 230))) ? (((arr_8 [i_2] [16]) | var_1)) : 2147483625)))));
        arr_9 [i_2] = 2;
        arr_10 [i_2] [i_2] = ((((((arr_7 [i_2] [i_2]) ? (arr_7 [i_2] [i_2]) : (arr_7 [i_2] [i_2])))) ? (((((arr_7 [i_2] [i_2]) + 2147483647)) >> ((((max(0, -83))) - 65424)))) : (((max(var_0, var_3))))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = (2147483614 >= 1);

        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_16 [i_3] [i_3] [i_3] = var_11;
            var_21 = (min(var_21, var_10));
        }
    }
    var_22 = var_8;
    #pragma endscop
}
