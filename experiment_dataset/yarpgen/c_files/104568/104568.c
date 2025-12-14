/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_7);
    var_14 = (((((-((1 ? 45180 : 1))))) ? -var_7 : var_0));
    var_15 = (min(1, 27775));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_16 = ((-(arr_0 [i_0] [i_0 - 1])));
        var_17 = ((-((var_8 ? (arr_0 [i_0 + 2] [i_0 + 2]) : (arr_1 [i_0 + 1] [i_0 - 2])))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_0] [i_0] &= ((-(max((arr_5 [i_0] [i_0 - 2] [2]), (arr_5 [i_0] [i_0 - 1] [i_0])))));
                    var_18 = (max((arr_2 [i_0]), (max((arr_4 [i_1]), (arr_3 [i_2])))));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_10 [1] [i_1 - 2] [i_1 - 2] [i_0] [i_0] = ((((!((((arr_0 [4] [i_1 - 1]) ? 82 : (arr_1 [i_1] [i_1])))))) ? (((arr_0 [i_0] [i_1]) ? (arr_9 [i_1] [1] [i_0 - 1] [1]) : (arr_5 [i_1 - 1] [1] [i_0 - 3]))) : (arr_9 [i_0 + 1] [i_1 - 1] [i_1 - 2] [i_1 + 1])));
                        var_19 = (min(((((!(arr_9 [i_3] [12] [1] [i_0 + 2]))) ? var_5 : ((max(var_5, (arr_7 [i_0 - 2] [i_0 - 2] [i_2] [i_3])))))), ((~((~(arr_3 [i_2])))))));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_20 = (max((((arr_12 [i_2] [i_0 - 2] [i_0 + 1] [i_0]) ? (arr_5 [i_1 - 1] [i_4] [i_0 + 2]) : (((~(arr_13 [i_4] [i_2] [i_1 - 2] [i_0])))))), (arr_9 [i_0 - 2] [i_0 + 2] [i_1 - 2] [i_4])));
                        var_21 = (arr_4 [i_0]);
                        var_22 = arr_2 [i_2];
                        var_23 *= ((((((arr_13 [i_0 - 1] [i_1 - 2] [i_0 - 1] [i_4]) ^ (arr_13 [i_0] [i_1 - 2] [i_0 - 1] [0])))) ? ((min((arr_8 [i_0] [i_0 - 3] [i_0 + 2] [i_1 - 1] [i_1 + 1]), (arr_9 [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_1 + 1])))) : ((-((max(-27775, 1)))))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        arr_16 [0] |= var_9;
        var_24 = ((~(((arr_0 [i_5] [i_5]) ? (arr_0 [i_5] [i_5]) : (arr_0 [i_5] [i_5])))));

        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_20 [i_6] |= ((arr_13 [i_5] [i_5] [i_5] [i_5]) + (arr_9 [i_5] [i_5] [i_5] [8]));
            var_25 = (((arr_2 [i_5]) ? ((-((-(arr_9 [1] [1] [5] [i_6]))))) : (((!(arr_8 [i_6] [i_6] [i_5] [i_6] [i_5]))))));
            var_26 = (min(var_26, (((-((65535 << (var_2 + 5424090480882447124))))))));
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    {
                        var_27 = -224;
                        var_28 = ((((((arr_14 [i_5]) & (min(var_1, (arr_4 [i_5])))))) ? (arr_3 [12]) : (((((arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [i_9]) | var_11))))));
                        var_29 *= (arr_4 [i_5]);
                    }
                }
            }
            arr_28 [i_7] [i_7] |= (((-(((arr_12 [i_5] [i_5] [i_7] [i_7]) ? (arr_5 [i_5] [i_5] [i_5]) : (arr_25 [i_5] [i_7] [i_7] [i_5]))))));
            var_30 = ((-((var_5 ? -var_9 : ((~(arr_21 [i_5] [i_7])))))));
        }
        var_31 = (((arr_11 [i_5]) == ((min(((min(1, (arr_23 [i_5] [i_5] [i_5])))), (~var_9))))));
        arr_29 [i_5] = ((-(arr_24 [2] [i_5])));
    }
    var_32 = (((((var_9 ? -var_11 : ((var_4 ? var_10 : var_11))))) ? (((var_5 & var_10) ? (~var_12) : (var_7 % var_7))) : var_4));
    #pragma endscop
}
