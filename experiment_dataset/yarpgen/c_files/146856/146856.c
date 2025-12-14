/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_8;
    var_12 = ((((var_10 / (-9223372036854775807 - 1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = var_8;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 -= ((((((arr_11 [4] [i_2] [i_3 - 2] [i_3 + 1] [i_2] [i_3 + 1]) ? (arr_12 [i_0] [i_1] [i_3 - 1] [i_3 - 3]) : 3651222984))) ? (arr_12 [i_4] [i_4] [i_4] [i_3 + 2]) : ((-(!18446744073709551615)))));
                                arr_14 [6] [i_1] [i_1] [i_1] [7] [i_1] = ((-((-((-127 ? 274873712640 : 1434902113))))));
                            }
                        }
                    }
                }
                var_14 = ((1 | (arr_10 [i_0] [i_1] [i_0])));

                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    arr_19 [i_0] [i_0] [i_0] = arr_7 [i_5] [i_5 + 1];
                    arr_20 [7] [i_1] [i_1] = var_6;
                    var_15 *= ((((-1017650519 ? ((max((arr_5 [i_5 - 1] [i_5 - 1]), var_5))) : (~var_3))) != (arr_6 [i_0] [15])));
                }
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_16 = ((((max((arr_26 [i_6 + 1] [i_6] [i_6] [i_6]), (arr_27 [i_0] [i_6 + 1] [i_6 + 1] [i_0] [i_0] [i_0])))) ? (min(var_5, ((var_6 ? var_4 : var_3)))) : ((-(~-1258882640892571592)))));
                                var_17 = (min(var_17, (((-((var_7 ? var_6 : var_9)))))));
                            }
                        }
                    }
                    var_18 = var_0;
                }
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    var_19 &= (((-(arr_22 [i_9] [1] [i_1] [6]))));
                    var_20 += (var_7 >= ((-(((arr_5 [i_1] [i_9]) ? (arr_27 [i_0] [i_0] [i_1] [i_9] [i_9] [i_0]) : (arr_21 [i_0] [i_0] [3] [i_9]))))));
                }
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 13;i_12 += 1)
                        {
                            {
                                arr_39 [6] [i_1] [i_1] [0] [6] = ((((var_3 ? (arr_23 [i_10] [i_12 + 4] [i_12] [i_12 + 3]) : 18446744073709551615)) & -1258882640892571591));
                                var_21 = (min(var_21, ((((((~(((arr_31 [i_0] [i_1] [i_10]) ? (arr_5 [i_0] [1]) : (arr_36 [1] [7] [i_10] [i_1] [i_0])))))) ? ((1258882640892571591 ? 46439 : -1258882640892571590)) : (max((min(var_8, var_3)), (39797 * var_6))))))));
                                var_22 ^= ((var_1 ? var_9 : (arr_30 [i_12 + 1] [i_12 + 2] [i_12 - 1] [i_12 + 3])));
                            }
                        }
                    }
                    var_23 = ((((((arr_15 [i_1] [i_1] [i_1] [i_1]) << (arr_15 [i_0] [1] [i_10] [i_1])))) ? var_6 : ((((arr_15 [i_0] [i_1] [i_10] [i_10]) ? var_2 : (arr_18 [i_0] [i_0] [i_0] [i_0]))))));
                    var_24 = (max(var_24, ((((-1017650519 != (1258882640892571583 | 1)))))));
                }
                var_25 -= (min(((var_1 ? (((max(var_4, var_0)))) : var_6)), (((var_1 & (arr_31 [i_1] [i_0] [i_0]))))));
            }
        }
    }
    var_26 = (max(var_26, var_2));
    var_27 = (min(var_27, (((~((((var_8 ? var_8 : var_5)))))))));
    #pragma endscop
}
