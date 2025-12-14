/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_2 ? var_3 : (var_9 > -var_6)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 = (i_2 % 2 == zero) ? ((((((arr_7 [i_0] [i_2] [i_2 + 3] [8]) + 2147483647)) << (((max((((arr_4 [i_0] [8] [i_2 + 1]) ? 24123 : 1)), ((1048575 & (arr_7 [i_0] [i_2] [i_2 - 1] [1]))))) - 1048540))))) : ((((((((arr_7 [i_0] [i_2] [i_2 + 3] [8]) - 2147483647)) + 2147483647)) << (((((((max((((arr_4 [i_0] [8] [i_2 + 1]) ? 24123 : 1)), ((1048575 & (arr_7 [i_0] [i_2] [i_2 - 1] [1]))))) - 1048540)) + 1048464)) - 23)))));
                    var_13 = ((-2 ? ((1048564 + (min(var_1, -1048604)))) : (((var_4 ? (arr_1 [i_2 + 3]) : (arr_5 [i_2] [i_1 + 1] [i_2]))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    arr_15 [i_0] [i_3] [i_4] = ((((~(arr_14 [i_3] [1] [i_3]))) != ((((((arr_0 [i_4]) != -1048604))) | (max(1466832466, 122))))));
                    var_14 = ((~(arr_4 [i_0] [i_0] [i_0])));
                    arr_16 [i_3] = var_6;
                    var_15 = (((!(((5698895311677247881 ? (arr_12 [i_4] [i_3] [i_3] [1]) : 248))))) || ((((arr_5 [i_0] [i_0] [i_3]) ? (arr_5 [2] [i_3] [i_3]) : (arr_5 [i_0] [i_4] [i_3])))));
                }
            }
        }
        arr_17 [i_0] [i_0] = (((~((var_5 ? 11287 : -1466832460)))));
        var_16 = ((1466832462 ? (min((arr_13 [12] [i_0] [i_0]), (arr_0 [i_0]))) : (((((min((arr_13 [i_0] [i_0] [i_0]), 1))) ? 105 : (arr_12 [i_0] [i_0] [i_0] [6]))))));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    var_17 &= (arr_10 [i_7]);
                    var_18 |= ((~(min(5989917013509995267, (((arr_18 [i_5] [i_5]) ? (arr_12 [i_5] [i_6] [i_7] [0]) : var_3))))));
                    arr_27 [i_7] [i_6] [i_6] [i_5] &= ((((-(((-2147483647 - 1) ? var_5 : var_2)))) > ((-((min(-1, (arr_0 [i_6 + 1]))))))));
                    var_19 = ((!((((arr_8 [i_7]) ? (arr_8 [i_7]) : var_6)))));
                }
            }
        }
        var_20 = var_10;
        var_21 = (((((-(min(1048603, (arr_0 [i_5])))))) ? ((min(((var_6 ? (arr_24 [i_5] [i_5] [i_5]) : -197538461)), (arr_18 [i_5] [i_5])))) : (max((min(0, 6440250774256568889)), (((105 ? 14550 : 218)))))));
        arr_28 [i_5] = (max(((min((arr_0 [i_5]), (arr_0 [i_5])))), (min((arr_0 [i_5]), var_3))));
    }
    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {
        var_22 = var_3;
        var_23 &= ((5900 != (arr_30 [i_8 + 1])));
        var_24 = var_6;
        var_25 = -1;
        var_26 += ((((min((arr_30 [i_8 + 1]), (arr_30 [i_8 + 1])))) | (arr_30 [i_8 + 1])));
    }
    #pragma endscop
}
