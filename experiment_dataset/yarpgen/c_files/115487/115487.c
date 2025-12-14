/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    var_17 = ((var_15 ? var_9 : var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = (((63 ? 37 : -38)));
                var_19 = ((-1044763727434447484 ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_20 = (max(var_20, (((((((((var_0 ? (arr_2 [i_0] [i_2]) : (arr_6 [i_0] [i_0])))) ? ((((arr_4 [i_2]) ? (arr_7 [i_0] [i_1] [i_1] [9]) : (arr_4 [i_0])))) : (((arr_1 [i_1] [i_2]) ? var_6 : (arr_5 [i_0] [i_0])))))) ? var_14 : (arr_5 [i_1] [i_2]))))));
                    var_21 = (arr_7 [i_1] [i_1] [i_1] [5]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_22 = ((var_3 ? (arr_1 [5] [i_1]) : (arr_6 [i_0] [i_2])));
                                var_23 += (arr_4 [i_2]);
                                var_24 = (arr_10 [4]);
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_25 += arr_14 [i_0] [i_0] [i_2];
                        var_26 |= (arr_1 [i_0] [i_0]);
                        var_27 &= var_0;
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_28 = (((((-19819 ? var_6 : (arr_3 [i_0] [i_8])))) ? (((arr_15 [i_0] [i_0] [8]) ? ((((arr_18 [1] [i_6]) ? -19819 : (arr_15 [i_0] [i_1] [i_1])))) : -6881284437851569126)) : 37));
                                var_29 *= ((var_15 ? (((((var_4 ? (arr_0 [i_7]) : (arr_8 [i_8 + 1] [i_1] [i_1] [i_1])))) ? ((((arr_7 [i_0] [i_1] [i_7] [i_8]) ? (arr_8 [i_0] [i_1] [i_0] [i_0]) : var_9))) : (((arr_8 [i_0] [i_6] [i_6] [i_8]) ? (arr_19 [i_0] [i_0]) : (arr_22 [7] [i_1] [i_1] [i_1] [i_1]))))) : (arr_15 [i_0] [i_1] [i_0])));
                                var_30 ^= (((-30 ? 6881284437851569126 : -973339322)));
                            }
                        }
                    }
                }
                var_31 = ((var_8 ? 1343459678 : 7099954722419511653));
            }
        }
    }
    #pragma endscop
}
