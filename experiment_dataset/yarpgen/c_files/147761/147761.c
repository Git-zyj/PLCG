/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 = (arr_1 [i_0] [i_0]);
        arr_2 [i_0] = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_21 = ((55506 ? 16125993360980300384 : ((((55504 >= (arr_3 [i_1])))))));
        arr_5 [i_1] = (arr_4 [i_1]);
        arr_6 [i_1] [i_1] = (((arr_4 [i_1]) ? var_9 : var_2));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_9 [i_2] = ((((((~(arr_3 [i_2])))) ^ (var_5 & var_12))));
        arr_10 [i_2] = (((((~(arr_4 [i_2])))) ? (((~(arr_7 [i_2])))) : ((((arr_7 [0]) ? var_7 : var_16)))));
        arr_11 [i_2] = (!((min((arr_7 [i_2]), ((8632447073553307929 ? 144115188075724800 : -16565))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 13;i_4 += 1)
            {
                {
                    arr_18 [i_2] [i_3] [i_4] = var_9;
                    var_22 = (min(2409130146, 0));
                }
            }
        }
    }
    var_23 = var_10;
    var_24 = (((3194272237 >= 41659) ? (((var_9 ? (!var_5) : (var_14 && var_4)))) : var_10));
    var_25 = (min(var_14, ((((!10029) && var_15)))));

    for (int i_5 = 2; i_5 < 20;i_5 += 1)
    {
        arr_21 [i_5 - 2] [7] = var_4;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_26 -= ((var_12 ? (((min((arr_22 [10]), (arr_23 [i_5 - 1] [i_6] [i_7]))) ^ (arr_19 [17]))) : (((((var_17 ? var_5 : var_4))) ? (arr_22 [i_6]) : (((var_12 ? (arr_26 [5] [i_7] [i_7]) : var_17)))))));
                    arr_27 [5] [i_7] [i_6] [i_5] = (((((((arr_19 [1]) ? var_10 : (arr_20 [i_5] [i_5]))))) >= (arr_26 [i_6] [i_5 + 3] [1])));
                    arr_28 [14] [9] [8] [i_5] &= var_16;
                    var_27 -= (((((arr_20 [i_5] [20]) ? (((((arr_24 [i_7]) > var_2)))) : (((arr_26 [i_7] [2] [i_7]) | (arr_22 [10]))))) >= (arr_23 [i_5] [i_5] [i_5])));
                }
            }
        }
        var_28 -= (min(9104216837963281168, 0));
    }
    for (int i_8 = 3; i_8 < 19;i_8 += 1)
    {
        arr_31 [i_8] [i_8] = ((~(((((arr_22 [i_8]) * var_2))))));
        arr_32 [i_8] [1] = ((!((((arr_25 [i_8 + 1] [i_8 - 2] [i_8 - 3]) - (arr_25 [i_8 - 2] [i_8 - 3] [i_8 + 1]))))));
        arr_33 [i_8] = (min(2409130146, 4095));
        arr_34 [i_8] [i_8] = ((~((var_6 ? (arr_30 [i_8]) : (arr_29 [i_8 - 2] [i_8])))));
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        arr_38 [i_9] [1] = 1520253672;
        arr_39 [i_9] = min((min(((var_17 ? (arr_22 [i_9]) : var_6)), ((var_8 ? var_1 : var_11)))), (min(var_6, (((arr_29 [i_9] [i_9]) ? 486140682 : var_11)))));
        var_29 += (((!var_5) / (((arr_29 [i_9] [i_9]) * (var_8 / var_12)))));
    }
    #pragma endscop
}
