/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    var_16 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_17 += (max(((((max(var_0, (arr_3 [1] [i_1])))) ? (1 * 0) : (arr_0 [i_0]))), ((max((~var_13), (arr_2 [i_0] [i_0] [i_0]))))));
                arr_4 [i_0] [i_0] = (max(((var_4 ? (1 >= 1689320095) : (max((arr_1 [i_0] [i_1]), 486342971)))), (arr_3 [i_1] [i_0])));
                var_18 = ((-120 & (arr_1 [i_1 + 1] [i_1 - 2])));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_19 = (min(var_19, 2605647199));

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                arr_14 [i_2] [i_2] [i_4] = ((-((((arr_6 [i_3] [i_2 - 2] [i_1] [i_0]) - var_14)))));
                                arr_15 [i_0] [i_1 + 1] [i_0] [i_3] [2] [i_3] [i_2] = ((~(((252 <= ((max(111, 1))))))));
                                arr_16 [3] [3] [i_2] [i_3] [i_3] = (((arr_3 [i_1 - 1] [i_2 - 3]) ? var_9 : (((((arr_3 [i_1 + 1] [i_2 - 2]) < var_7))))));
                                arr_17 [8] [i_1] [i_2] [i_1] [i_1] [i_1] = (arr_11 [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 2] [i_2 - 3]);
                            }
                            for (int i_5 = 1; i_5 < 13;i_5 += 1)
                            {
                                arr_20 [i_2] [i_3] [i_3] [i_2 - 2] [i_1 - 1] [i_2] = var_3;
                                var_20 = (min(var_20, (((((-(arr_5 [i_2 - 3] [i_2 - 3] [i_2]))) != (((arr_13 [i_2 + 1] [7] [i_2] [i_5 - 1] [i_5]) ? (arr_5 [i_2 - 3] [i_2] [2]) : (arr_13 [i_2 - 2] [i_5] [i_5] [i_5] [i_5]))))))));
                            }
                            for (int i_6 = 1; i_6 < 12;i_6 += 1)
                            {
                                arr_25 [i_0] [i_1 - 2] [i_2 + 1] [0] [i_6 + 1] [i_2] = (arr_3 [1] [i_3]);
                                var_21 = ((max(var_13, (arr_24 [i_6] [i_2] [i_6] [i_6 + 3] [5] [i_2] [i_2 - 1]))));
                            }
                            var_22 *= var_13;
                            var_23 = (max(var_23, ((((((arr_6 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1 + 2]) ? (((1 == (arr_1 [4] [4])))) : (arr_2 [i_2 - 1] [i_2 - 1] [i_1 - 1])))) ? (((((arr_22 [i_0] [i_0] [i_0] [1] [i_0] [i_0]) != (arr_0 [i_1]))) ? (((min(var_5, 1)))) : var_2)) : (min((3 / 36247), var_2))))));
                            arr_26 [i_0] [i_2] [i_0] [i_0] = var_11;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
