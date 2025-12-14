/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = var_0;
                    arr_9 [i_0] [2] [2] = (arr_1 [i_0] [i_1 - 1]);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_12 = (max(var_12, (((((arr_11 [i_3]) || (arr_11 [i_3]))) ? (max((arr_11 [4]), (arr_11 [i_3]))) : (((arr_11 [i_3]) - (arr_11 [i_3])))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    arr_16 [i_4] [i_5] [i_4] [i_4] = ((arr_14 [i_4] [i_5]) ? (((((var_7 & (arr_15 [i_5] [i_4] [3]))) >> (((arr_12 [i_3]) - 3791754488))))) : ((((((arr_15 [i_3] [i_4] [i_4]) ? 62 : var_11))) ? -4196736454960938708 : (arr_15 [i_3] [i_4] [i_5]))));
                    var_13 = ((((((var_8 ? var_1 : (arr_11 [i_5])))) ? (arr_10 [i_3]) : var_3)));
                    var_14 += (arr_13 [12] [i_5]);
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        arr_21 [i_6] = (((((arr_20 [i_6] [i_6]) >= (arr_20 [i_6] [i_6]))) ? (arr_17 [i_6]) : ((var_11 ? (arr_19 [i_6]) : var_3))));
        var_15 += 255;
    }

    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_24 [10] |= 48;

        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            var_16 = (((((((arr_22 [i_7] [i_7]) ? (arr_23 [i_7] [i_7]) : (arr_18 [i_8])))) ? (max(var_5, (arr_17 [i_7]))) : 193)) ^ var_3);
            var_17 = (max(var_17, (((((((var_9 | var_6) ? var_1 : (arr_27 [i_8] [i_8])))) ? ((min(7686, 1))) : var_1)))));
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    {
                        arr_36 [i_7] [i_9] [i_10] [i_7] = ((((255 & (arr_33 [i_7])))) ? (((arr_30 [i_7]) ? (max((arr_19 [i_7]), (arr_27 [i_7] [i_7]))) : var_11)) : ((((((3579846237580333402 >> (((arr_31 [i_7]) + 61))))) ? var_10 : (arr_31 [i_7])))));
                        arr_37 [i_7] [i_7] [i_7] = (arr_17 [i_7]);
                    }
                }
            }
            var_18 = ((((-19289 ? -11791 : 15996281800224721993)) | var_4));
            arr_38 [i_9] [i_9] &= (((min((arr_27 [1] [i_9]), ((((arr_26 [i_7] [i_9]) <= var_5))))) <= ((-(max((arr_26 [i_7] [i_9]), var_9))))));
            arr_39 [i_7] = max((((arr_32 [i_7]) ? (arr_32 [i_7]) : var_7)), (((arr_32 [i_9]) ? (arr_32 [i_9]) : (arr_32 [i_7]))));
        }
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    {
                        var_19 = (arr_29 [i_13] [i_14] [i_7]);
                        arr_48 [i_12] [i_13] [i_13] [i_13] [i_14] [i_7] &= (arr_23 [i_7] [i_13]);
                        var_20 *= (max((arr_46 [i_7] [i_12] [i_12] [6] [i_13]), 9133));
                        arr_49 [i_14] [i_14] [i_13] [i_12] &= ((+(((((max((arr_27 [i_7] [i_13]), 1))) && (arr_32 [i_14]))))));
                        var_21 *= var_1;
                    }
                }
            }
            arr_50 [i_7] [i_12] [i_12] = (((((((~(arr_28 [i_7] [i_7]))) & var_11))) ? var_4 : (47 < 152)));
        }
        var_22 = (max(var_22, ((min((arr_42 [i_7] [4]), ((((((arr_32 [i_7]) < 8598965351193456466))) % (((-127 - 1) ? 1 : 1)))))))));
        var_23 += (arr_35 [i_7] [2] [2] [12] [i_7] [i_7]);
    }
    var_24 -= 75;
    #pragma endscop
}
