/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_5, -67));
    var_17 = (((((var_9 ? (max(var_10, var_9)) : var_14))) ? (((var_10 > (min(var_10, var_12))))) : -var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 |= var_2;
                            arr_10 [i_3] = ((-var_11 ? ((min((arr_8 [i_0] [i_3] [i_2 - 2] [i_3] [i_3] [i_1 - 1]), ((-(arr_0 [i_0])))))) : ((var_12 ? ((var_14 ? var_2 : var_11)) : (min(-67, var_11))))));
                            var_19 = var_5;

                            for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                            {
                                arr_14 [i_3] = (arr_8 [i_0] [1] [i_2] [17] [i_3] [i_2 - 1]);
                                var_20 = (arr_7 [i_2 + 3] [i_2 - 1] [i_4] [i_4]);
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                            {
                                var_21 = (min(var_21, 1));
                                arr_19 [i_0] [i_0] [i_3] [i_5] |= 0;
                                var_22 = ((var_4 ? (arr_16 [i_1 - 1] [i_1 - 1] [i_2 - 1] [i_3]) : (arr_9 [i_3] [i_1 - 1])));
                                var_23 = ((var_15 ? -var_14 : (arr_7 [i_1 - 1] [11] [9] [i_0])));
                                var_24 = var_0;
                            }
                        }
                    }
                }
                var_25 = (((arr_18 [i_0] [i_0]) ? (max(-1, -60)) : (((-(min(var_0, (arr_5 [i_1] [i_1] [5]))))))));
                var_26 = ((~(min(-var_14, var_12))));
                var_27 = ((((((max(var_1, 562948879679488))) && (1 - var_10))) ? var_14 : (((-78 ? 2059975476 : 8191)))));
                var_28 = (min(var_28, (((~((((max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]), (arr_0 [i_0])))) ? var_9 : var_0)))))));
            }
        }
    }
    var_29 &= ((var_9 ? (~var_8) : var_11));
    #pragma endscop
}
