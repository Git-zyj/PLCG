/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_14 = (min(var_14, (~var_7)));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        var_15 = ((-15387353593019648022 ? ((var_5 ? (arr_10 [i_0]) : var_0)) : (3059390480689903594 > var_10)));

                        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_2] = var_4;
                            var_16 = (arr_10 [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_1] [i_1] [i_0] [i_0] [i_1] = (((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) == 17540));
                            var_17 = ((29329 ? (159 || -1883850740) : (((arr_4 [i_0] [i_0]) ? 13 : 368860998))));
                            arr_21 [i_0] [i_0] = ((97 ? (((((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]) == var_1)))) : ((var_1 | (arr_19 [i_5] [i_0] [i_0] [i_5] [i_5])))));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_2] [i_2] [i_2] [i_2] [i_6] [i_0] [i_0] = -1883850740;
                            arr_25 [i_0] [i_1] [i_2] [i_0] [i_0] [i_0] = (arr_23 [i_0] [i_0] [i_2] [i_3] [i_3] [i_6]);
                        }
                        arr_26 [i_0] [i_0] [i_0] [i_0] = -97;
                        var_18 = ((1 ? (arr_4 [i_0] [i_0]) : ((~(arr_1 [i_0])))));
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 1; i_8 < 18;i_8 += 1)
                        {
                            arr_33 [i_0] [i_0] [i_2] [i_2] [i_2] = (1883850739 ? (arr_18 [i_8 - 1] [i_0] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8]) : (1 / var_4));
                            var_19 = (max(var_19, (~3059390480689903594)));
                        }
                        arr_34 [i_7] [i_7] [i_0] [i_0] [i_7] [i_7] = (~-295278470);
                    }
                }
                arr_35 [i_0] = var_4;
            }
        }
    }
    #pragma endscop
}
