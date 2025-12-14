/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_9 [i_0 - 1] [i_1] [i_0] [4] = (arr_8 [i_0] [i_1 - 1] [i_2] [i_3] [i_0 + 1]);
                            var_11 = ((-(min(18446744073709551612, 6))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 21;i_6 += 1)
                            {
                                var_12 |= (min((arr_5 [i_1] [i_1] [i_1 - 1]), (!var_7)));
                                arr_19 [i_0] [i_1 + 2] = ((-(arr_5 [i_1 + 2] [i_1] [19])));
                                arr_20 [0] [4] [i_0] [3] [i_6] = ((-((-(arr_16 [8] [i_1 + 1] [8] [i_0] [i_4] [i_0 - 1] [i_5])))));
                                var_13 = (min(var_13, var_2));
                            }
                            for (int i_7 = 1; i_7 < 20;i_7 += 1)
                            {
                                arr_23 [15] [0] [i_4] [i_0] [i_4] = ((-(max((arr_15 [i_0 + 1] [i_1 - 1] [i_4 + 1]), (arr_15 [4] [i_1 - 1] [i_4 - 1])))));
                                arr_24 [1] [i_0] [i_5] [10] [i_0] [i_0] = 1;
                                arr_25 [8] [i_0] [1] [i_5] [i_5] = ((-(min((arr_0 [i_1] [i_0 - 1]), (min((arr_17 [i_0] [5] [i_4] [i_4] [i_7 + 1] [15]), var_7))))));
                            }
                            for (int i_8 = 0; i_8 < 21;i_8 += 1)
                            {
                                arr_30 [i_0] [i_1] [i_0] = (arr_4 [i_0]);
                                arr_31 [i_0] [i_1] [10] [i_1] [i_1] = (-((-(arr_26 [7] [i_1 - 1] [i_5] [i_8]))));
                                var_14 = (max(var_14, ((-((var_4 ? var_6 : (((arr_3 [1]) ? 545480930735660672 : var_4))))))));
                            }
                            for (int i_9 = 2; i_9 < 20;i_9 += 1)
                            {
                                arr_35 [12] [16] [i_9] [i_5] [8] [8] &= ((-(((arr_32 [i_9] [i_9]) ? (var_4 - 2826139021402607067) : (arr_28 [i_9 - 1] [i_9] [i_9] [i_0])))));
                                var_15 *= max(((-(((arr_27 [i_9]) ? (arr_27 [i_9]) : var_3)))), (((arr_2 [i_0 - 1]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 1]))));
                                var_16 ^= 545480930735660675;
                                arr_36 [i_0] [i_1 + 2] [9] [i_0] [i_9] = (arr_4 [i_0]);
                                arr_37 [i_0] [i_0 + 1] [12] [i_0] [0] [i_0 + 1] [i_0] = (min(((-var_9 ? (arr_3 [i_0]) : ((13764014474255912447 ? (arr_29 [i_1] [i_4] [6]) : var_4)))), ((((arr_10 [i_9 + 1] [i_4 - 1] [i_4]) * (arr_10 [i_9 + 1] [i_4 - 1] [3]))))));
                            }
                            var_17 = arr_21 [i_0] [i_1 + 2] [i_4];
                        }
                    }
                }
                var_18 = (max(var_18, (((-((-(arr_0 [i_0 - 1] [i_1 + 2]))))))));
            }
        }
    }
    var_19 = (min(var_2, (!var_7)));
    var_20 = 0;
    var_21 = var_7;
    #pragma endscop
}
