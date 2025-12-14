/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -15392;
        arr_3 [i_0] [i_0] = (((((arr_1 [i_0]) * (199 < 3514529937))) == (!-15389)));
    }

    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_18 = (arr_5 [i_1] [i_1]);
        arr_7 [i_1] [i_1] = (((arr_4 [i_1]) ? (((~(arr_4 [i_1])))) : var_13));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_1] [3] [i_1] [i_2] [i_4] = ((((((max(var_8, var_16))) / (max(var_1, 1))))) ^ (max(((18446744073709551613 ? var_5 : var_6)), var_1)));
                        arr_15 [i_2] = ((((var_17 ? ((1 ? var_14 : (arr_12 [i_2] [i_1]))) : ((var_15 ? var_4 : var_12))))) ? (((var_6 + 9223372036854775807) >> (var_15 + 1883878267))) : var_11);
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_19 = ((((var_7 >= (((var_11 ? (arr_8 [i_5]) : 230))))) ? ((var_14 ? (min(var_6, 1)) : var_3)) : var_3));
        var_20 = ((arr_0 [i_5]) ? ((~(arr_6 [i_5] [i_5]))) : ((-15377 / (-127 - 1))));
        var_21 ^= (((((20304 << (45232 - 45230)))) ? ((((11011718875054944863 >= ((max(var_14, var_11))))))) : ((var_5 * ((var_12 ? 199 : 0))))));
    }

    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        arr_21 [i_6] = -101;
        arr_22 [i_6] = 127;
        arr_23 [i_6] [i_6] = 161;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_22 = var_16;
        arr_26 [i_7] [i_7] = var_12;
        var_23 = (min(var_23, ((((arr_8 [i_7]) ? -10890 : var_2)))));
    }
    #pragma endscop
}
