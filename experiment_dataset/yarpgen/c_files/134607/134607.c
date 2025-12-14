/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_16 = (max(var_16, ((((((((var_12 ? (arr_3 [i_0]) : (arr_1 [i_0] [i_0])))) ? ((max(var_15, (arr_4 [8])))) : (arr_2 [i_0] [i_1] [i_1]))) | ((max((!var_13), (((arr_0 [i_2]) ? 5746941795699077036 : -20))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 = (arr_0 [i_0]);
                                var_18 = (max(((((arr_3 [i_3 - 1]) <= 1809909648))), (((arr_3 [i_1]) ? (arr_3 [i_0]) : (arr_3 [i_0])))));
                                var_19 = (((arr_2 [i_0] [i_0] [i_4]) ? (max((((-(arr_12 [i_4] [i_2] [19] [i_2] [i_0])))), (arr_8 [i_0] [i_0] [3] [i_0] [3]))) : ((+((14336 ? (arr_11 [i_0] [i_0] [i_2]) : (arr_1 [i_0] [i_0])))))));
                                var_20 = (((((((min(var_9, -20))) ? (arr_6 [i_1] [i_2] [i_1]) : (var_12 ^ var_3)))) ? (arr_6 [i_0] [i_2] [5]) : ((-(arr_7 [i_2] [i_2] [i_0] [i_3] [10] [i_2])))));
                                var_21 = (9 - 1);
                            }
                        }
                    }
                    var_22 -= (max(((((((arr_9 [2] [i_1] [i_2]) / 120)) <= (~1)))), (min(-var_2, (arr_11 [i_0] [i_1] [i_1])))));
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_23 = (min(6656901284006096790, ((max((arr_7 [i_6] [i_7 + 1] [3] [i_7 + 1] [7] [i_7 - 1]), (arr_19 [7] [18] [i_7 + 1] [18] [i_7] [18] [i_7 - 1]))))));
                                var_24 = ((((((((arr_1 [i_0] [i_1]) ? var_4 : var_8))) || (arr_7 [i_6] [2] [9] [i_7 - 1] [i_6] [i_6]))) ? ((((arr_7 [i_6] [i_6] [18] [i_6] [i_6] [i_6]) ? ((max(var_5, var_10))) : (arr_8 [i_5] [i_5] [i_5] [i_5] [i_5])))) : ((10499830214719337688 ? (arr_17 [12] [i_1] [10] [i_6]) : (arr_14 [i_0] [i_1])))));
                                arr_20 [i_0] [i_0] [i_5] [i_6] [i_6] = ((((((arr_18 [i_6] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]) ? 2097151 : (arr_13 [i_0] [4] [i_6])))) ? (max((max(var_6, 4292870133)), 1)) : (((((((arr_5 [i_6] [15] [i_5] [i_6]) - (arr_19 [i_0] [11] [i_6] [i_6] [5] [i_6] [i_0])))) ? ((min((arr_5 [i_6] [11] [i_5] [19]), var_14))) : ((max((arr_16 [11] [11] [19] [19]), (arr_17 [7] [i_1] [i_1] [i_1])))))))));
                            }
                        }
                    }
                    var_25 = (min((((((var_14 ? (arr_19 [i_0] [i_0] [i_0] [14] [1] [4] [19]) : (arr_5 [i_5] [i_5] [i_5] [i_5]))) * ((min((arr_10 [17] [18] [i_1] [i_1] [18]), (arr_10 [i_0] [4] [i_1] [i_5] [5]))))))), (max(((((arr_0 [i_0]) ? 32767 : 12722))), (max(var_11, (arr_4 [8])))))));
                }
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            arr_27 [i_9] [i_1] [i_9] [i_8] = (min(-26876, 0));
                            var_26 = ((max((max((arr_5 [i_8] [16] [16] [4]), (arr_19 [11] [11] [11] [i_9] [11] [12] [0]))), ((max(var_15, (arr_15 [1] [1] [2])))))));
                            var_27 = (min(var_27, ((((((((((arr_14 [i_0] [i_1]) ? 14909 : 1))) ? (arr_15 [12] [i_1] [12]) : (max((arr_23 [i_0] [i_0] [7]), var_8))))) ? (max(4, ((-26877 / (arr_23 [i_8 - 1] [i_8 - 1] [i_8 + 1]))))) : (arr_5 [i_1] [i_8 + 2] [i_8 - 1] [i_1]))))));
                        }
                    }
                }
                arr_28 [i_0] [i_1] = (min((max((arr_1 [i_0] [i_0]), (min((arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]), 2849386574)))), var_0));
                var_28 = (((1 ? 8355840 : ((((arr_25 [i_0] [i_0] [i_0] [i_1] [1] [i_1]) ? 12722 : var_8))))));
            }
        }
    }
    var_29 *= (((((-(~var_9)))) ? ((((min(var_10, var_6))) ? (((max(22822, 34)))) : (min(var_3, var_12)))) : (max((((var_2 ? var_6 : var_13))), ((-29866 ? var_12 : var_3))))));
    var_30 = var_9;
    #pragma endscop
}
