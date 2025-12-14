/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 = (min(((((arr_1 [i_2]) ? (arr_1 [i_1]) : (arr_1 [i_2])))), (((((((arr_6 [i_0] [i_1] [2] [i_0]) < var_3)))) + (((arr_0 [i_2]) ? (arr_4 [i_1] [i_2]) : (arr_7 [i_0] [7] [i_2] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [3] [i_2] [i_1] [i_0] = ((!(((var_6 ? (arr_12 [i_4] [10] [i_4] [i_4 - 3] [i_4] [i_3 - 3]) : (arr_12 [16] [15] [i_4] [i_4 - 1] [i_3 - 1] [i_3 - 1]))))));
                                var_18 = (min((arr_7 [i_0] [12] [12] [12]), var_5));
                                arr_16 [i_0] [i_1] [i_0] [i_0] = (!((((((arr_10 [2] [i_1] [8] [3] [i_1] [i_1]) ? var_16 : var_2)) * (((-(arr_6 [i_3] [i_2] [i_1] [i_0]))))))));
                            }
                        }
                    }
                    var_19 -= ((+((((((arr_5 [i_0] [i_1] [i_2]) ? var_10 : 8589934591))) ? (max(var_11, var_3)) : (arr_6 [0] [i_1] [i_1] [i_1])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                arr_23 [i_5] [2] [i_5] = var_14;
                var_20 += (((var_1 || 14969248244504369746) | (((arr_12 [i_5] [i_6] [1] [i_6] [i_6] [1]) ? ((min((arr_19 [i_5]), var_15))) : ((var_14 * (arr_21 [i_5])))))));
                arr_24 [i_6] = var_4;

                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    var_21 = var_4;
                    arr_27 [i_5] = -6532;
                    arr_28 [i_5] [i_6] [i_7] = min((((((min(0, var_13)))) % (15869987299742207872 * var_0))), (((arr_21 [i_5]) * var_3)));
                }

                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    arr_31 [7] [i_6] [i_6] = (((((((var_10 ? var_7 : (arr_10 [11] [6] [i_6] [i_6] [i_5] [6])))) ? ((var_15 ? (arr_10 [i_8] [i_5] [i_5] [i_6] [0] [i_8]) : var_11)) : ((((arr_26 [i_6]) ? (arr_20 [1] [6]) : (arr_0 [2])))))) > 5));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            {
                                var_22 = (((((arr_20 [i_5] [i_5]) | (arr_20 [i_5] [i_5])))) ? (max(((((arr_4 [i_10] [i_6]) % (-32767 - 1)))), ((var_16 ? var_3 : var_6)))) : var_12);
                                var_23 = ((var_12 * (((((var_9 - (arr_9 [i_5] [7])))) ? (((max(var_6, var_5)))) : (min((arr_33 [i_5] [i_5] [i_8] [i_9] [i_10]), (arr_33 [i_5] [3] [i_5] [i_5] [7])))))));
                            }
                        }
                    }
                    var_24 = (((arr_9 [9] [i_6]) <= ((((((arr_35 [i_8] [i_8] [i_6] [2] [i_5]) + 2147483647)) << (var_13 - 19))))));
                }
                for (int i_11 = 4; i_11 < 13;i_11 += 1)
                {
                    var_25 = (((var_8 ? 9200750113417632260 : var_3)));
                    var_26 = ((+(((arr_11 [i_11 + 1] [i_11] [i_11 + 1] [i_11 - 1] [i_11 + 3] [i_11 + 1]) ? var_5 : (arr_33 [i_11 + 2] [10] [i_11 - 1] [i_11 + 3] [13])))));
                }
            }
        }
    }
    var_27 = 1;
    var_28 = var_7;
    #pragma endscop
}
