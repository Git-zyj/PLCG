/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (min(((35736 ? ((((arr_4 [i_1]) + 1610612736))) : ((var_3 * (arr_1 [i_0] [i_0]))))), (arr_1 [i_0] [i_1])));
                var_16 = var_12;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_17 -= max((((arr_15 [2] [i_3] [i_4] [4]) ? var_1 : (arr_15 [i_2] [i_3 + 1] [i_6 - 1] [2]))), ((~(arr_8 [i_5]))));
                                arr_18 [i_5] [i_5] [i_4] [i_3] [i_5] [i_5] = (((((((min((arr_9 [i_4] [i_4] [i_6]), 81))) ? (arr_16 [i_2]) : var_7))) ^ (min((arr_5 [i_6 - 2] [i_6 - 1]), (0 & 3450494848657234668)))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_18 = (var_13 ? (arr_9 [i_3 - 1] [i_3 - 1] [19]) : (min((arr_20 [i_3 - 1] [i_3]), (arr_9 [i_3 - 1] [i_9] [i_3]))));
                                arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] [i_7] = 29821;
                                var_19 = ((!(arr_17 [i_7] [i_3 - 1])));
                            }
                        }
                    }
                }
                var_20 -= 1;
            }
        }
    }
    var_21 = var_7;
    #pragma endscop
}
