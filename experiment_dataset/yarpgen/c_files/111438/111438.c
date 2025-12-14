/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_3 [9] [i_0] = ((113 ? ((max((arr_1 [i_0 + 3]), 31))) : var_18));
        var_20 = var_0;
        var_21 = (-127 - 1);
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_22 -= ((((~(arr_6 [i_1] [i_1])))));
        arr_7 [i_1] [6] = (33463 >= -1554901836);
        var_23 = (((arr_6 [i_1] [i_1 + 2]) ? ((1028689714659778018 ? -737236055 : 35184372088831)) : ((((arr_6 [i_1] [i_1 + 3]) ? 14 : (arr_6 [i_1] [i_1 - 1]))))));
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                {
                    arr_17 [i_2] [4] [i_4] [i_4] = (((((arr_4 [i_4 + 3]) != var_2)) ? (((arr_0 [i_3 + 2]) ? 188 : (arr_0 [i_3 + 3]))) : var_0));
                    var_24 = var_12;
                    arr_18 [i_4] = (arr_9 [i_2]);
                    var_25 = (0 ? 99 : -1667595376);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    var_26 = ((((((((arr_4 [1]) ? var_12 : (arr_14 [8] [i_6])))) ? (((var_11 ? (arr_1 [8]) : 0))) : ((var_19 ? var_15 : (arr_16 [i_2] [i_5] [i_5] [7]))))) <= var_11));
                    var_27 |= (arr_12 [7] [i_5] [i_5]);
                    arr_25 [i_6] = (min((min((arr_1 [i_6]), (((arr_24 [i_2] [i_5] [8]) | (arr_1 [i_2]))))), (((arr_19 [i_2] [i_5] [i_6]) ? ((max(var_5, (arr_12 [i_2] [6] [i_6])))) : ((var_15 ? var_10 : var_12))))));
                }
            }
        }
        arr_26 [i_2] = (max((arr_24 [i_2] [i_2 + 2] [i_2]), (arr_2 [i_2 + 2])));
    }
    var_28 = var_17;

    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        arr_29 [i_7] = var_2;
        var_29 = (((245 ? 0 : 220)));
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        arr_32 [i_8] [8] = ((((arr_30 [8]) != (min(279846469, 61)))));
        var_30 += (max((min((arr_31 [19]), ((var_15 ? 0 : var_6)))), var_12));
        arr_33 [16] [i_8] = ((((min(var_4, (arr_30 [i_8])))) ? (arr_27 [i_8]) : (arr_31 [i_8])));
    }
    var_31 = var_6;
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 18;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            {
                arr_39 [i_9] = (~var_3);
                var_32 = min((((((var_4 ? var_14 : var_14))) ? (((arr_37 [i_10] [i_9] [i_9]) ? 60276 : var_17)) : ((var_13 ^ (arr_28 [i_10]))))), ((0 >> (((((arr_38 [i_9]) ? var_15 : (arr_37 [i_10] [i_10] [i_10]))) - 49)))));
            }
        }
    }
    #pragma endscop
}
