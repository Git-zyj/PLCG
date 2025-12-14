/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_12 = (var_3 ? 2147483647 : var_7);
            var_13 = min(((((((((arr_0 [3]) <= (-127 - 1))))) <= ((31 ? var_4 : var_10))))), (min((arr_3 [i_0] [i_1]), (arr_3 [6] [i_1]))));
            arr_4 [i_1] [i_0] [i_1] = ((((-(-5582 ^ 553757832))) * ((min((arr_1 [i_1] [i_0]), var_9)))));
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_14 *= (34 ? 1240240798828309259 : 31);
                            arr_14 [2] [i_3] [i_0] [i_1] [i_0] = ((-(((arr_10 [6] [i_2 + 3] [i_4] [i_4]) ? (arr_0 [i_2 + 3]) : 178))));
                        }
                    }
                }
            }
        }
        var_15 = (((9223372036854775807 ? 23 : -2147483635)));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        arr_18 [i_5] = (max((((+(((arr_10 [i_5] [i_5] [i_5] [i_5]) + 21661))))), 10847864608183621248));
        arr_19 [i_5] = ((var_2 ? (((((max(var_2, var_0))) ? ((var_1 | (arr_17 [7] [i_5]))) : ((((arr_15 [i_5]) ? var_8 : 65535)))))) : ((var_0 * (arr_13 [i_5] [i_5] [i_5] [i_5])))));
        arr_20 [0] |= (((+-10536) ? 9223372036854775807 : (~1)));
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        var_16 = ((!((min((~98), (max(var_4, -5603)))))));
        arr_23 [2] &= ((!(((+(max((arr_13 [i_6] [21] [i_6] [i_6]), var_9)))))));
    }
    var_17 -= var_1;
    #pragma endscop
}
