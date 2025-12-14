/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = ((max(-398687092, 2753036035146945403)));
                arr_6 [i_0] [i_0] = var_12;
            }
        }
    }
    var_21 = var_18;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_22 = var_8;
                                arr_19 [i_2] [i_4] [i_2] = ((-(var_4 - 2147483647)));
                                var_23 = var_10;
                                var_24 = ((var_9 <= (var_2 + 255)));
                                arr_20 [i_2] [i_2] [i_4] [i_5] [i_4] = (((arr_3 [i_2]) < (((arr_2 [i_2]) % (arr_8 [i_3])))));
                            }
                        }
                    }
                    var_25 = var_4;
                    arr_21 [i_4] [i_3] [i_2] = (arr_11 [i_2] [i_3] [8] [6]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    arr_26 [i_7] = 254;

                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        arr_29 [i_7] [i_7] = ((arr_11 [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 2]) ? (arr_23 [i_7 + 1] [i_7 + 1] [i_7 + 2]) : 61322);
                        var_26 = var_14;
                        arr_30 [i_9] [i_7] = ((((!(arr_28 [i_2] [i_7] [i_8] [i_9]))) ? -var_0 : var_17));
                        var_27 = (!var_2);
                    }
                }
            }
        }
    }
    var_28 = ((max((var_9 != var_4), (!1165027966))) ? (max(var_4, ((max(1, var_19))))) : var_10);
    #pragma endscop
}
