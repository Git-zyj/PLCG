/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = (arr_0 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 = (0 / var_2);
                            arr_10 [i_0] [i_0] [i_2] = var_1;
                            var_13 = var_1;
                            var_14 = ((~(arr_8 [i_0] [i_2] [i_0] [i_3])));
                        }
                    }
                }
                var_15 = (min(var_15, ((((arr_4 [i_0] [i_1] [11]) * (min(((1 ? (arr_1 [i_1]) : (arr_0 [i_1] [i_1]))), (((arr_6 [i_0] [i_1]) ? (-2147483647 - 1) : var_5)))))))));
                var_16 = -1;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    arr_20 [i_4] = ((!(arr_16 [i_4 + 1] [2])));
                    arr_21 [i_4] [i_5] [i_6] [i_5] = (((min(11204767756786080774, (arr_9 [i_4 - 1] [i_5] [i_4 - 1] [i_4]))) == var_0));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                arr_28 [i_4 - 1] [i_5] = (((min((((arr_25 [2] [i_5] [i_6] [i_7] [i_8] [2]) ? 0 : var_9)), 1)) * (14 == 1)));
                                var_17 = (max((~var_8), ((min(-1, (arr_9 [i_4 + 1] [i_6] [6] [i_8]))))));
                            }
                        }
                    }
                    var_18 = ((254 ? -965770221 : 0));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        {
                            arr_40 [i_12] [i_9] [i_9] [i_9] = (min(((6636365441069927382 ^ (arr_33 [i_11 + 1] [i_11] [i_11 + 2]))), (arr_39 [i_11 + 1] [i_11] [i_11] [i_11])));
                            arr_41 [i_9] [i_9] [i_9] [i_9] = (min(16188, (min(0, (arr_29 [i_9])))));
                        }
                    }
                }
                arr_42 [i_9] [i_10] [i_10] = ((((arr_2 [i_9] [i_9]) ? ((var_9 ? (arr_35 [i_9] [i_9] [12]) : var_2)) : (arr_29 [i_9]))));
                arr_43 [i_9] = var_1;
            }
        }
    }
    var_19 = var_0;
    #pragma endscop
}
