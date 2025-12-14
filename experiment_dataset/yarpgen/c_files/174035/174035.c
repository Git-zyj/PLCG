/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((var_6 + (-32767 - 1))), (((15713021834588951835 || (0 + var_1))))));
    var_11 = var_6;

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_2 [14] [i_0] = (-(arr_1 [15]));
        arr_3 [1] [10] = -20;
        arr_4 [i_0] = arr_0 [i_0];
        arr_5 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                arr_21 [i_1] [i_2] [i_3] [16] [16] = (max((arr_9 [i_1]), (arr_9 [i_1])));
                                arr_22 [i_1] [i_1] [i_3] [i_4] [i_3] = ((~(max(2396565103481344593, (arr_20 [i_1] [i_2])))));
                                arr_23 [i_1] [i_3] [i_4] [i_5] = (((((arr_9 [i_5]) / 9715477430656004374)) & (((arr_9 [i_1]) & var_5))));
                            }
                        }
                    }
                    arr_24 [i_1] [i_3] = 157;
                }
            }
        }
        arr_25 [i_1] = ((~(arr_7 [i_1])));
        arr_26 [i_1] = 8731266643053547242;
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        arr_29 [i_6] [i_6] = (arr_7 [i_6]);

        /* vectorizable */
        for (int i_7 = 3; i_7 < 14;i_7 += 1)
        {
            arr_33 [i_6] = ((-var_7 > (arr_30 [i_7 - 3] [i_7])));
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    {
                        arr_38 [i_9] [4] [i_9] [12] [i_9] [i_9] = (((arr_17 [i_6] [i_8 - 1] [i_9]) << (2396565103481344593 - 2396565103481344588)));
                        arr_39 [i_8] = 1;
                        arr_40 [i_6] = 1;
                    }
                }
            }
            arr_41 [i_6] [i_7] [i_7] = (arr_14 [i_6] [i_6]);
            arr_42 [i_7 - 3] [14] [11] = -2396565103481344594;
        }
        arr_43 [i_6] = (max((9715477430656004373 * 2773311060), 32741));
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        arr_46 [i_10] = (((-(-9223372036854775807 - 1))));
        arr_47 [i_10] = ((-(((arr_35 [i_10] [i_10] [i_10] [i_10]) * (min(var_5, 16777215))))));
        arr_48 [i_10] = (9715477430656004374 * 9715477430656004374);
        arr_49 [i_10] [i_10] = ((((((1 || (!8731266643053547242))))) != 8731266643053547242));
    }
    #pragma endscop
}
