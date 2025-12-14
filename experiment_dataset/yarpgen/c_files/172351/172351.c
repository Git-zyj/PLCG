/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_10 = (arr_3 [6] [i_1] [10]);
                var_11 = (((arr_4 [5] [i_1]) & var_6));
                var_12 ^= (1520531692 << 1);
                var_13 ^= (((8 ? (arr_3 [i_0] [11] [i_1]) : (arr_2 [i_0] [i_1]))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_12 [i_2] [i_2] = (((((max(208, 34)))) & (((arr_10 [i_2] [i_2] [i_3]) ? 18446744073709551610 : ((((var_5 || (arr_7 [13] [i_3])))))))));
            var_14 ^= ((((!(arr_7 [i_2] [i_3])))));
            arr_13 [i_2] [i_2] = 16012;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        var_15 ^= (((arr_7 [i_2] [i_3]) && (min((arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_19 [i_2] [i_3] [i_4] [i_2] [10])))));
                        var_16 += 71;

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_17 ^= (arr_18 [i_2] [i_3] [i_3] [i_5] [i_6]);
                            var_18 = ((27851 << (((arr_3 [i_6] [i_4] [i_2]) - 23))));
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            arr_26 [i_2] [i_3] [i_4] [i_5] [i_3] = var_9;
                            var_19 = (max(var_19, ((min(((((229 || 49529) ? ((min(var_0, var_2))) : (arr_3 [i_2] [i_3] [15])))), (-27841 - -6067850031876792339))))));
                            arr_27 [i_2] [i_5] [1] = ((((((min(-1207018363285982256, 1)) > 1))) * ((max(((var_3 || (arr_15 [i_3]))), (-27828 || 126))))));
                        }
                        var_20 = (max(var_20, ((((((arr_10 [i_2] [i_2] [i_2]) & 1)) | (((49501 | (arr_7 [i_2] [i_4])))))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    var_21 ^= (arr_31 [4] [4] [i_8] [i_9]);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 4; i_11 < 15;i_11 += 1)
                        {
                            {
                                arr_37 [i_2] [i_2] [14] [i_2] [i_11 + 1] = (min(((((arr_0 [i_11 + 2]) != (arr_0 [i_11 - 4])))), (max(232, (arr_28 [i_11 + 3] [i_8])))));
                                var_22 = ((min(var_0, (var_8 >= 1))));
                                var_23 = (((((max((arr_34 [i_2] [i_8] [i_9] [i_10]), 3)) * 1134)) + 579182296));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 15;i_12 += 1)
    {
        var_24 = (((-((((arr_29 [i_12] [i_12]) > 1))))));
        arr_40 [i_12] |= (max(96, (((arr_23 [i_12] [i_12] [6] [i_12] [i_12] [i_12] [5]) - (arr_23 [i_12] [i_12] [i_12] [i_12] [i_12] [2] [0])))));
    }
    #pragma endscop
}
