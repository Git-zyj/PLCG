/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = ((var_1 & (132 && 8497861610277658938)));
                var_18 = (min((((((148 ? (arr_2 [i_1]) : (arr_2 [i_0 + 1])))) ? ((9116070161302557609 ? (arr_2 [10]) : var_2)) : (!var_0))), ((((arr_1 [i_0]) == var_0)))));

                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 = (((136 ? ((var_1 * (arr_12 [i_0] [i_1] [i_1] [7] [i_1] [i_4] [i_4])) : (arr_12 [6] [6] [i_2] [i_2] [i_2] [6] [i_2 - 3])))));
                                var_20 = (1182495063 ? 88 : 11);
                            }
                        }
                    }
                    var_21 = (((((arr_6 [i_0] [i_1] [i_0]) - var_7))));
                    arr_14 [i_0] [i_0] = (-66 > 48049);
                    var_22 = (arr_5 [i_0] [i_0] [i_2 + 1]);
                }
                var_23 = ((-6512137649726102024 ? 17470740197091866396 : -66));
            }
        }
    }
    var_24 = -81;
    #pragma endscop
}
