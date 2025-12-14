/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_18 = (arr_5 [3] [i_1] [3] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_2] = (arr_3 [5]);
                                arr_13 [16] [i_1 + 2] [i_1 + 2] [i_3] [i_4] [i_2] [i_4] = (arr_5 [i_2] [6] [i_2] [i_2]);
                                arr_14 [i_4] [i_2] [10] [i_2] [10] [i_2] [i_0] = (arr_0 [15]);
                            }
                        }
                    }
                    var_19 += (arr_11 [i_2] [i_0] [i_1] [i_0] [i_0]);
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_24 [i_0] [i_6] [3] [i_0] [i_0] = (max((arr_5 [i_6] [i_5] [i_1] [i_0]), (max((arr_18 [i_0] [i_0] [i_6] [13] [i_6]), (arr_10 [i_6] [i_7])))));
                                arr_25 [i_0] [i_0] [3] [15] [10] [i_6] = (arr_18 [i_0] [i_0] [i_5] [i_6] [i_7]);
                            }
                        }
                    }
                }
                var_20 = min((min((max((arr_22 [i_0] [12] [i_0] [i_1] [i_0] [i_0]), (arr_3 [11]))), (arr_1 [i_1]))), (arr_21 [i_0] [i_1] [i_1] [i_1 + 4] [i_1]));

                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    var_21 = (min(var_21, (arr_22 [8] [0] [i_1] [i_1] [8] [i_0])));
                    arr_29 [i_8] [i_1] [i_1] [1] = (arr_8 [i_0] [i_1 + 1] [i_0] [i_0] [3]);
                    arr_30 [i_0] [i_1] [1] [i_8] = ((max((arr_9 [i_8] [i_1 + 1] [i_1] [i_1] [10]), (arr_19 [i_1] [i_1 - 2] [i_1 - 2] [2] [i_1]))));
                }
                for (int i_9 = 4; i_9 < 15;i_9 += 1)
                {
                    arr_33 [4] [4] [i_9] = (arr_8 [18] [i_9] [i_1] [12] [18]);
                    var_22 -= (arr_23 [i_9 + 4] [i_9 + 2] [i_1] [i_1] [i_0]);
                }
            }
        }
    }
    var_23 = var_5;
    #pragma endscop
}
