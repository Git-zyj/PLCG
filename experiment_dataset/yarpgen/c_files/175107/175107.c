/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= ((-((var_7 ? var_17 : ((1071644672 ? var_1 : var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 -= (((((((((arr_3 [i_3] [i_4]) ? var_1 : (arr_6 [15] [i_2 + 1] [i_3])))) ? (arr_3 [i_2 + 1] [i_4 - 1]) : (((arr_9 [i_0] [9] [i_0]) ? (arr_2 [i_0] [i_1] [i_2]) : -1071644691))))) ? ((min((arr_11 [i_0 + 2] [i_1] [i_4 + 1] [13] [i_3]), (arr_11 [10] [i_1] [i_4 - 1] [11] [i_4 - 1])))) : 1071644678));
                                var_21 -= (((((1071644672 && ((!(arr_4 [14] [i_1] [i_2 + 1])))))) != var_7));
                                arr_12 [i_0 - 1] [16] [i_2] [i_3] [i_3] |= -1071644677;
                                arr_13 [8] |= ((-((((arr_11 [i_4 - 2] [i_4 + 1] [13] [i_4 + 1] [i_4 - 2]) > (arr_11 [i_4 + 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4 + 1]))))));
                            }
                        }
                    }
                }

                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    var_22 = ((((-(arr_15 [i_5] [i_1] [i_0 + 2] [i_0]))) & var_8));
                    var_23 = ((((arr_10 [i_0 - 1] [i_1] [i_1] [i_5] [1]) ? ((var_9 ? 236 : var_16)) : (arr_7 [i_5 + 2] [i_1] [i_5] [i_0 - 1] [i_5 - 2]))));
                }
                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                arr_24 [1] [i_1] [i_6] [i_7] [i_8] = 883851612;
                                var_24 = (-1071644686 + var_9);
                            }
                        }
                    }
                    arr_25 [3] [i_0] = (var_6 ? (max(2931823501, (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 + 2]))) : (((6176 + var_10) ? (((max(var_10, (arr_2 [i_0] [i_1] [i_6]))))) : var_3)));
                    var_25 = 17452;
                }
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    var_26 = (max(var_26, ((((((~(((arr_19 [i_0] [i_0]) ? var_2 : (arr_0 [i_9])))))) != -16703649223164792991)))));
                    arr_28 [i_9] [i_1] [i_0] = (~-116);
                }
                var_27 -= (((((var_4 ? var_16 : ((max((arr_16 [i_0]), (arr_10 [i_0 - 1] [i_0] [i_0 - 1] [i_1] [i_1]))))))) ? (((var_10 ? (((!(arr_27 [i_0] [i_1] [14])))) : ((var_16 ? var_11 : (arr_27 [3] [i_1] [i_1])))))) : ((var_3 & (324706367 > -1071644683)))));
                arr_29 [i_0] [14] [i_1] = ((((((min(var_14, (arr_23 [i_0] [i_0 - 1] [i_0] [i_0] [14])))) ? (min((arr_18 [14] [i_0] [i_1]), (arr_19 [i_0] [i_1]))) : 25)) % (arr_15 [i_0 + 1] [i_0 + 2] [i_0 - 1] [i_0 + 2])));
            }
        }
    }
    #pragma endscop
}
