/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(((var_13 || ((max(18446744073709551615, var_9))))))));
    var_19 |= var_1;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = 18446744073709551610;
        arr_4 [i_0] = var_1;
        var_21 = arr_0 [i_0] [i_0];
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] = var_6;
        arr_8 [i_1] = ((max(-102, (arr_5 [i_1]))) | (max(var_16, (((arr_5 [i_1]) >> (var_13 - 56))))));
    }
    #pragma endscop
}
