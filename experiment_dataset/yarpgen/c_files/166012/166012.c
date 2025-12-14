/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((((max(var_5, (max(var_5, -7226703660582879121))))) ? (((arr_1 [i_1 + 1] [i_1]) ? var_7 : var_4)) : ((var_0 ? (-26 != var_7) : (arr_5 [i_1 + 2] [i_1 + 1])))));
                arr_8 [i_1] [i_1 - 1] [i_1] = ((((min(var_14, var_8))) ? -4815622633441956253 : (arr_0 [i_1])));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_13 [i_2] [i_2] = (var_1 ? var_15 : (((var_0 ? (arr_12 [i_2]) : -4815622633441956253))));
        arr_14 [i_2] [i_2] = var_12;
        arr_15 [i_2] [i_2] = ((var_10 < var_4) ? (arr_12 [i_2]) : -7226703660582879124);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_19 [i_3] = ((((116 ? var_6 : var_8)) / ((((arr_16 [i_3]) ? var_14 : (arr_18 [i_3] [i_3]))))));
        arr_20 [i_3] = ((var_6 ? (arr_18 [i_3] [i_3]) : (var_3 <= 81967244860241447)));
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 21;i_6 += 1)
            {
                {
                    arr_27 [i_4] = ((~(((((var_1 ? (arr_25 [i_4 + 2] [i_5] [i_6] [i_4]) : var_2))) ? (((var_1 ? (arr_11 [i_4]) : (arr_10 [i_4])))) : ((var_3 ? var_1 : 17750131323245041850))))));

                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {
                        arr_31 [i_4] = (((arr_22 [i_4 + 1]) ? (arr_22 [i_4 + 1]) : 7183464508518653288));
                        arr_32 [i_4] [i_7] = (~var_3);
                        arr_33 [i_4] [i_4] [i_4] = (arr_23 [i_4]);
                        arr_34 [i_4] [i_6] [i_5] [i_4] = ((1 != (((var_14 <= (arr_23 [i_4]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
