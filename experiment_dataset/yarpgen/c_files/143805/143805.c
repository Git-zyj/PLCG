/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0 + 2] = var_6;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_21 = ((!((((((arr_1 [8] [i_0]) || (arr_12 [i_3] [i_3] [8] [i_3]))) ? (((arr_5 [i_0 - 1] [i_1] [i_1]) ? var_5 : var_15)) : (!var_2))))));
                                var_22 = (max((arr_3 [i_1] [i_1] [6]), var_19));
                                arr_15 [i_4] [i_3] [i_3] [i_3] [10] [i_0 - 1] = ((((((max(16383, 16383))) << ((((min((arr_8 [i_0] [i_1] [i_2] [i_3]), (arr_0 [i_0])))) - 10583)))) & (arr_3 [i_0] [i_0] [i_0])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_22 [i_0] [i_0] [i_5] [i_0] = max(((max((!49171), 16383))), ((-((max((arr_17 [i_0] [i_0] [i_0]), var_4))))));
                            var_23 = (arr_13 [i_0] [i_1] [i_0] [i_6] [0]);
                            arr_23 [i_0] [9] [i_0] = (((49152 || var_14) / (min(var_17, (max((arr_19 [i_0] [i_0] [i_5] [i_6 - 1]), (arr_17 [i_0] [i_0] [i_0])))))));
                            var_24 = (min(var_24, 16383));

                            /* vectorizable */
                            for (int i_7 = 4; i_7 < 9;i_7 += 1)
                            {
                                arr_26 [i_6] [i_5] [i_1] [i_0] &= var_5;
                                arr_27 [i_0] [i_1] [i_5] [i_6] [i_7] = ((!(arr_20 [i_0] [i_0] [i_0] [i_5] [i_0] [i_7])));
                                arr_28 [i_0] [i_1 - 3] [10] [i_0] [i_7] = ((1 ? (arr_19 [i_7 - 1] [i_6 + 1] [i_0 + 2] [i_1 - 2]) : 26524856));
                            }
                        }
                    }
                }
                arr_29 [i_0] = var_12;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 14;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 15;i_9 += 1)
        {
            {
                var_25 *= (((arr_33 [6] [6]) ? 32763 : (~-1)));
                var_26 = (min(var_26, (arr_33 [i_8] [12])));
            }
        }
    }
    #pragma endscop
}
