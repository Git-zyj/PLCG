/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_2] [i_1] [i_0] = (((arr_8 [i_0]) ? (arr_3 [i_1] [5] [i_2]) : (((!(arr_1 [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_17 [i_3] [i_3] [i_2] [i_3] [i_4] = var_2;
                                var_13 = ((var_2 == (arr_5 [i_1] [i_2])));
                            }
                        }
                    }
                }
                var_14 = (arr_15 [i_0] [i_1] [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            {
                arr_22 [i_6] [i_5] [i_5] = var_7;
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_15 = (arr_18 [i_8] [i_9]);
                                var_16 = ((((-(arr_20 [i_5] [i_5])))) ? (((((((arr_27 [i_5] [i_6] [i_8] [i_9]) ? (arr_27 [i_9] [i_8] [11] [i_5]) : var_3)) + 2147483647)) << (var_6 - 48117))) : (max(1435524589, ((-(arr_26 [i_9] [i_8] [i_6]))))));
                            }
                        }
                    }
                }
                var_17 = (max((((~(var_2 ^ var_6)))), (max(var_3, var_10))));
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            {
                                arr_39 [i_11] = var_4;
                                var_18 = (-((-(((!(arr_20 [i_5] [i_6])))))));
                            }
                        }
                    }
                }
                var_19 = (((arr_18 [i_5] [i_5]) ^ (((-var_12 < (arr_21 [13] [1] [i_6]))))));
            }
        }
    }
    var_20 = ((((((var_12 ? var_7 : var_4)) * var_12)) < (!var_9)));
    #pragma endscop
}
