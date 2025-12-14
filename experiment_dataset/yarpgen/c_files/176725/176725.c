/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_3 % var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((-66 ? ((var_0 ? (arr_1 [i_1]) : (arr_1 [i_0]))) : var_7));

                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [i_1] [16] [i_4] [i_4] = var_16;
                                var_19 = 107;
                                var_20 *= arr_12 [6] [6] [i_2] [i_1] [i_4] [6];
                                var_21 = (max(var_21, ((((((((88 - (arr_3 [i_2 + 1])))) ? (4 > 64) : var_7)) == ((~((min((arr_2 [i_1]), (arr_5 [i_4])))))))))));
                            }
                        }
                    }
                    var_22 = (max(((((max(var_4, (arr_5 [i_2])))) + ((max(7, -101))))), (max(((-3 - (arr_1 [i_1]))), var_14))));
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_26 [i_7] [14] [16] [i_7] = (((arr_25 [i_7]) ? (arr_6 [i_5] [i_1] [i_5] [i_6]) : 17));
                                arr_27 [i_0] [i_1] [i_1] [i_7] [i_7] = ((~((max(38, -2)))));
                                arr_28 [i_0] [i_7] [i_0] [11] = min(-17, 26);
                            }
                        }
                    }
                }
                var_23 = (((((!-27) && 17)) ? ((var_13 ? var_13 : (var_9 == 2))) : (max(((91 >> (var_1 + 81))), var_11))));
            }
        }
    }
    #pragma endscop
}
