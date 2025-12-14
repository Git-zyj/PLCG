/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_18 -= ((~(arr_0 [i_0 - 1])));
        var_19 &= ((!((max(((max((arr_0 [i_0]), -28069))), (max(-28055, 900832387)))))));
        var_20 &= ((!((((((28057 ? (arr_0 [i_0]) : var_10))) ? 3896189976706991948 : (((min((arr_1 [i_0]), 28068)))))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = (arr_2 [i_1 - 1]);
        var_21 = (((~var_0) ? 28068 : 9223372036854775807));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_8 [i_2] = ((((((((var_6 ? 28053 : 28054))) ? (max(var_10, (arr_3 [i_2] [i_2]))) : (arr_4 [i_2])))) ? (((((arr_1 [i_2]) ? var_7 : var_17)))) : ((-(max((arr_7 [i_2]), var_9))))));
        var_22 |= ((((((min(-28055, 96))) + 2147483647)) >> ((((~(((arr_3 [i_2] [i_2]) ? var_4 : var_9)))) + 7))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = (-(arr_9 [i_3]));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_23 &= (~226);
                                var_24 |= (arr_18 [i_3] [i_3]);
                            }
                        }
                    }
                    arr_25 [i_5] [i_4] [i_3] [i_3] = var_1;
                }
            }
        }
        arr_26 [i_3] = ((119 ? (arr_12 [i_3]) : (arr_16 [i_3] [i_3] [i_3] [i_3])));
        var_25 = (-32767 - 1);
    }

    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        arr_29 [i_8] [i_8] = (((!var_15) ? ((max(30, (arr_27 [i_8])))) : -28070));
        arr_30 [i_8] [i_8] |= (((var_8 * (min((arr_28 [i_8]), var_5)))));
        var_26 = (min((min(var_11, (((-111 ? var_8 : (arr_27 [i_8])))))), ((min(((max(var_13, (arr_27 [i_8])))), var_12)))));
        arr_31 [i_8] = var_15;
        arr_32 [i_8] [i_8] = ((((((max(var_7, (arr_27 [i_8]))) << ((((~(arr_28 [i_8]))) - 1949276451))))) ? (max(((var_6 ^ (arr_28 [i_8]))), ((((arr_28 [i_8]) ? var_9 : var_8))))) : (max((!var_16), var_6))));
    }
    /* LoopNest 2 */
    for (int i_9 = 3; i_9 < 12;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            {
                var_27 = ((var_6 > (((((max(-28070, var_8))) ? 28042 : (min((arr_28 [i_9]), 3445989285)))))));
                arr_39 [i_9] [i_9] |= ((((max((arr_19 [i_9] [i_9] [i_9] [i_9] [i_9]), (min(var_6, 848978033))))) ? (max(((var_7 ? (arr_0 [i_9]) : var_1)), (((!(arr_12 [i_9])))))) : (((((53136 ? 79 : 4294967295)))))));
                var_28 = (((((var_12 ? ((~(arr_16 [i_9] [i_9] [i_9] [i_9]))) : 0))) & (((((var_6 ? 16 : var_9))) ? var_3 : (min(12, (arr_4 [i_10])))))));
            }
        }
    }
    #pragma endscop
}
