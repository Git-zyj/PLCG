/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_3, var_7));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [7] = ((((arr_6 [1] [i_2 + 2] [10]) ? (arr_6 [11] [i_2 - 3] [0]) : (arr_5 [1] [i_2 - 1] [i_0]))));

                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            arr_14 [i_0] = 6601;
                            arr_15 [2] [0] [i_0] [i_0] [8] [3] = ((-(arr_2 [10] [10])));
                        }
                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            var_15 = (arr_5 [16] [0] [i_0]);
                            var_16 = max(((((arr_5 [i_3 + 1] [3] [i_0]) ? -6601 : var_0))), (arr_5 [i_3 - 2] [10] [i_0]));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_17 -= ((((arr_6 [14] [15] [1]) ? (((arr_4 [1]) ? var_3 : (arr_4 [12]))) : 3800641616)));
                            arr_21 [1] [10] [i_0] [11] [16] [13] = (max(6603, 233));
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_18 = ((+((((arr_11 [6] [12] [5] [1]) % 1)))));
                            var_19 = ((137438953471 && ((!((var_7 && (arr_4 [4])))))));
                            var_20 = (max(var_20, -6603));
                            var_21 = ((9307865612541561391 ? 88 : 1182925321));
                            var_22 &= ((((((((arr_1 [5] [1]) ? -32747 : var_5)) - (((max((arr_18 [i_7]), -6592))))))) ? 5761421747269216315 : (((12851416940557607794 ? (arr_9 [3] [11] [2]) : (max((arr_5 [10] [12] [i_7]), (arr_17 [10] [i_3]))))))));
                        }
                        var_23 = 1;
                        arr_24 [i_0] [1] [12] = 1;
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_24 = (min(var_24, (((((max((arr_7 [i_0 - 2]), 1))) ? (~5343592634139687309) : (((5545949932737470760 ? 6612 : -17203))))))));
                                var_25 = (min(var_25, (6627 && 1440725227)));
                            }
                        }
                    }
                    var_26 = (min(var_26, (arr_22 [4] [i_1 + 1])));
                }
            }
        }
    }
    var_27 = var_11;
    var_28 = ((var_11 ? (((var_12 == 1440725227) & var_9)) : 1));
    #pragma endscop
}
