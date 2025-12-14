/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                var_16 *= (min((max((max((arr_11 [i_0] [i_0] [i_2]), 9223372036854775807)), ((((arr_2 [11] [11]) ? (arr_5 [i_0] [i_0] [12]) : var_8))))), (58185 != -9223372036854775807)));
                                arr_13 [i_4] [i_2] [i_2] [i_0] = ((((((arr_9 [i_0] [i_2] [i_1] [7] [i_2 + 3]) ? (arr_9 [1] [i_2] [i_0] [i_0] [i_2 + 3]) : var_7))) ? (((var_9 == 2147483647) ? var_6 : var_8)) : 131));
                            }
                            arr_14 [i_0] [i_1 - 2] [i_2] [i_3] = (((((var_7 ? (arr_7 [i_2]) : (arr_7 [i_2])))) ? ((818866863 ? 131 : 37392469)) : var_7));
                            var_17 = 19544;
                        }
                    }
                }
                var_18 = (max((arr_2 [i_0] [i_0]), (max(((max((arr_0 [i_0]), var_0))), ((var_15 ? (arr_4 [i_1] [i_0] [i_0]) : 4019185900))))));
            }
        }
    }
    var_19 = var_0;

    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        arr_18 [0] = ((((min((arr_16 [i_5]), (max((arr_15 [i_5]), 1693078432467140292))))) && var_1));
        arr_19 [i_5] = (((arr_15 [i_5 + 1]) * ((((arr_17 [i_5 + 2]) >= (arr_17 [i_5 + 2]))))));
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_20 += (min((((((64 << (13189732163638520000 - 13189732163638519986))) != ((var_9 ? 58183 : 124))))), (max(((-1565297820 ? -75 : 2800359678)), (var_14 * var_9)))));
        arr_22 [i_6] = ((((-127 - 1) >= -24860)));
    }
    for (int i_7 = 1; i_7 < 23;i_7 += 1)
    {
        var_21 = (max(var_3, (((arr_24 [i_7]) ? (max((arr_25 [i_7] [i_7]), 9007199254708224)) : (((min((arr_24 [i_7]), 250))))))));
        arr_27 [0] = (((((var_12 >= (arr_23 [i_7 + 2] [i_7])))) << (((((arr_23 [i_7 - 1] [i_7]) ? var_15 : (arr_23 [i_7 + 2] [i_7]))) - 49))));
    }
    #pragma endscop
}
