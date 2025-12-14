/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = ((-85 ? -85 : -29763));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_16 = (min((((arr_0 [i_1 - 1]) ? (arr_7 [i_1] [i_1] [i_1] [i_1 + 1] [i_1]) : var_1)), (((arr_7 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [8]) ? var_9 : var_6))));

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_17 = var_10;
                            var_18 *= (arr_1 [i_1 + 1]);
                            var_19 = 255;
                        }
                        for (int i_5 = 1; i_5 < 14;i_5 += 1)
                        {
                            var_20 *= -85;
                            var_21 = (max((arr_6 [i_5 + 3] [i_5] [i_5]), (((!(arr_3 [i_5 + 1] [i_5 + 3] [i_1]))))));
                            arr_14 [i_1] [11] [i_1] [i_2] [i_3] [15] [i_5] = ((!((min(1, 26701)))));
                            var_22 = (max(var_22, var_3));
                        }
                        arr_15 [i_3] [i_3] [i_3] [i_1] [i_3] [i_3] = (~1467564785);
                        var_23 = (-84 ^ 2827402500);
                        var_24 &= ((~(((arr_13 [i_0] [i_1 + 1] [i_1 - 1] [11]) ? var_6 : (arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 1] [10])))));
                    }
                }
            }
        }
        var_25 = (arr_6 [i_0] [i_0] [i_0]);
        var_26 -= (((arr_5 [3] [i_0] [i_0] [i_0]) ? ((((max(var_1, (arr_10 [0] [i_0] [i_0] [11])))) ? (arr_1 [i_0]) : (arr_4 [17] [i_0] [17] [i_0]))) : (2827402500 || 83)));
    }
    #pragma endscop
}
