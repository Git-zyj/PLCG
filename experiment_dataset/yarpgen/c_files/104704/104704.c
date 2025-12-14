/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_20 ^= (~0);
                arr_6 [i_1] = (!var_19);
                arr_7 [i_0] [i_0] [i_1] = ((!(arr_2 [i_0])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                {
                    var_21 = (max(var_21, (~0)));
                    var_22 = ((~(arr_9 [i_2 + 3])));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_23 = var_3;

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_20 [10] [i_2] [i_2] [i_2] [i_2] = (arr_10 [i_6]);
                            var_24 += var_7;
                            var_25 = ((!((!(arr_15 [i_6] [i_5] [i_3 - 1] [i_2])))));
                            var_26 = (min(var_26, (~185)));
                        }
                        for (int i_7 = 3; i_7 < 22;i_7 += 1)
                        {
                            var_27 -= ((-(arr_2 [i_3])));
                            var_28 = (max(var_28, var_13));
                        }
                        var_29 = (~83);
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_30 = (((-(~-19))));
                        arr_25 [i_8] [i_4 - 1] [i_8] = -71;
                        var_31 = 45;
                    }
                    for (int i_9 = 1; i_9 < 20;i_9 += 1)
                    {
                        var_32 = ((~(~-61)));
                        arr_28 [i_4] [i_3 - 1] [i_4] [i_9] = var_6;
                        var_33 = (arr_12 [i_2 + 2] [i_3 + 1] [i_4] [i_9 + 2]);

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            var_34 &= -var_16;
                            arr_32 [i_2] [i_3] [i_4] [i_9] [i_10] = ((-(!32767)));
                            var_35 = -var_16;
                            var_36 = (min(var_36, var_11));
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_37 = (~var_1);
                            var_38 = var_1;
                            var_39 = ((~((~(arr_13 [i_2 + 3] [i_3 - 1] [i_4 - 1] [i_9])))));
                            arr_36 [i_2] [i_3] [i_4] [i_9 + 3] [i_11] [i_11] [i_2] = 174;
                            var_40 = (!var_12);
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            var_41 = (!-16);
                            arr_40 [1] [i_12] [i_2] [i_4] [i_3] [i_2] = var_13;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
