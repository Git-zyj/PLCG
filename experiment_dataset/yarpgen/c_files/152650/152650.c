/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= ((((var_11 ? var_11 : var_12)) - ((((((var_12 ? var_12 : var_14))) ? var_14 : -var_5)))));
    var_17 = (32761 <= var_6);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    arr_8 [i_2] [i_1] [i_0] [i_0] = (((arr_4 [i_1 + 1] [i_2 - 1]) || ((max(var_15, 1556125588)))));
                    arr_9 [i_0] = (arr_7 [i_0] [i_1] [i_1]);
                    arr_10 [i_2] [i_0] [i_0] = (((min((arr_2 [i_0 - 1] [i_0] [i_2]), 32767)) / ((min(1, (arr_5 [i_0] [5] [i_0] [i_2 + 1]))))));
                }
                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    arr_13 [i_0] [i_0] [i_1] [i_3 - 2] = ((~(min(25, 0))));
                    var_18 += ((var_11 ? (((((arr_0 [i_0 - 1]) != (arr_0 [i_0 - 1]))))) : (((var_8 ? 19647 : var_8)))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    arr_18 [i_0] [i_1] [i_1] [i_1] = var_9;

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_1] [i_0] [i_0] = (((-(arr_5 [i_5] [i_0] [i_0] [i_0]))));
                        var_19 = ((~(arr_11 [i_5] [i_4] [i_1] [i_0])));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                arr_30 [12] [i_0] = ((arr_5 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1]) ? 1 : 6138400616955045572);
                                var_20 = ((-23662 < (arr_19 [i_0] [i_6 - 1] [0])));
                                arr_31 [i_0] [6] [i_4] [i_6 - 1] [19] [i_7] = (((arr_1 [i_0 + 1]) ? (arr_1 [i_0 - 1]) : (arr_28 [i_0 + 1] [i_0] [24] [i_6 - 1] [i_6])));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    var_21 *= (arr_25 [i_1 - 1] [i_1] [i_1 - 2] [i_1 + 1]);
                    var_22 = ((+((var_9 ? (arr_15 [i_1]) : var_0))));
                    arr_36 [i_0] [17] [i_8] [1] = (arr_2 [23] [i_0] [21]);
                    arr_37 [i_0 + 1] [i_0] [i_1] [23] = (((((var_1 ? (arr_35 [i_0] [i_1] [i_8] [i_8]) : (arr_2 [i_0] [i_0] [i_0])))) ? (arr_25 [4] [23] [i_0] [i_0 + 1]) : (arr_0 [i_0 + 1])));
                }
                var_23 = ((-32761 && ((((arr_29 [i_1 - 1] [i_1] [i_1] [i_1] [2] [i_0]) ? var_11 : var_4)))));
                arr_38 [i_0] [i_1] = (max(-var_14, 1));
                var_24 = (((min(((-32755 ? 12668983447777625955 : 0)), ((min(var_4, (arr_24 [i_0] [24] [i_0])))))) >= (((var_4 ? (arr_17 [9] [i_0] [i_1] [i_1 + 1]) : (arr_5 [i_0 - 1] [24] [i_0] [24]))))));
            }
        }
    }
    #pragma endscop
}
