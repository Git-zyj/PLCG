/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (min((((arr_2 [i_0]) ? var_8 : (arr_2 [i_0]))), (arr_2 [i_0])));
        arr_4 [i_0] = 25;
        arr_5 [i_0] = (min((arr_2 [i_0]), (((arr_2 [i_0]) | ((((arr_2 [i_0]) >= 975546225749328671)))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_9 [i_0] = ((255 ? ((-8715 ? 17471197847960222945 : var_6)) : (arr_8 [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_15 [i_0] [i_1] [i_0] [i_0] [i_1] [i_2] = ((var_7 ? (((arr_7 [i_0] [i_1]) + 158)) : 60335568));
                        arr_16 [i_0] [10] [i_2] [i_3] [i_3] [1] = var_3;
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_3] = ((!(arr_2 [i_0])));
                    }
                }
            }
            arr_18 [i_0] [i_1] [i_0] = var_9;
        }
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        arr_21 [i_4] = (arr_19 [16]);
        arr_22 [i_4] [i_4] = ((var_6 ? (arr_19 [i_4]) : (arr_19 [i_4])));

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            arr_27 [i_5] [i_5] [14] &= (((arr_20 [i_4 - 1]) > (arr_26 [i_4] [i_4] [i_4 - 1])));
            arr_28 [15] [i_5] = min((((var_10 ? 15 : (arr_26 [i_4 + 2] [10] [i_5])))), (arr_19 [7]));
        }
        arr_29 [i_4 + 3] = ((max((((-32767 - 1) ? (arr_24 [i_4] [i_4] [i_4]) : (arr_20 [i_4]))), (arr_24 [i_4] [i_4] [i_4]))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            arr_36 [0] = (((arr_26 [i_7] [i_7] [i_7]) >= (arr_0 [i_7])));
            arr_37 [8] = 122;
            arr_38 [2] = ((var_7 & (((-(arr_19 [i_6]))))));
        }
        arr_39 [i_6] [i_6] |= (arr_2 [i_6]);
        arr_40 [i_6] = var_6;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 9;i_9 += 1)
            {
                {
                    arr_47 [i_6] [i_8] = (((((var_0 ? (arr_23 [i_6] [i_8] [i_8]) : 63))) || (((4503599627370495 ? 60065 : 4503599627370495)))));
                    arr_48 [i_6] [9] [9] [6] = (~var_3);
                }
            }
        }
    }
    var_12 = var_2;
    #pragma endscop
}
