/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_1 ? var_6 : var_11))) ? ((var_8 ? (max(var_2, var_10)) : var_2)) : (((!(((var_5 ? var_1 : var_7))))))));
    var_13 = (((((var_7 ? ((var_1 ? var_1 : var_3)) : ((-988679531 ? var_11 : 51))))) ? var_0 : ((var_8 ? var_11 : var_2))));
    var_14 = (((((-((34 ? 42 : -52))))) ? var_5 : var_5));
    var_15 = ((-40 ? -1 : -458921059052949963));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 = (((!18446744073709551598) ? (arr_4 [i_0] [i_1] [i_1] [i_2]) : ((((((arr_4 [19] [i_1] [i_2] [i_2]) ? (arr_1 [i_0]) : (arr_1 [i_2])))) ? (((arr_5 [i_0] [21] [11]) ? (arr_5 [i_0] [i_1] [i_0]) : (arr_6 [i_0] [i_0] [i_0] [i_0]))) : (arr_2 [i_0])))));
                    arr_7 [i_1] [i_0] = (((((((min((arr_1 [i_1]), (arr_1 [i_2])))) ? (arr_6 [i_1] [i_1] [i_2] [i_1]) : ((~(arr_1 [i_0])))))) ? ((~((~(arr_5 [i_1] [i_1] [i_2]))))) : ((((((arr_1 [i_0]) ? (arr_6 [i_0] [i_0] [i_2] [8]) : (arr_3 [i_0] [i_1] [2])))) ? (((arr_4 [15] [i_1] [i_1] [i_1]) ? (arr_1 [i_0]) : (arr_6 [16] [16] [i_2] [16]))) : (((arr_1 [i_2]) ? (arr_5 [17] [i_1] [i_0]) : (arr_4 [i_0] [i_1] [i_2] [i_0])))))));
                    var_17 -= (((arr_6 [i_0] [i_1] [i_1] [i_0]) ? (max((((arr_5 [i_0] [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_3 [i_2] [i_0] [i_0]))), ((((arr_5 [i_0] [i_1] [i_2]) <= (arr_1 [i_2])))))) : (((~(((!(arr_3 [13] [i_1] [1])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = arr_2 [i_0];
                                var_19 ^= (((((1 ? 18446744073709551587 : 371941748))) ? (((((arr_2 [i_3]) ? (arr_5 [i_4] [i_0] [i_0]) : (arr_14 [i_0] [i_1] [i_1] [3] [23] [16]))) & (((arr_10 [i_0] [i_0] [i_2] [i_3]) + (arr_9 [i_0] [i_0] [9] [i_0] [1] [i_0]))))) : (((arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [1]) ? (((arr_6 [i_0] [i_0] [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_9 [6] [6] [i_2] [22] [6] [i_2]))) : (arr_14 [i_0] [i_0] [i_2] [i_2] [i_3] [i_0])))));
                                var_20 = (-59 - 24601);
                            }
                        }
                    }
                    var_21 = (arr_5 [i_0] [8] [8]);
                }
            }
        }
    }
    #pragma endscop
}
