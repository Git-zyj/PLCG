/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((var_11 ? ((72 ? 54 : var_2)) : (var_6 <= -var_5)));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_11 [i_0] [i_2] [i_2] [i_0] = var_2;
                    arr_12 [i_2] = (((((-(arr_2 [i_2])))) ? 43495 : var_0));
                    arr_13 [i_0] [i_0] [0] = (((var_6 ? var_6 : var_2)));
                }
                arr_14 [i_0] [i_0] = ((!(arr_1 [i_0])));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            arr_21 [i_4] [8] [i_3] [i_1] [i_1] [i_0] &= (max(((max(var_10, var_11))), 4294967272));
                            arr_22 [i_0] [i_0] [0] [i_4] = ((!((max(var_0, var_7)))));
                            arr_23 [i_4] [i_3] [i_1] [1] |= var_8;
                            arr_24 [i_1] = ((((min((arr_0 [i_0]), var_3))) && ((max((arr_18 [i_0] [i_1]), 0)))));
                            arr_25 [i_4] [i_3] [i_1] = (arr_19 [i_4] [1] [i_3] [i_0] [i_0] [i_0]);
                        }
                    }
                }
                arr_26 [i_0] [1] [i_0] = 1;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            {
                arr_32 [5] = ((((max(((24 ? var_9 : (arr_31 [i_5]))), -var_9))) ? (((((min((arr_27 [8]), var_9))) >= ((var_1 & (arr_30 [i_5] [11] [7])))))) : (((((var_2 ? var_1 : var_2)) >= ((0 ? (arr_30 [1] [i_6] [i_6]) : 28785)))))));
                arr_33 [10] = (max(1, 0));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            {
                arr_41 [i_7] [i_8] = (((((~((var_8 ? (arr_2 [i_7]) : (arr_34 [i_8])))))) ? (var_10 / var_7) : -48948));
                arr_42 [i_7] [i_7] [10] = var_1;
            }
        }
    }
    var_12 = -var_10;
    #pragma endscop
}
