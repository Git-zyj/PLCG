/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= -42;
    var_18 = var_1;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_19 = ((!((min(41, (arr_1 [i_0 + 3]))))));
        var_20 = (-((((var_13 ? (arr_1 [i_0]) : (arr_1 [i_0]))) / (((-(arr_0 [24])))))));
        var_21 = min(var_16, (((!(arr_0 [i_0 + 1])))));
        arr_2 [i_0] [i_0 + 3] = (((arr_0 [i_0 + 1]) < (((arr_0 [12]) ? (((arr_0 [i_0]) ? var_16 : (arr_0 [i_0]))) : (!var_15)))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_22 = (((((arr_4 [i_1 + 3]) ? (((((arr_0 [i_1]) == (arr_4 [i_1 + 2]))))) : (arr_3 [i_1])))) ? (arr_1 [12]) : (((((((arr_3 [i_1]) ? var_14 : (arr_3 [i_1]))) <= (arr_0 [i_1 + 3]))))));
        var_23 = ((34 << (((((max(var_3, (arr_4 [i_1 + 2]))))) + 102))));
        arr_5 [i_1 - 1] [i_1 + 3] = (((var_3 | var_5) != ((max(var_1, (arr_0 [i_1 - 1]))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                arr_16 [i_1] [i_3] = (((((~(arr_9 [i_3]))) << (((((arr_4 [4]) ? (arr_1 [6]) : var_16)) - 11521032381573516258)))));
                                var_24 = (min(var_24, ((((min(9789264483984698049, -1))) ? (arr_9 [i_1 - 1]) : (((((104 ? var_2 : (arr_3 [i_1])))) & (var_10 | -46)))))));
                                arr_17 [i_1] [i_1] [i_1] [10] |= (~(arr_4 [i_1 + 2]));
                            }
                        }
                    }
                    arr_18 [i_1] [i_2] [i_3] [i_3 + 1] = -9;
                }
            }
        }
    }
    for (int i_6 = 3; i_6 < 14;i_6 += 1)
    {
        arr_22 [i_6] = (arr_14 [i_6 + 1] [4]);
        arr_23 [i_6] = (-(max((arr_7 [i_6 + 1]), 116)));
        var_25 = (max(var_25, ((((max((arr_8 [6] [i_6 + 1] [i_6]), (arr_8 [i_6] [i_6 - 1] [i_6 - 1])))) ? (max((arr_12 [i_6] [10]), 5631879412192753048)) : (((((arr_8 [i_6] [i_6 - 3] [i_6]) < (arr_8 [i_6 - 2] [i_6 - 2] [14])))))))));
    }
    #pragma endscop
}
