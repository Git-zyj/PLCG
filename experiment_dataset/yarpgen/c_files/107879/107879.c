/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] = (min(45097, (((-(arr_1 [i_0 - 2] [i_1]))))));
                arr_8 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
                var_19 = ((((arr_6 [i_0 - 1] [i_0 + 2] [i_0 + 2]) == (!var_6))) ? ((((!((((arr_5 [i_0] [i_1]) ? 53128 : 4724005058904120795))))))) : 20);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_20 = 6211048431904817348;
                            arr_14 [i_0] [i_1] [6] [6] = ((-(((-848742570115070413 <= -5606564465901290712) + (arr_6 [i_0] [i_0] [i_0 + 2])))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    var_21 = (min(var_21, (!-var_14)));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                arr_28 [i_8] [i_4] [9] [i_4] = (arr_23 [i_4] [i_4] [i_5] [i_6] [i_7] [i_8]);
                                arr_29 [i_4] [i_4] [i_4] [i_4] [i_4] = var_13;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 24;i_10 += 1)
                        {
                            {
                                arr_36 [i_6] = ((49560 && (((((-5606564465901290686 > (arr_23 [i_4] [i_5] [i_6] [1] [10] [i_4]))) ? ((max(var_1, 25085))) : ((var_18 ? 0 : var_1)))))));
                                arr_37 [i_4] [i_4] [i_4] [i_9 + 1] [i_10] = ((!(arr_17 [i_9 + 1])));
                                arr_38 [i_4] [21] [i_4] [i_4] [i_4] = var_17;
                            }
                        }
                    }
                    var_22 = (((((39392 ? (arr_18 [i_6]) : (arr_26 [i_4] [i_4] [i_5] [i_5] [i_6]))) * (arr_26 [i_4] [i_5] [i_6] [i_5] [i_6]))) * (((~((min((arr_24 [i_4] [i_5] [i_5] [i_5]), (arr_27 [i_4] [i_4] [16] [i_4]))))))));
                }
            }
        }
    }
    var_23 &= var_12;
    #pragma endscop
}
