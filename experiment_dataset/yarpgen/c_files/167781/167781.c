/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_4;

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0 + 1] [i_1] [i_0] = (((~65535) && var_1));
            arr_6 [i_0] [i_1] = (arr_2 [i_0] [i_0]);
        }
        for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_0] = ((8959718789605653920 && ((min(-30786, (-1 != 1099165515703300632))))));
            arr_11 [i_0] [i_0] [i_2 + 2] = var_15;
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        arr_19 [i_0] [i_3] [i_4] [i_5] [i_5] = (max(-1, ((((arr_1 [i_5]) != (arr_1 [i_5]))))));
                        arr_20 [i_0 - 1] [i_5] [i_0 - 1] [i_5] = -317433757;
                        arr_21 [i_5] [i_5] [i_4] [i_5] [i_0] [i_3] = ((((((arr_7 [i_0] [1]) >= var_8))) + var_3));
                        arr_22 [16] [i_5] = (((((((arr_0 [11]) > (arr_17 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0]))))) <= (((arr_9 [i_5] [i_0 - 2]) ? 63210 : 3500304403118037557))));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_27 [i_6] [i_3] [i_0] [i_4] [i_6] [i_5] = (((max(var_0, (arr_8 [i_0 - 2] [i_0] [i_0 + 1])))) ^ ((~((((arr_25 [1] [i_0] [12] [i_6]) > var_0))))));
                            arr_28 [i_5] = (4139 - 28559);
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_32 [i_0 - 2] [i_0 - 2] [22] [i_0] [i_5] [i_7] = ((!(arr_13 [i_0 - 1] [i_3] [i_4])));
                            arr_33 [i_0] [i_0] [i_4] [i_5] [i_7] = (arr_25 [i_0] [i_0] [i_0 + 1] [i_4]);
                            arr_34 [i_0] [i_0] [i_4] [i_0] [i_0] [i_4] [6] = (((arr_3 [i_0 + 1] [i_0 + 1]) + var_3));
                            arr_35 [i_0] [i_3] [i_5] [i_7] &= (((arr_12 [i_0 - 2] [i_5] [i_0 - 2]) / (arr_2 [i_3] [i_5])));
                            arr_36 [18] [i_3] [i_5] [6] [i_4] = (arr_3 [i_5] [1]);
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        arr_39 [12] = (((((arr_9 [22] [i_8]) ? ((~(arr_23 [i_8] [i_8] [i_8] [i_8] [1] [6] [10]))) : ((var_2 ? 28559 : (arr_30 [i_8] [i_8] [12])))))) & (arr_9 [16] [i_8]));
        arr_40 [10] = 28559;
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        arr_44 [i_9] [i_9] = var_4;
        arr_45 [1] [i_9] = ((-(!-28560)));
    }
    #pragma endscop
}
