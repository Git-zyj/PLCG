/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((max(var_10, var_8))) ? var_4 : (var_8 ^ var_5)))) ? var_4 : var_3));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, var_10));
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] = ((((var_2 << (((arr_9 [i_0] [i_0 - 2] [i_2] [i_4 - 4] [i_4] [i_4]) + 28670)))) | ((((arr_7 [i_4] [i_4] [i_4 - 1] [i_4] [i_4 + 1]) >> (((arr_9 [i_0] [i_0 - 2] [i_1] [i_4 - 2] [i_4] [i_4]) + 28631)))))));
                            }
                        }
                    }
                    arr_12 [i_0] [i_0] = ((var_1 + ((((arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 1]) ? var_8 : var_11)))));
                    var_14 = (((~var_4) ? (arr_9 [i_0] [i_2] [i_1] [i_1] [i_1] [i_0]) : (((~var_1) ? var_3 : var_1))));
                    var_15 = (max(var_15, ((max((((~((var_10 ? (arr_0 [i_0] [i_1]) : var_10))))), (arr_4 [i_2] [i_0]))))));
                }
            }
        }
    }

    for (int i_5 = 3; i_5 < 10;i_5 += 1)
    {
        var_16 -= (((arr_13 [i_5] [i_5]) > 2540362251525580421));
        arr_15 [i_5] = (max(((max((4943431579372646968 < 453355901), (-2147483647 | -458079917)))), (((453355901 ? 5771098962133984736 : -453355876)))));
    }
    #pragma endscop
}
