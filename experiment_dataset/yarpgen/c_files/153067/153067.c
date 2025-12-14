/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = var_13;
                var_16 = (arr_3 [15]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_0] [i_1 + 1] [i_0] [i_0] = (((-46 ? (arr_3 [17]) : (arr_7 [i_0] [i_0] [i_0] [i_0]))));
                            arr_11 [i_0] [i_1] [i_1] [i_0] [i_2] [i_2] = var_14;
                            var_17 = (((((~((var_2 ? (arr_4 [15]) : var_11))))) != (max(((var_4 ? var_10 : (arr_6 [7]))), ((~(arr_6 [i_2])))))));
                        }
                    }
                }
            }
        }
    }
    var_18 = var_13;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            {
                var_19 = (max(var_19, (arr_1 [i_4])));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_25 [i_4] [i_4] [i_5] [i_6] [0] [i_7] = var_12;
                            var_20 = (!var_12);
                            arr_26 [i_4] [i_4] [i_6] [i_7] = (arr_8 [i_7] [i_4] [i_4] [i_5] [i_4] [i_4]);
                            arr_27 [i_4] [i_4] [i_4] [7] = ((11 > (((((arr_24 [i_4] [i_4] [i_5] [i_6] [i_7]) ? (arr_14 [i_4] [i_4]) : (arr_18 [i_7])))))));
                            var_21 = (var_2 > 48987);
                        }
                    }
                }
                arr_28 [i_4] [i_4] = var_6;
                var_22 = ((-(arr_7 [i_4] [i_4] [i_4] [i_4])));
                var_23 = (min((max(-14620617901859053763, (((var_9 ? var_12 : 45))))), ((min(((var_0 ? var_0 : (arr_23 [7] [7] [7] [i_5] [7]))), var_1)))));
            }
        }
    }
    #pragma endscop
}
