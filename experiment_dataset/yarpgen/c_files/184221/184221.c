/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (max(var_16, (var_11 == var_2)));
        var_17 = (var_7 <= var_5);
        arr_3 [i_0] = ((-((((min(var_2, var_12))) ? var_6 : (~var_14)))));
        arr_4 [i_0] = var_6;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_18 = ((var_5 + 2147483647) >> ((var_8 >> (!var_13))));
        var_19 = (((~var_12) ? (min(var_1, var_2)) : (var_1 || var_8)));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_20 += ((-((max(var_7, var_14)))));
        arr_11 [i_2] = (((var_2 || var_5) <= -var_14));
        var_21 *= ((((min(var_14, var_14))) || ((min(var_6, var_1)))));
    }
    #pragma endscop
}
