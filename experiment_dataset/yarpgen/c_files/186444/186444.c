/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_11;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((var_1 ? var_1 : var_1));
        var_13 *= ((-((((arr_0 [i_0 - 1]) <= var_11)))));
        var_14 = (min(var_14, (((((min(0, (arr_3 [i_0 - 1] [i_0 - 1])))) ? var_1 : (((var_4 ? 4417 : var_9))))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_15 = (min(var_15, ((((61118 | 4417) ? (((-(arr_5 [i_1] [i_1])))) : var_2)))));
        var_16 = ((~((-(arr_6 [i_1])))));
        var_17 = ((-(arr_5 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_18 = (arr_2 [i_2]);
        arr_9 [i_2] = ((-(((var_8 && ((((arr_1 [i_2]) ? 255 : 65281))))))));
    }
    var_19 = ((var_7 ? ((((65285 && (31 != var_2))))) : var_1));
    var_20 = 255;
    #pragma endscop
}
