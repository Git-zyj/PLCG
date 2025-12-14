/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    var_21 = var_9;
    var_22 = var_10;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_23 = arr_1 [i_1] [i_2];
                        var_24 = (arr_5 [i_0] [i_0]);
                    }
                }
            }
        }
        var_25 = (arr_10 [i_0] [i_0] [i_0] [13] [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {

                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        var_26 = (arr_8 [i_0] [1] [i_4] [i_5] [i_6]);
                        var_27 = (arr_12 [i_0] [1] [i_5]);
                        var_28 = (arr_3 [1] [i_4]);
                        arr_21 [i_0] [i_5] [i_5] [i_0] [i_0] [i_0] = (arr_16 [i_4] [i_6]);
                        var_29 = (min(var_29, (arr_5 [12] [3])));
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        arr_24 [i_0] = (arr_1 [i_0] [i_0]);
                        var_30 |= arr_20 [i_7] [i_5] [i_4] [i_0];
                        var_31 = (arr_19 [19]);
                    }
                    arr_25 [i_0] [12] [18] |= (arr_10 [i_0] [0] [13] [4] [i_0] [18]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                {
                    var_32 = (arr_14 [i_9]);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            {
                                var_33 = (arr_9 [i_9] [i_9] [i_9] [i_10] [i_11]);
                                arr_35 [i_0] [i_11] [8] [i_0] = (arr_28 [3] [i_0] [7]);
                                var_34 = (arr_2 [i_11] [7]);
                            }
                        }
                    }
                    arr_36 [i_0] [i_0] [i_9] [i_8] = (arr_0 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
