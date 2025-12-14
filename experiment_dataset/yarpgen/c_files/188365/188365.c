/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_12 -= 32767;
        var_13 |= (arr_2 [i_0] [8]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_14 = (min(var_14, (arr_0 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_2] = -var_7;
                        arr_15 [1] [i_2] [i_3 + 3] [i_1] = 45748;
                    }
                }
            }
        }
        arr_16 [i_1] = (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {
        var_15 = 4294967295;
        arr_21 [i_5] = ((!(arr_18 [i_5] [i_5])));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 21;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 21;i_9 += 1)
                    {
                        {
                            var_16 = (arr_24 [i_6] [i_8] [i_9 + 1]);
                            var_17 = (min((arr_28 [1] [i_7 - 1] [22]), (max(((5377122194376629567 ? (arr_28 [i_7 - 1] [i_7 - 1] [i_9]) : (arr_27 [i_6] [i_6]))), var_11))));
                            var_18 = var_3;
                            arr_32 [i_9 - 3] [i_6] [i_6] [6] = (((arr_28 [i_7 - 1] [i_7 + 1] [i_7 + 2]) ? (arr_28 [i_7 + 2] [i_7 + 2] [i_7 + 1]) : ((var_0 / (arr_28 [i_7 - 1] [i_7 + 1] [i_7 + 1])))));
                            arr_33 [i_6] [i_8] [i_6] = (arr_27 [i_6] [i_6]);
                        }
                    }
                }
                arr_34 [i_6] [i_6] = ((+(((arr_31 [i_6] [i_7] [i_7] [i_7] [1]) / (max(0, 32758))))));
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 21;i_12 += 1)
                        {
                            {
                                arr_44 [i_6] [i_6] [i_6] [i_6] = ((!((min(-10, var_0)))));
                                var_19 = -var_3;
                                arr_45 [i_6] [1] [i_6] [i_6] = 0;
                                var_20 = (arr_30 [i_6] [i_7 + 1] [i_7] [2] [i_6] [i_12]);
                            }
                        }
                    }
                }
                var_21 = var_9;
            }
        }
    }
    #pragma endscop
}
