/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (min(var_19, var_8));
                arr_5 [i_0] = ((-(((arr_1 [i_0 + 1] [i_0 + 1]) << (((arr_1 [i_0 - 1] [i_0 + 2]) - 13423410265329497674))))));
            }
        }
    }
    var_20 = (max(((var_3 ? var_16 : (16496227453714370790 + 4123496654))), ((((2719141824 ? 0 : 779721087))))));
    var_21 |= (!var_3);

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_22 += 73;
        arr_9 [i_2] = ((((((arr_8 [i_2]) | (max(579221485, var_8))))) > ((((((var_4 ? var_15 : 1)) + 9223372036854775807)) << (var_4 - 58704)))));
        var_23 ^= (~(min((!var_11), (max((arr_8 [6]), 171470646)))));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_24 |= (min((((arr_11 [i_3]) ? (~var_3) : ((((arr_8 [i_3]) ? (arr_10 [1]) : -1))))), (arr_12 [i_3 - 1])));
        arr_13 [i_3 - 1] [i_3] = ((!((min((arr_7 [1] [1]), ((-13018 ? -1 : 2147316434167746440)))))));
        arr_14 [i_3] = (((min(0, -1893124161)) >= ((((var_18 < 3971284987905913313) | (22546 ^ -1))))));
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        var_25 = ((((1 ? (arr_7 [i_4 + 1] [i_4 - 1]) : (arr_7 [i_4 + 2] [i_4 + 2]))) + ((-(arr_7 [i_4 + 2] [i_4 + 4])))));
        var_26 = ((((-(var_12 >> var_13))) ^ -22547));
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {
                {
                    var_27 = ((((((((122 << (((arr_6 [i_6 + 1]) + 511704))))) ? var_7 : (var_12 <= var_18)))) ? var_3 : (((-6596945544380048702 ? (((arr_16 [i_4 - 1]) ? (arr_20 [i_4 + 4] [i_4 + 4] [7]) : (arr_7 [i_4] [i_4]))) : (2047 || var_11))))));
                    var_28 ^= ((((-27 / (arr_16 [i_4 + 4]))) / ((((arr_8 [i_4]) / var_8)))));
                    var_29 |= ((var_4 & (3450 < var_6)));
                    arr_24 [7] [i_5 - 3] [11] [i_5] = ((((arr_18 [i_5]) ? var_5 : ((1 ? var_3 : var_4)))));
                    var_30 ^= ((458288419 ? (((arr_20 [1] [i_4 + 1] [9]) ? 0 : (arr_22 [i_4] [i_4] [6]))) : var_13));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        var_31 = var_12;
        var_32 |= ((min(2, (var_9 == var_16))));
        var_33 ^= ((max(971156234, (arr_26 [i_7]))));
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                {
                    arr_35 [i_8] [i_8] [i_8] [i_8] = (((max(107, var_1))));
                    var_34 |= ((~(arr_19 [i_8] [4] [4])));
                }
            }
        }
    }
    #pragma endscop
}
