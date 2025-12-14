/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (((max(var_2, ((8185 ? -30866 : 5492329514872721079))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 21;i_4 += 1)
                            {
                                var_12 = (min(var_12, (((-(arr_14 [i_4] [i_2] [i_2] [i_0]))))));
                                arr_15 [i_1] [i_0] [i_1] [i_0] [i_1] [7] = 25579;
                                var_13 = ((((var_4 ? var_7 : (arr_7 [i_0] [i_0] [i_3] [i_0]))) % (((10269 | (arr_10 [i_0] [i_0]))))));
                                arr_16 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2] = var_3;
                            }
                            for (int i_5 = 0; i_5 < 22;i_5 += 1)
                            {
                                arr_19 [i_5] [i_0] [i_3] [i_0] [i_0] [i_0] = ((((max(8190, (arr_10 [i_0] [i_2])))) ? (((arr_5 [i_0]) - (((((arr_8 [i_2] [12] [i_0] [i_3 + 1]) == (arr_1 [i_3]))))))) : (((((arr_3 [i_0]) * (arr_5 [i_0]))) ^ (arr_11 [i_3] [i_3 - 3] [i_3] [i_0])))));
                                arr_20 [i_0] [i_1] [i_0] [i_1] [i_3] [i_3] [i_5] = (arr_4 [i_2] [i_2]);
                                arr_21 [0] [i_0] = (max((arr_1 [i_1]), ((var_10 ? ((var_4 ? var_4 : (arr_18 [i_1] [i_1] [i_1] [i_1] [i_5] [i_1] [i_1]))) : (((min((arr_17 [i_0] [i_0] [i_2] [i_0] [i_0]), 9045))))))));
                            }

                            for (int i_6 = 1; i_6 < 20;i_6 += 1)
                            {
                                var_14 &= ((((((arr_10 [i_2] [i_0]) ? (arr_12 [i_2] [i_0] [i_0]) : (arr_12 [i_0] [9] [2])))) ? (11757 - var_9) : (arr_7 [i_3] [i_3 + 2] [i_3 + 2] [1])));
                                var_15 = ((-((min((min((arr_4 [i_0] [i_0]), var_8)), var_3)))));
                                var_16 |= (min(var_9, ((((var_9 - var_1) > ((-(arr_1 [i_1]))))))));
                            }
                            /* vectorizable */
                            for (int i_7 = 3; i_7 < 20;i_7 += 1)
                            {
                                arr_26 [i_0] [i_0] [i_3] = ((+(((arr_4 [i_0] [i_0]) ? var_5 : (arr_11 [i_2] [i_1] [i_7] [i_0])))));
                                var_17 = ((((((arr_0 [i_7]) ? var_6 : var_9))) ? (((arr_13 [i_0] [i_1] [i_2] [i_0] [i_7]) ? (arr_7 [4] [i_1] [i_2] [i_2]) : (arr_4 [i_2] [i_2]))) : (((var_0 || (arr_17 [i_7] [i_7] [i_2] [8] [i_7]))))));
                                var_18 -= ((~(arr_5 [i_2])));
                                arr_27 [i_0] = (~(arr_18 [i_3 - 3] [i_7 - 1] [i_7 - 1] [i_7 - 3] [17] [i_7 - 3] [i_7]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (min(var_3, (((((var_9 ? var_3 : var_4))) ? (min(-7762661163710343375, var_9)) : var_9))));
    var_20 = var_5;
    var_21 |= ((-(((-9197204719474783633 + 9223372036854775807) << (var_1 - 47915)))));
    #pragma endscop
}
