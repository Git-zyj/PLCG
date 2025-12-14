/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_7 [0] &= var_4;
            var_14 = 0;

            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                var_15 = ((((var_10 + var_12) >= (max(0, var_13)))));
                var_16 &= ((-(-76 || var_5)));
            }
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                var_17 = (min(var_17, ((((arr_3 [i_0]) / (((((((arr_2 [i_1]) - var_0))) || (var_3 & var_12)))))))));
                var_18 = (i_1 % 2 == zero) ? (((var_0 >> ((((((-(arr_5 [i_1] [i_1] [i_3]))) / ((max(-15, var_0))))) - 942961685))))) : (((var_0 >> ((((((((-(arr_5 [i_1] [i_1] [i_3]))) / ((max(-15, var_0))))) - 942961685)) - 2685949495)))));
            }
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_19 = ((((arr_1 [i_4] [i_4]) >> (var_12 - 1066852218169511277))));
            var_20 = ((-147243068 / -195174987) * (var_1 * 18446744073709551615));
        }
        var_21 = ((((max((var_5 ^ 18446744073709551594), (arr_1 [i_0] [i_0])))) ? (var_13 ^ var_7) : (max(var_10, var_2))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_22 = (i_5 % 2 == zero) ? (((var_3 && (((var_5 << (((((arr_17 [i_5]) + 13624)) - 29)))))))) : (((var_3 && (((var_5 << (((((((arr_17 [i_5]) + 13624)) - 29)) - 36755))))))));
        var_23 ^= var_13;
        var_24 = ((var_5 ? (arr_5 [i_5] [i_5] [i_5]) : ((((arr_15 [i_5]) + (arr_14 [i_5] [i_5] [i_5]))))));
        var_25 = ((((arr_4 [i_5] [i_5] [i_5]) != var_13)) ? (arr_1 [i_5] [i_5]) : (var_12 ^ var_4));
    }
    var_26 = (max(var_26, (((15 >= 14) || ((min(var_2, 0)))))));
    #pragma endscop
}
