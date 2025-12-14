/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    {
                        var_14 = 23352;
                        var_15 = ((var_7 ? -var_2 : ((-(arr_0 [i_0])))));
                        arr_10 [i_0] [i_1] [i_2] [i_1] [i_0] = var_11;

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = 65535;
                            var_16 = 42289;
                            arr_15 [i_1] [i_2] [i_3] = arr_5 [i_2] [i_2] [i_2];
                            arr_16 [i_1] [i_2] [8] [i_4] = (max((arr_11 [i_3 - 1] [i_3 + 2] [i_3 + 1] [i_3 - 2] [i_3 - 2]), ((-(arr_5 [i_3 - 2] [i_3 - 2] [i_3 - 2])))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_17 = (((((54397 ? 65529 : 46118))) ? (((arr_1 [i_0] [i_0]) ? 23563 : (arr_13 [i_5]))) : ((46118 ? (arr_13 [i_5]) : (arr_5 [10] [10] [i_0])))));
                            arr_20 [i_5] [i_5] = ((-(((arr_12 [i_0] [i_0]) / var_12))));
                            arr_21 [i_0] [i_0] [i_2] [i_2] [i_2] = (((arr_0 [i_5]) / ((var_11 ? (arr_18 [i_5] [i_1] [i_1] [i_1] [i_0]) : var_1))));
                            var_18 = ((!(arr_19 [0] [i_1] [i_5] [i_3] [i_5])));
                        }
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            var_19 = var_11;
                            var_20 = (max((((arr_8 [i_3 + 1] [i_3 - 1] [i_6 + 1] [i_6 + 1] [11]) ? (arr_8 [i_3 - 2] [i_3 - 3] [i_6 - 1] [i_6 + 1] [i_6]) : (arr_8 [i_3 + 1] [i_3 - 1] [i_6 + 1] [i_6 + 1] [i_3 - 1]))), (min(((-(arr_4 [i_0] [i_1]))), (((var_12 <= (arr_1 [i_3] [i_6]))))))));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            arr_30 [i_0] [i_0] [12] = ((((((~var_3) - var_11))) ? (min(((var_7 ? 15630 : 19417)), var_11)) : (arr_5 [i_0] [i_1] [12])));
                            var_21 = ((((max((arr_2 [i_3 - 2]), (arr_11 [i_3 + 2] [i_3 + 1] [i_3 - 2] [i_3 + 1] [i_3 - 1])))) != (arr_11 [i_3 + 2] [i_3 - 2] [i_3 - 1] [i_3] [i_3 - 3])));
                        }
                        var_22 = ((((max((arr_19 [i_0] [i_1] [i_2] [i_3] [i_3 - 1]), (arr_19 [i_0] [i_1] [i_2] [i_3] [i_3 + 1])))) == -var_3));
                    }
                }
            }
        }
        arr_31 [i_0] = arr_6 [i_0] [i_0];
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                {
                    var_23 = arr_36 [i_8] [i_10] [8];
                    arr_41 [5] [i_9] [i_10] = (((((arr_36 [i_8] [i_9] [i_10]) ? (arr_23 [i_9] [i_9] [i_9] [i_9]) : (((arr_34 [i_8] [i_9]) ? var_11 : (arr_4 [i_10] [i_10]))))) | (((arr_7 [i_9]) ? (arr_17 [i_8] [i_8] [i_9] [i_10]) : (arr_17 [i_9] [i_9] [i_10] [i_8])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 6;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                {
                    arr_48 [i_11] [i_11] [i_12] = arr_29 [i_8] [i_11] [i_12];
                    var_24 = var_12;
                    arr_49 [i_11] = (~0);
                }
            }
        }
        arr_50 [i_8] [i_8] = ((((((var_3 % var_4) ? (arr_44 [8] [i_8]) : ((29915 ? (arr_27 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) : 65521))))) ? (arr_18 [i_8] [i_8] [i_8] [i_8] [i_8]) : ((-(arr_4 [i_8] [i_8])))));
    }
    var_25 = (((min((min(46108, 20), var_7)))));
    #pragma endscop
}
