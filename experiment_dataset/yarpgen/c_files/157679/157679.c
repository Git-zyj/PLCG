/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((-38 ? 4488 : var_13)))));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_15 *= var_13;
        arr_4 [i_0] [i_0] = (((-1 & 1) * -34));
        arr_5 [i_0] = (((arr_3 [i_0]) ? ((max(var_11, var_0))) : (max(var_9, (((arr_0 [i_0]) * (arr_0 [i_0])))))));

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            arr_9 [i_1] = (max(((1 ? var_2 : ((1 ? 65535 : 2047)))), (arr_0 [i_0])));
            var_16 *= (max((arr_2 [i_0]), ((((((-1 + 2147483647) << (4095 - 4095)))) ? ((min(-17461, var_8))) : 2265))));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            arr_12 [i_2] = var_4;
            arr_13 [i_0] = (2041 <= -85);
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {
            var_17 ^= (-1 >= 11);
            var_18 = 0;
            var_19 *= (((var_7 | (arr_0 [i_0 + 1]))));
        }
    }
    var_20 = ((~((~((13461 ? -106 : var_7))))));
    #pragma endscop
}
