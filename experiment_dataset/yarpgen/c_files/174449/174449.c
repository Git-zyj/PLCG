/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = (((((arr_0 [i_0]) > (arr_1 [i_0]))) ? ((-(var_9 - var_13))) : (arr_0 [i_0])));
        arr_3 [i_0] = ((~((~(arr_0 [i_0])))));

        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_19 = ((-98 != (~2269814212194729984)));
                            arr_13 [i_3] [2] [i_3] [2] [i_3] [11] = ((!(((var_6 | (arr_4 [i_3] [i_3 - 1]))))));
                            arr_14 [i_0] [i_1] [i_3] [i_3 + 3] [i_4] = ((!(((((var_0 != (arr_0 [12]))))))));
                        }
                    }
                }
            }
            var_20 += ((((min(34, 32767))) ? (!-33) : (arr_11 [i_0] [i_0] [i_0] [5] [i_0] [i_1])));
            arr_15 [i_0] [i_0] [i_0] = (((((((max(var_5, (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (arr_0 [i_1 - 1]) : (var_11 <= var_16)))) ? ((((~var_4) << (((~var_1) + 4921123215662620668))))) : (min(var_5, (arr_7 [14] [i_1 + 1] [14])))));
            var_21 = ((+((((var_6 ? (arr_6 [9] [i_1]) : var_4)) << (((((arr_4 [3] [i_0]) ? var_0 : var_11)) - 11664207578572784752))))));
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_22 |= ((-(1 - 1)));
            arr_18 [i_0] [i_5] [i_5] = (i_5 % 2 == zero) ? ((max(((((((var_12 + 2147483647) >> (var_15 - 52111)))) ? (((arr_7 [i_0] [i_0] [i_5]) << (((arr_17 [i_0] [i_5]) - 16790)))) : ((((arr_5 [i_0] [i_0] [i_0]) ? (arr_0 [i_0]) : var_11))))), ((((((-(arr_5 [1] [i_5] [i_0])))) ? (max(var_1, var_8)) : var_4)))))) : ((max(((((((var_12 + 2147483647) >> (var_15 - 52111)))) ? (((arr_7 [i_0] [i_0] [i_5]) << (((((arr_17 [i_0] [i_5]) - 16790)) - 9320)))) : ((((arr_5 [i_0] [i_0] [i_0]) ? (arr_0 [i_0]) : var_11))))), ((((((-(arr_5 [1] [i_5] [i_0])))) ? (max(var_1, var_8)) : var_4))))));
            var_23 = (min(var_23, ((((-(arr_2 [i_0])))))));
        }
    }
    var_24 = ((((-17227 ? 1 : -20680))));
    var_25 = (((-16384 + 2147483647) << (1 - 1)));
    var_26 *= (min((((18446744073709551615 ? -4676 : 1))), var_13));
    #pragma endscop
}
