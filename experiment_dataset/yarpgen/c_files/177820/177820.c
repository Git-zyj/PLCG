/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] = min((min((max((arr_0 [i_1]), var_2)), (min(var_6, (arr_12 [17] [i_1]))))), (max((max((arr_6 [i_4]), (arr_14 [i_0] [i_2] [i_2] [i_3] [i_4]))), ((var_14 ? var_12 : (arr_10 [i_0] [1] [i_0] [15] [i_0]))))));
                                var_19 = (min(var_19, ((var_14 ? (min((-9223372036854775807 - 1), (((1 ? 288511288 : 78))))) : (max(var_14, (max(var_6, var_15))))))));
                                var_20 &= (min((min(var_4, (min(var_5, var_9)))), ((-8824318914355790644 ? var_7 : (max(-6759759406795718071, 8177282814729219372))))));
                                var_21 -= (min(((((((arr_0 [i_2 + 1]) ? var_12 : var_9))) ? (min(var_1, var_13)) : var_0)), ((var_13 ? (min((arr_9 [i_1]), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_8 [i_4] [i_3] [11] [i_2] [i_1] [11])))));
                            }
                        }
                    }
                    var_22 = (max((max((arr_11 [i_2] [i_1] [i_2]), var_17)), (max(var_18, (min((arr_9 [i_2]), (arr_4 [i_0])))))));
                }
            }
        }
    }
    var_23 = (((((((min(var_0, var_9))) ? var_0 : (min(var_1, var_13))))) ? var_2 : (max(((var_0 ? var_4 : var_16)), (((var_11 ? var_10 : var_1)))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 18;i_6 += 1)
        {
            {
                var_24 = ((((max(var_6, (min((arr_17 [i_5]), (arr_19 [i_5] [i_5] [i_5])))))) ? ((((max((arr_17 [i_5]), (arr_19 [i_5] [i_5] [i_6])))) ? ((min(var_18, (arr_16 [i_5])))) : (((arr_18 [i_6 - 1]) ? (arr_18 [i_6]) : (arr_16 [i_5]))))) : (arr_19 [i_5] [12] [i_5])));
                /* LoopNest 3 */
                for (int i_7 = 4; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_27 [i_5] [i_8] [i_7 - 3] [i_6 - 3] [i_5] = (min((min(((var_1 ? var_18 : var_16)), (((var_4 ? var_3 : var_0))))), ((max((max(var_7, (arr_18 [i_5]))), var_18)))));
                                var_25 = (((min(var_13, (arr_19 [i_5] [i_9] [i_7])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 18;i_11 += 1)
                    {
                        {
                            var_26 = (max((max((min(var_9, (arr_31 [i_5] [i_5] [i_10 - 1] [5]))), (min(var_10, var_17)))), var_14));
                            arr_34 [i_6] [i_5] [i_11] = arr_28 [10] [10] [i_10];
                            var_27 = (max(var_0, (arr_25 [i_5] [i_5] [i_5])));
                            arr_35 [8] [8] &= ((min((min((arr_28 [i_6 - 2] [i_10 - 1] [i_10 - 1]), (arr_20 [i_5] [i_6 + 1]))), (min(var_12, var_11)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
