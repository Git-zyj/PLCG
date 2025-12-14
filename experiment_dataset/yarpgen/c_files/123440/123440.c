/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [16] [i_1] [i_1] [16] [i_2] = ((((((min(var_8, var_15)))) * 3565944374)));
                                var_21 -= (((arr_1 [i_0] [i_0]) ? (arr_3 [i_2] [i_4]) : (((var_11 * 53958) / ((max(var_5, 11577)))))));
                                var_22 -= (arr_5 [18] [i_2] [i_2] [i_4]);
                                var_23 = (max(var_23, ((min(0, (arr_9 [i_4] [i_4] [11] [i_4] [13] [i_3]))))));
                            }
                        }
                    }
                }
                arr_13 [i_1] = ((((((arr_4 [i_0 - 1] [18] [i_1]) & (-127 - 1)))) ? (~53958) : ((min((arr_4 [i_0 + 2] [6] [0]), (arr_4 [i_0 + 2] [10] [10]))))));
            }
        }
    }
    var_24 = (((-127 - 1) | ((((var_8 || 44) && (!var_1))))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    var_25 = ((((4088 ? (arr_14 [i_7]) : (arr_19 [i_5] [i_5] [i_5] [i_5])))) ? (((!(arr_14 [i_5])))) : ((((arr_19 [i_5] [i_5] [13] [i_7]) || 100))));
                    var_26 = ((min((11577 | 53958), ((max(53958, var_12))))));

                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 23;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_27 = (((((729022921 ? var_0 : 26135))) ? var_14 : (arr_24 [i_5] [17] [12] [i_8] [i_9])));
                            arr_26 [i_9] [i_9] [i_6] = (((arr_19 [i_8 - 1] [i_6] [8] [i_8]) + (-127 - 1)));
                        }
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            arr_30 [i_5] [i_6] [i_7] [i_8 - 1] [i_6] = (((arr_20 [i_8 + 1] [i_8] [i_8 - 1] [i_8 - 1]) ? (arr_14 [i_8 - 1]) : (arr_14 [i_8 - 1])));
                            arr_31 [i_5] [i_6] [20] [i_6] = ((-(arr_19 [i_7] [i_8 + 1] [i_8] [i_8 + 1])));
                            arr_32 [i_6] [i_6] [i_5] = ((arr_29 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_10] [23]) | (arr_27 [i_5] [i_6] [i_7] [i_8 - 1] [i_7]));
                        }
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            var_28 &= (arr_16 [i_8 - 1] [i_8 - 1] [22]);
                            var_29 -= ((32767 ? (arr_24 [i_8 + 1] [i_8 + 1] [i_8] [i_8] [i_8 + 1]) : (arr_24 [i_8 - 1] [i_8 + 1] [i_8 + 1] [18] [i_8 - 1])));
                            var_30 = (((((var_7 ? 100 : var_3))) ? (((729022921 ? 129 : 255))) : (arr_29 [i_5] [i_5] [16] [i_8] [i_11])));
                            arr_35 [23] [i_6] [i_7] [i_6] [i_8] [i_7] [i_7] = 26135;
                            arr_36 [i_6] [i_6] = ((~(arr_24 [i_5] [i_7] [i_5] [i_8] [i_8 - 1])));
                        }

                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            arr_40 [i_5] [i_5] [i_5] [i_5] [i_6] = ((-1403019053 ? -19762 : (-127 - 1)));
                            var_31 = (max(var_31, (((var_10 ? -19762 : (var_18 * 729022921))))));
                        }
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            var_32 = (((((var_0 ? 155 : var_1))) | (var_14 & var_2)));
                            var_33 = ((~((var_14 ? var_9 : (arr_20 [i_13] [18] [i_7] [i_6])))));
                        }
                        var_34 = ((2557524652 ? (arr_16 [i_5] [i_6] [i_6]) : ((var_2 ? -19762 : 156))));
                    }
                    for (int i_14 = 3; i_14 < 22;i_14 += 1)
                    {
                        arr_46 [i_5] [i_5] [i_5] [i_6] = (!127);
                        var_35 = var_9;
                    }
                    var_36 = (((min(((-(-127 - 1))), (var_11 == 1))) == (!var_18)));
                    var_37 = ((-(arr_42 [i_5] [i_5] [i_5] [i_6] [i_7] [i_6])));
                }
            }
        }
    }
    #pragma endscop
}
