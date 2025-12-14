/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_10 = (arr_4 [6]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] = ((!((((arr_3 [13] [i_0] [i_2]) ? var_6 : 246)))));
                            arr_10 [i_1] [i_2] [i_0] = (min((((~(arr_5 [i_0] [i_2] [i_3])))), (var_2 | 126)));
                            var_11 = (max(var_11, ((((((-((-32 ? (arr_2 [i_2] [i_3]) : -32))))) ? ((var_4 ? var_6 : ((-5644217925960854126 ? var_9 : var_9)))) : (arr_8 [i_2]))))));
                            var_12 |= ((((((((7 ? 3410 : var_9))) && ((((arr_7 [i_0 + 1] [i_1] [i_2] [20] [i_2] [i_3]) / (arr_5 [i_2] [i_2] [18]))))))) | ((min(0, (((var_0 >= (arr_8 [i_2])))))))));
                            var_13 = var_1;
                        }
                    }
                }
                arr_11 [i_0] [i_0] [i_0] = (max(((~(min(var_7, (arr_5 [i_0] [i_1] [i_1]))))), var_1));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_14 = (min(var_3, (((((arr_2 [i_1] [i_4]) ? var_0 : (arr_1 [i_0] [i_4])))))));

                            for (int i_6 = 0; i_6 < 0;i_6 += 1)
                            {
                                var_15 = (((((arr_2 [i_0] [i_6]) ? -3674795769464342435 : ((min(var_6, (arr_7 [i_0] [15] [19] [i_4] [i_0] [i_6])))))) * (((min((arr_20 [i_0 + 1] [i_6 + 1] [i_0] [1] [i_6] [i_6 + 1] [i_6 + 1]), var_2))))));
                                arr_22 [6] [i_1] [i_4] [i_5] [20] |= (((-(1 + var_3))));
                                var_16 *= (arr_8 [i_5]);
                                var_17 *= (((((arr_15 [i_0] [i_0 - 1] [i_6] [i_4] [i_6 + 1]) ? (arr_15 [i_0] [i_0 + 1] [10] [i_5] [i_6]) : var_7))) ? (arr_12 [i_5]) : 54893);
                            }
                            for (int i_7 = 1; i_7 < 21;i_7 += 1)
                            {
                                arr_27 [i_0] [i_0] [9] = (((arr_13 [i_0 + 1] [i_7] [i_7 + 3] [i_0]) <= (arr_13 [i_0 + 1] [i_5] [i_7 + 3] [i_0])));
                                var_18 = ((!(-2147483647 - 1)));
                                var_19 = (arr_7 [i_0] [2] [i_1] [i_4] [i_0] [i_7]);
                                arr_28 [i_0 + 1] [i_1] [i_0] [i_1] [i_7 + 3] [10] = (max(var_8, var_5));
                            }
                            for (int i_8 = 3; i_8 < 20;i_8 += 1)
                            {
                                var_20 = ((8 ? ((~(arr_6 [i_0 + 1] [i_0 + 1] [i_8 - 3]))) : ((max(var_7, (var_3 < var_3))))));
                                arr_31 [i_0] [i_4] [i_5] = (arr_29 [i_0]);
                                var_21 |= (min(((max((arr_2 [i_4] [i_8]), (((arr_25 [18] [16] [11] [23] [i_8]) || var_3))))), (arr_1 [i_4] [i_1])));
                            }
                            arr_32 [14] [i_0 + 1] [i_0] [18] [15] [i_5] = ((~(((arr_26 [i_4] [i_5]) ? (arr_3 [i_0 + 2] [i_0] [i_0 + 2]) : ((var_2 ? var_5 : var_7))))));
                        }
                    }
                }
                var_22 = (((54892 ? ((var_0 ? var_1 : var_5)) : (arr_1 [i_0] [i_1]))));
            }
        }
    }
    var_23 |= var_3;
    #pragma endscop
}
