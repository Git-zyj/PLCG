/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (((min(-5634915003071601579, (((32358 ? 1005887849 : -27628))))) <= ((min((min(-1196083809, 31223)), ((var_3 ? var_4 : 2628)))))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((18446744073709551615 * (5535662186835688414 == 63)));
        arr_3 [i_0 + 3] &= (min(-9120, (min((arr_1 [i_0 + 2]), var_14))));
        var_17 = (((16 && -32240) ? 4160749568 : ((max((arr_1 [i_0 + 2]), var_11)))));
    }

    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_18 *= ((23163 ? (min(var_14, (((arr_1 [i_1]) ? 9223372036854775807 : var_15)))) : ((-32240 ? (~63) : ((~(-9223372036854775807 - 1)))))));
        arr_6 [2] [i_1 - 1] = ((((((min(var_3, 218))) ? (min(-8601834721876445487, (arr_0 [i_1]))) : var_10))) | ((min(var_15, 127))));
        var_19 = (((arr_1 [i_1]) > ((min((1 >= 253), 1655)))));
        arr_7 [i_1] = (arr_4 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            arr_15 [i_2] [14] [i_3] = ((123 ? (arr_8 [13] [i_3 - 1]) : (arr_13 [i_3 + 2] [i_3 + 2])));
            arr_16 [i_3] [i_3] = 32239;
            var_20 += (((arr_1 [i_3 + 2]) != (arr_1 [i_3 + 2])));
        }
        arr_17 [i_2] = -1;
    }
    var_21 = (min(1, -4));
    var_22 = (!-12126);
    #pragma endscop
}
