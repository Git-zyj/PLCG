/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~34);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 -= ((var_2 ? 1 : var_0));
        var_15 = -20265;
        var_16 = (((arr_2 [i_0]) > var_8));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_17 = (((arr_5 [i_0] [i_1] [i_1]) * (arr_2 [i_1])));
            var_18 = (arr_4 [i_0]);
            arr_7 [i_1] = ((1048575 + ((7759692275224389221 ? (arr_6 [i_0] [i_1]) : 63))));
            arr_8 [i_1] = -4293918713;
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_19 = (((15 * 20695) - (arr_2 [i_0])));
            var_20 *= -8047451929875145821;
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_21 = (min(var_21, ((!((((arr_13 [i_3]) ? (((arr_11 [i_3]) ? var_5 : 18446744073709551611)) : var_11)))))));
        var_22 = (((max((((var_4 ? var_5 : -74))), (max(var_12, var_5)))) << (4447475268069415429 - 4447475268069415428)));
        var_23 = (max(var_23, ((((((var_0 / (arr_5 [i_3] [i_3] [i_3]))) <= ((max(-50, var_8)))))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_16 [i_4] [i_4] = (((arr_14 [i_4] [i_4]) ? (106 >= 7) : (max((arr_15 [i_4]), (arr_15 [i_4])))));
        var_24 = (min(((((arr_15 [i_4]) || 127))), 6));
        var_25 ^= (((((4294967280 ? -39 : 0))) ? (min((arr_14 [i_4] [i_4]), ((((-20693 + 2147483647) << (var_1 - 196)))))) : ((max((~var_6), (((18446744073709551611 ? 912202144 : -106))))))));
    }
    #pragma endscop
}
