/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((!(((var_3 ? var_9 : var_8)))))) > (((!(((var_8 ? var_19 : var_17))))))));
    var_21 = ((((((((39422 ? 1666587143 : -1666587143))) ? (min(var_14, var_15)) : ((var_8 ? var_14 : var_3))))) ? ((var_18 ? var_14 : var_3)) : (((((var_16 ? var_4 : var_9))) ? (((var_9 ? var_5 : var_18))) : var_14))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [8] [i_1] [i_2] [i_3] [8] [i_4] [i_4] |= (arr_6 [i_0] [i_0] [i_0]);
                                arr_13 [i_0] [i_0] [8] [8] [i_0] [8] [8] |= (arr_0 [i_0]);
                                arr_14 [i_2] [i_1] [i_1] = (((~-105) ? (((~(arr_7 [i_2] [i_0 - 2] [8] [i_4 - 1])))) : ((65535 ? (arr_2 [i_0 - 2] [i_2 - 1] [i_4 - 1]) : (((arr_3 [i_3]) ? (arr_10 [5] [5] [i_0] [i_0] [5] [i_2]) : (arr_9 [i_2] [i_2])))))));
                            }
                        }
                    }
                }
                var_22 = (max(var_22, ((((((var_13 ? (arr_3 [i_0 - 2]) : (arr_3 [i_0 - 2])))) ? (arr_3 [i_0 - 2]) : (arr_3 [i_0 - 1]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    var_23 = (((arr_21 [i_6]) ? (((((((arr_18 [i_5]) ? (arr_20 [i_5] [i_5]) : (arr_17 [2]))) == (((max((arr_24 [i_5] [i_6] [i_5] [i_6]), (arr_21 [4]))))))))) : (min((arr_16 [7] [i_6]), (((arr_20 [0] [0]) ? (arr_18 [i_5]) : (arr_24 [i_7] [1] [2] [0])))))));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_29 [i_5] [i_8] [9] [i_8] [i_9] [11] [9] = ((arr_19 [i_5 + 1] [i_6 + 1]) ? var_5 : (((arr_17 [i_5 + 2]) ? (arr_15 [i_5 + 1]) : (arr_19 [i_5 - 1] [i_6 + 1]))));
                                var_24 = (max(var_24, ((((((arr_19 [i_5 + 2] [i_5 + 2]) ? (arr_27 [i_5 + 2] [i_6] [i_6 - 1] [i_7] [i_6 - 1] [i_8 - 1]) : (arr_27 [i_5 + 2] [6] [i_6 - 1] [i_7] [i_5] [i_8 - 1])))) ? (((arr_27 [i_5 + 2] [i_9] [i_6 - 1] [i_7] [4] [i_8 - 1]) ? (arr_19 [i_5 + 2] [5]) : (arr_27 [i_5 + 2] [i_5 + 2] [i_6 - 1] [i_7] [i_9] [i_8 - 1]))) : (arr_19 [i_5 + 2] [i_6])))));
                                var_25 = ((-((((arr_25 [7] [i_6]) > (arr_21 [i_6]))))));
                                arr_30 [i_9] [i_7] [i_7] |= ((((((!(arr_27 [i_5] [i_5] [i_5] [i_7] [i_8] [i_9]))) ? (((var_19 ? (arr_15 [i_8]) : (arr_21 [i_6])))) : (((arr_20 [i_5] [i_5]) ? (arr_18 [i_5]) : (arr_27 [i_5] [i_6] [i_6] [i_7] [i_9] [i_8])))))) ? (((min((((var_7 != (arr_25 [i_5] [i_6])))), var_11)))) : (((arr_23 [i_9] [i_9] [i_9]) ? (arr_28 [i_5 + 2] [1] [i_8 + 3] [i_8 + 1] [i_5 - 1] [i_8 + 1] [i_8]) : (arr_28 [0] [i_6 - 1] [i_6 - 1] [i_6 - 1] [8] [i_7] [i_9]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 13;i_11 += 1)
                        {
                            {
                                var_26 = (arr_34 [i_11] [i_10] [i_7] [i_5] [2] [i_6] [i_5]);
                                arr_37 [i_5] [i_5] [i_5] [i_5] = ((((((max((arr_16 [i_7] [i_7]), (arr_26 [i_5] [i_5])))) ? (arr_36 [i_5 + 1] [i_5 - 1] [i_6 - 1] [i_6] [i_11 - 3]) : (((arr_23 [5] [i_7] [i_10]) ? var_11 : var_2)))) >> (((arr_23 [i_10] [i_7] [i_6]) - 156))));
                            }
                        }
                    }
                    arr_38 [i_6] [i_6] [i_6] [i_6] = ((((((arr_16 [i_6 + 1] [i_6]) ? var_18 : (arr_17 [i_6 + 1])))) ? (arr_16 [i_6 - 1] [i_5]) : (arr_26 [i_5] [i_5 + 2])));
                }
            }
        }
    }
    #pragma endscop
}
