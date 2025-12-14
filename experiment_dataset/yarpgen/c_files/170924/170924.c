/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (7236653478484110874 + 1587590429);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_1] [i_2] [i_1] [i_4] = ((((((arr_7 [i_0]) * var_7))) << (!-7236653478484110887)));
                                arr_15 [i_4] [i_2] [i_1] [i_3] = ((max(7236653478484110887, 2948108504)));
                                var_11 = (arr_11 [i_0] [i_2] [i_0] [i_4]);
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_1] [i_1] = (arr_5 [i_1] [i_0] [i_1] [i_1]);
                    var_12 = ((7236653478484110887 ? (arr_8 [i_0 + 1] [i_1]) : ((((arr_0 [i_0 + 1] [i_2]) % (arr_8 [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_23 [i_1] [i_1] [i_1] [13] [i_1] = ((!((min((((arr_3 [9] [i_5]) ? (arr_17 [i_1] [i_2] [i_5] [i_6 - 1]) : (arr_12 [i_0] [i_1] [i_2] [i_2] [i_5] [i_5] [i_1]))), (var_8 + 0))))));
                                arr_24 [i_1] [i_1] [i_6] [i_6] [i_6] = ((((-1670676603127910172 ? -13396 : (arr_13 [i_0 + 1] [i_1] [i_2] [i_5] [i_6])))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 3; i_7 < 13;i_7 += 1)
                {
                    var_13 &= ((!(arr_25 [12])));
                    var_14 = (~var_1);
                    arr_27 [i_0] [i_0 + 1] [i_0 + 1] [6] |= var_9;
                }
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    var_15 += (~var_8);
                    arr_32 [i_1] [i_1] [i_1] = (((arr_2 [i_1]) - (arr_12 [i_0] [3] [i_0] [i_8] [i_0] [i_0 + 1] [i_1])));
                }
                /* vectorizable */
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    arr_35 [i_0] [i_0] [6] [4] |= ((!(2030449900 || var_8)));
                    var_16 = ((!(arr_29 [10] [10] [i_9] [i_9 - 1])));
                }
                arr_36 [1] [i_1] [1] = ((2948108500 | (min((((-(arr_31 [i_0] [i_1] [i_0 + 1])))), (min(4294967295, var_4))))));
                var_17 = 16383;
                arr_37 [i_1] = (2030449900 || 15746328911135500235);
            }
        }
    }
    #pragma endscop
}
