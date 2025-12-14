/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_7));
    var_18 = var_14;
    var_19 = (var_14 - var_12);

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = ((!127) ? ((32060 ? (arr_1 [i_0]) : (arr_1 [i_0]))) : var_2);
        arr_3 [i_0 + 1] = var_4;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = var_11;
        var_20 = ((!(~var_2)));
        arr_7 [i_1] = 71;
        var_21 = ((var_11 + ((((184 ^ (arr_4 [i_1])))))));
        var_22 = (((71 < var_13) & (((~192) & (arr_5 [i_1])))));
    }
    #pragma endscop
}
