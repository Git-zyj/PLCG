/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(var_7, -91));
        var_18 = (((~(~var_3))) >> (-113 + 124));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1] = ((-(arr_3 [i_1])));
        arr_8 [i_1] = arr_3 [i_1];
        arr_9 [i_1] [2] = ((var_3 ? var_15 : (arr_5 [11] [i_1])));
    }
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        arr_12 [i_2] = ((((-(arr_4 [i_2 - 1]))) != -1));
        var_19 = (min(var_19, (((((((arr_6 [20] [i_2]) && var_0)) ? (arr_5 [i_2] [i_2]) : (((var_11 ? 46 : var_6)))))))));
        arr_13 [0] [i_2 - 1] = (max((((arr_3 [i_2 - 1]) ? (arr_3 [i_2 - 1]) : (arr_3 [i_2 - 1]))), (~var_16)));
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_20 = ((max((arr_16 [i_3]), -4)));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        arr_26 [0] [i_6] [i_3] [i_5 - 2] = -1484572378;
                        var_21 ^= (min((arr_20 [15] [i_3]), (min(0, var_7))));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        arr_29 [i_7] [i_7] = (((arr_3 [i_7]) ? ((max((arr_3 [i_7]), (arr_3 [i_7])))) : (arr_3 [i_7])));
        var_22 = (~128);
    }
    for (int i_8 = 1; i_8 < 20;i_8 += 1)
    {
        var_23 += (((((var_10 ? (arr_20 [i_8 + 1] [16]) : (arr_27 [i_8])))) && (arr_30 [i_8])));
        arr_33 [14] = (~var_7);
        var_24 = (min(var_24, (max((((-125 ? (arr_22 [13]) : -118))), ((~(arr_4 [i_8 + 1])))))));
        var_25 = (min(var_25, (((((max(25, (!-89)))) ? (~var_12) : (((18446744073709551615 >> 1) ? (~var_8) : 1)))))));
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        var_26 = (max((min(-255, ((9197952577831172965 ? (arr_5 [9] [i_9]) : (arr_5 [i_9] [i_9]))))), 21));
        arr_37 [i_9] = arr_36 [i_9];
    }
    #pragma endscop
}
