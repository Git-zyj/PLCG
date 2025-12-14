/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 1] = (((((((arr_1 [i_0]) + 2147483647)) >> (var_13 - 54994))) >> 0));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_15 = (((((var_2 | (arr_1 [i_0])))) ? -81 : var_14));
            var_16 ^= (var_7 & var_8);
            arr_6 [i_0] = (((arr_0 [i_0] [i_0 + 1]) < ((-5194904098716113544 ? 59 : 164))));
            arr_7 [i_0] [i_1] = 59;
        }
        arr_8 [i_0] [i_0] = ((113 & (arr_5 [i_0] [i_0] [i_0 + 3])));
        var_17 = -857194401398405002;
        var_18 += (((((var_5 ? 143 : var_10))) ? var_1 : (arr_5 [i_0 + 2] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_19 = (((((var_13 >> (var_3 - 3074750229)))) ? var_7 : (arr_10 [i_2])));
        var_20 = (var_12 > var_0);
        arr_11 [i_2] = var_1;
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_15 [i_3] [10] |= ((((arr_12 [i_3]) & 143)));
        var_21 = min(1122231781507715931, (max(4294967268, 857194401398405001)));
        var_22 = (((((-(arr_12 [i_3])))) % ((var_13 ? var_3 : ((14504 ? 5718845196195725056 : 113))))));
        arr_16 [i_3] [i_3] = var_9;
        var_23 = ((+(((arr_3 [i_3] [6]) * 55337))));
    }
    var_24 = (((((var_14 & var_5) ? ((min(var_5, 994227379))) : ((81 ? var_7 : 17132537391194336919)))) < ((((var_2 ? var_7 : var_12)) >> (((max(3747493141, 0)) - 3747493079))))));
    var_25 = (max(var_9, ((((max(var_2, var_10))) ? (~3859432568) : var_0))));
    var_26 = (min(var_26, var_1));
    #pragma endscop
}
