/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        var_18 = (arr_9 [i_0] [i_2] [5] [i_0] [i_0]);
                        arr_10 [i_0] [14] [i_2] [i_1] |= (arr_2 [i_0] [i_0]);
                        var_19 = (max(((max((arr_6 [i_2] [i_2] [0] [i_2]), var_1))), 202));
                    }
                    for (int i_4 = 3; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_2] [i_2] [i_2] = (arr_1 [i_4 - 3]);
                        arr_14 [i_0 + 3] [i_2] [i_0 + 3] [i_4] = (arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_4 - 2]);
                    }
                    arr_15 [i_2] [i_2] = ((!(arr_2 [i_0 - 1] [i_0 - 1])));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_20 = (arr_18 [i_5]);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    arr_25 [i_7] = var_12;
                    arr_26 [i_7] [i_6] [i_6] = (~65535);
                }
            }
        }
        var_21 = ((18446744073709551615 || (1155887158 && 65535)));
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
    {
        arr_30 [i_8] = ((52629 * ((var_14 ? 1 : (max(0, var_16))))));
        var_22 = (min(var_22, (9089 + 31020)));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    {
                        var_23 |= (arr_7 [i_10]);
                        arr_39 [i_11] [i_11] [i_9] [i_11] [i_8] = ((((((var_12 < 7084769778159878837) + (arr_27 [i_8])))) ? (min((arr_38 [i_8] [i_9] [i_10] [i_9] [i_11] [i_11]), (arr_8 [i_8] [i_9] [0] [i_11]))) : ((((arr_5 [i_8] [i_11] [i_11]) ? (max(9094, var_0)) : 0)))));
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
    {
        arr_43 [i_12] = (((((((643494960 < (arr_1 [i_12]))))) != var_12)));
        arr_44 [i_12] = 2147483647;
        arr_45 [i_12] = var_6;
    }
    for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
    {
        arr_48 [i_13] = (max(31333, ((max((((!(arr_8 [i_13] [i_13] [i_13] [i_13])))), (min((arr_3 [14] [i_13]), 3672514155)))))));
        var_24 = (min((max(var_11, ((min(3651472335, 65535))))), (arr_29 [7])));
        var_25 = (arr_36 [i_13] [i_13] [8] [i_13]);
        var_26 = arr_1 [15];
        arr_49 [i_13] [i_13] |= (!9089);
    }
    #pragma endscop
}
