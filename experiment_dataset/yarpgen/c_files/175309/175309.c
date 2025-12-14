/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = ((!((max(((max(var_14, var_5))), ((var_7 ? 576544225 : 142)))))));
                arr_7 [1] |= (((min(2188239509422362479, ((var_8 ? var_2 : var_7)))) == var_4));
            }
        }
    }
    var_21 = (((32765 >> (16258504564287189136 - 16258504564287189131))));
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_22 = (max((max(var_12, (var_5 / var_5))), 18813));
                    var_23 = (576544234 - 2188239509422362479);
                    var_24 *= (max((4294967295 != -22392), var_14));

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_20 [i_5] [i_4] = var_12;
                        var_25 = ((var_4 - var_11) - var_5);
                    }
                    for (int i_6 = 3; i_6 < 19;i_6 += 1)
                    {
                        arr_24 [6] [i_6] [3] [i_6] [i_6] [17] = ((var_12 != (min((min(var_9, var_2)), (~63718)))));
                        arr_25 [i_6] [i_4] [18] [i_6] = 16258504564287189149;
                    }
                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        arr_30 [i_7] [i_3] = (((max(((var_17 ? -10578 : -13031)), var_12)) % ((max(var_18, var_14)))));
                        var_26 *= ((min((var_18 & var_13), ((var_9 ? var_4 : var_11)))));
                        var_27 = (max(10028, 1730));
                    }
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        var_28 = ((~(max((((-10578 + 2147483647) << (((var_16 + 306375520) - 24)))), (~var_4)))));
                        var_29 = (max(var_29, ((((((min(-10029, var_5)))) ? ((-var_1 - ((var_3 ? 0 : var_15)))) : var_14)))));
                        var_30 = (max(var_30, (((min(576544225, var_0))))));
                    }
                }
            }
        }
    }
    var_31 = var_19;
    var_32 = (max(var_32, ((((var_14 && var_19) ? (max((var_13 & 12092654108197622766), var_18)) : var_8)))));
    #pragma endscop
}
