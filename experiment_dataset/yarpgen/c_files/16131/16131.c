/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_6 | ((var_1 ? var_13 : -var_3))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (((((2892993588 ? 149238280 : -15085))) ? ((((arr_2 [i_0 - 1]) <= var_13))) : var_0));
                arr_6 [6] [i_1] [i_1 + 2] = arr_1 [9];

                /* vectorizable */
                for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    var_21 = var_18;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_22 = ((var_10 | (arr_11 [i_1 + 2] [i_1 + 2] [i_1] [i_1 - 2] [i_1 + 1] [i_1])));
                                arr_13 [i_4] [i_4] [i_2] [i_1] [i_0] [i_4] [i_0] = ((var_10 / (arr_10 [i_1 + 1] [i_2 - 1] [i_4 - 1] [i_4 - 1])));
                                arr_14 [i_4] [i_4] [i_4] [i_1] [i_0 - 1] = ((-((-(arr_10 [i_0] [i_0 - 2] [i_2] [i_3])))));
                                var_23 = (!var_9);
                                var_24 = ((!(arr_11 [i_0 - 4] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1 - 3] [i_3])));
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_26 [i_5] [i_6] [i_5] = ((var_16 ? ((~(arr_7 [i_0]))) : (((((149238280 ? var_0 : 255))) ? (arr_11 [i_0 - 4] [i_0 - 4] [i_0] [i_0 - 4] [i_0] [i_0]) : 149238280))));
                                var_25 *= var_3;
                            }
                        }
                    }
                    var_26 += var_15;
                    var_27 = -var_17;
                }
            }
        }
    }
    var_28 = ((((((var_8 && var_4) ? ((var_2 ? var_13 : var_15)) : (0 || var_12)))) ? (max((!var_3), var_18)) : ((max(var_1, var_8)))));
    #pragma endscop
}
