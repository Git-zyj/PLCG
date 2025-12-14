/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 = 1793658860742371542;
                                var_16 = (arr_5 [11] [i_3 - 1] [i_4]);
                                arr_18 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3 + 3] [12] = max((max(-18446744073709551615, (((-(arr_17 [i_0] [i_1] [i_2] [i_3] [i_4])))))), ((min(var_12, 34287))));
                                arr_19 [i_0] [i_1 + 1] [i_2] [i_1 + 1] [i_0] = ((-(arr_6 [i_0] [i_1])));
                            }
                        }
                    }
                    arr_20 [i_2] [i_1 + 1] [i_0] = (((arr_13 [i_0] [i_1] [i_1] [11] [i_1]) ? (((((arr_8 [i_1] [9]) && (((var_8 ? (arr_11 [i_2] [12] [i_1 - 1] [i_1 - 1] [i_0] [i_0]) : 7059))))))) : (arr_0 [i_2])));
                }
            }
        }
    }
    var_17 = var_14;
    var_18 = (min(var_18, ((-6 ? (((((-8 ? 2317355917 : var_11))))) : 5502549439281057770))));
    #pragma endscop
}
