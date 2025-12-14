/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0 + 1]);
        var_16 = (max(var_16, var_3));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_17 = ((~(min(((2070612850 ? var_4 : 8863915223770695659)), (arr_4 [i_1])))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    {
                        var_18 = (max(var_18, ((max((((-(arr_5 [i_1])))), ((-2035880764 ? ((4 ? (arr_9 [i_1] [i_2] [i_2]) : (arr_10 [i_3 + 1]))) : 65535)))))));
                        var_19 = (-2035880739 * ((~(arr_10 [i_3 + 1]))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_23 [i_6 - 4] [i_5] [i_6 - 4] [i_5] = (min((((arr_4 [i_1]) & (arr_4 [i_7 + 1]))), ((min(var_15, (arr_8 [i_1] [i_1]))))));
                        var_20 = ((-(((arr_16 [i_5 + 1] [i_7 + 1] [i_6 + 1]) - (arr_6 [i_5 + 1] [i_7 + 1])))));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        var_21 = 8045287174219128467;
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 8;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 9;i_11 += 1)
                {
                    {
                        var_22 = (max(((~(arr_31 [i_10] [i_8] [6] [i_10]))), (arr_31 [i_10] [i_9] [i_9] [i_10])));
                        var_23 = ((arr_16 [i_11 + 1] [i_11 - 1] [i_10 + 2]) * (((arr_34 [i_10] [i_10] [i_11 - 1] [i_10]) / 29210)));
                        var_24 = (((-2035880775 ^ 2035880763) & (((!(arr_5 [i_10 - 1]))))));
                    }
                }
            }
        }
    }
    for (int i_12 = 1; i_12 < 22;i_12 += 1)
    {
        arr_37 [i_12] = (max(-7490276164968054285, (max(6637736399045829728, ((max(4, 156)))))));
        arr_38 [i_12] |= (((((((var_2 * (arr_35 [i_12 + 2] [i_12 + 2]))) / 38283))) <= ((((((arr_35 [i_12 + 2] [i_12 + 2]) ? (arr_35 [i_12] [i_12]) : 1993329479))) ? (arr_36 [i_12]) : (-32764 && -6637736399045829729)))));
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 23;i_14 += 1)
            {
                {
                    var_25 *= ((((min(-22990, 4614))) <= ((max(125, 9)))));
                    var_26 &= (max((arr_41 [i_12]), (var_11 % var_14)));
                }
            }
        }
        var_27 -= 60921;
    }
    var_28 = 18446744073709551614;
    #pragma endscop
}
