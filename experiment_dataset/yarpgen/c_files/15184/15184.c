/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = min((((var_12 - 255) << (var_6 > var_4))), ((min(-17, var_6))));
        arr_3 [i_0] &= ((~(((((-8 ? var_0 : var_2))) ? ((var_2 ? var_10 : 233)) : ((8796093020160 ? var_8 : 128))))));
        var_13 |= ((~(((var_11 >= (arr_0 [i_0] [i_0]))))));
        arr_4 [i_0] = ((~(((arr_1 [i_0]) & (arr_1 [i_0])))));
        var_14 ^= var_10;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = (((((arr_0 [i_1] [i_1]) ? var_12 : 15)) * (((((min(1, 4294967295))) ? 4241081242 : -var_9)))));
        var_15 = ((((arr_6 [7]) ? 1 : 63)) << ((((33554431 ? 128 : 9223372036854775807)) - 122)));
    }
    var_16 = (min(var_16, (((((((var_5 + 4294967295) ? var_7 : -var_2))) ? (((-809 - (-2147483647 - 1)))) : var_3)))));
    #pragma endscop
}
