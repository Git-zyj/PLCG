/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(var_3, 65535);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = (((var_11 % 63) != (((var_8 - (arr_0 [i_0]))))));
        arr_2 [i_0] [i_0] = (min(0, 65535));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_19 = var_8;
        var_20 = (arr_4 [i_1] [i_1]);
        arr_5 [i_1] = (arr_0 [i_1]);
    }
    var_21 &= (var_10 + var_1);
    var_22 = (max((((var_13 ? 6 : -64))), ((var_7 ? ((var_8 ? var_7 : 1)) : var_10))));
    #pragma endscop
}
