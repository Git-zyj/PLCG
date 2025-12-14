/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_8 [i_1] [13] [i_1] [13] = var_7;
                    var_12 = 18350;

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_11 [i_1] [0] [i_0] [i_1] = (arr_3 [i_0]);
                        arr_12 [i_0] [0] [i_1] [i_3] |= (arr_3 [i_3]);
                        var_13 = var_10;
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_14 = (max(var_14, 51));
                        arr_17 [i_1] [10] [i_0] [i_1] [i_1] = (arr_13 [i_0] [i_0] [i_2] [i_4] [i_0]);
                        arr_18 [14] [i_1] [i_2] [16] [i_1] = 2106427214120741524;
                    }
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    arr_23 [i_5] [i_1] [i_1] [i_0] = var_5;
                    var_15 = (arr_9 [10] [i_0] [i_0] [i_1] [10] [i_5]);
                    var_16 = 53;
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    var_17 = (arr_10 [i_0] [i_1] [i_1] [i_6]);
                    var_18 = (arr_14 [i_0] [i_0] [13] [i_1] [i_6] [i_6]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_19 = (arr_3 [i_0]);
                                var_20 = 31;
                                arr_31 [i_0] [i_1] [i_6] [i_7] [i_8] [i_0] [i_1] = 205;
                            }
                        }
                    }
                    arr_32 [i_0] [i_1] [i_6] = 7153384359819399368;
                }
                arr_33 [i_1] = (arr_30 [i_1]);
                var_21 = 72;

                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    var_22 = 38;

                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        var_23 = var_8;
                        arr_41 [i_0] [i_1] [i_1] [i_10] = var_4;
                    }
                }
            }
        }
    }

    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        arr_44 [i_11] [i_11] = var_0;
        arr_45 [i_11] [i_11] = 1;
    }
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        var_24 = -12904;
        arr_48 [i_12] = -8799;
    }
    var_25 = var_1;
    #pragma endscop
}
