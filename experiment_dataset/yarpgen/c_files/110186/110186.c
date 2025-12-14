/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (15 && (var_4 <= var_4));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((((((75 ? 1 : -583491372)))) & ((max(1, var_4)))));
        var_13 = min((max(1, 930361036)), (!1));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_14 = (min(var_14, (((-(max((~var_8), (((var_5 ? 1 : var_4))))))))));
        var_15 = (max(var_15, (((((((arr_6 [i_1] [i_1]) != 1))) >> (((var_6 & var_5) - 39423)))))));
        var_16 = (max(var_16, -20177));
        var_17 ^= -1617428288;
    }
    #pragma endscop
}
