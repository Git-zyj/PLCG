/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((49838 + (((max(var_1, var_11)))))), var_15));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_18 = (arr_2 [i_0] [i_0 - 2]);

        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            arr_7 [i_1] = -95;
            arr_8 [i_1] [i_1 - 3] = (max((arr_3 [i_1 - 2] [i_0 + 1]), ((172 ? 1 : 45))));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_19 = ((max(-1813310382, (arr_10 [i_0] [i_2] [i_0]))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_20 [i_4] [i_2] [i_2] [i_5] = (max((((arr_12 [1] [i_2]) ? (arr_15 [i_4] [i_0] [i_2] [i_2] [i_2] [i_4]) : var_7)), (((arr_19 [i_0] [i_2] [i_5 + 1] [i_2] [i_5 + 1] [i_0 - 1] [i_5 + 1]) ? var_4 : (arr_15 [8] [i_2] [i_5 - 1] [8] [i_5] [i_4])))));
                            arr_21 [i_0] [i_2] [i_4] [i_2] [10] = var_14;
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        arr_24 [i_6] &= -0;
        arr_25 [i_6] [i_6] = var_16;
        var_20 ^= (((((-84 ? -23840 : 1813310381))) ? -2017314414 : (!492923547)));
        arr_26 [i_6] [i_6] = var_3;
    }
    for (int i_7 = 4; i_7 < 11;i_7 += 1)
    {
        var_21 ^= ((((((arr_2 [i_7 + 4] [i_7 - 1]) ? (arr_2 [i_7 - 3] [i_7 + 2]) : var_4))) ? ((~(arr_2 [i_7 - 3] [i_7 + 4]))) : (arr_2 [i_7 - 1] [i_7 - 1])));
        var_22 += ((var_7 ? var_9 : ((max((arr_22 [i_7 - 2]), (arr_22 [i_7 + 2]))))));
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_23 = var_3;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 4; i_12 < 12;i_12 += 1)
                        {
                            {
                                arr_44 [i_8] [i_9] [i_9] [i_11] [i_9] [i_11] = (arr_6 [i_8] [i_9] [0]);
                                var_24 &= 1;
                                arr_45 [i_8] [i_8] [i_10] [i_11] [i_12 - 2] = ((~((((623287828310174859 ? 102 : -84))))));
                                var_25 = var_6;
                            }
                        }
                    }
                    arr_46 [i_8] [i_9] [i_10] [14] = 13962881087921203748;
                }
            }
        }
    }
    var_26 = 15702;
    #pragma endscop
}
