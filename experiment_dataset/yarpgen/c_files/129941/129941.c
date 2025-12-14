/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_16 = ((((27298 ? (arr_4 [0] [i_0 + 3]) : var_1))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                var_17 = (max(var_17, ((((((-(arr_1 [i_1 - 1])))) ? ((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_2]) - (arr_1 [i_1 - 1])))) : ((22289 ? (arr_1 [i_1 + 1]) : var_1)))))));
                                var_18 |= var_12;
                                var_19 = ((((((arr_8 [i_0 + 2] [i_1 - 1] [i_1 - 2] [i_0 + 2] [i_0 + 2]) + -114))) ? ((0 - (((((arr_9 [i_0 - 1] [9] [i_3] [i_3]) <= (arr_8 [i_0] [i_1] [i_0] [i_3] [i_4]))))))) : 1));
                                var_20 = var_0;
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 10;i_5 += 1)
                            {
                                var_21 = (arr_4 [i_0 + 2] [i_0 + 3]);
                                var_22 = 0;
                                var_23 = (min(var_23, ((((arr_13 [1] [i_1 - 2] [i_2] [i_3] [i_5]) ? 1224184781 : (arr_13 [i_0] [i_1 - 2] [i_0 - 1] [i_3] [i_5]))))));
                                var_24 = (((arr_7 [i_0] [i_1 - 1] [i_1 - 1] [i_5]) ? 1 : ((6847 / (arr_2 [i_0] [i_0])))));
                            }
                            for (int i_6 = 0; i_6 < 10;i_6 += 1)
                            {
                                var_25 = var_11;
                                var_26 &= var_4;
                            }
                            for (int i_7 = 0; i_7 < 10;i_7 += 1)
                            {
                                var_27 = (min(var_27, (((((arr_3 [i_1] [i_1 - 2]) | 127))))));
                                arr_21 [i_0] = var_2;
                            }
                            var_28 = var_2;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            {

                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_29 = (arr_25 [i_8 + 1] [i_9]);
                    arr_32 [i_9] = (arr_22 [i_8 + 1]);
                }
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {

                    /* vectorizable */
                    for (int i_12 = 2; i_12 < 20;i_12 += 1)
                    {
                        var_30 += var_13;
                        var_31 = var_6;
                    }
                    var_32 *= ((~(arr_36 [i_8 + 1] [2])));
                }
                for (int i_13 = 2; i_13 < 21;i_13 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            {
                                var_33 = ((arr_27 [i_8] [i_8]) - ((max((arr_40 [i_9] [i_9]), (arr_35 [i_13 - 1] [i_8 - 1])))));
                                arr_49 [i_13] [i_14] [i_15] &= (arr_48 [i_8 + 1] [i_8 + 1] [i_15]);
                                var_34 = (((((((49 >> (146 - 123))) >> (((((-127 - 1) + 26605)) - 26467))))) ? var_13 : -11));
                                var_35 ^= ((-((-((123 ? -6832 : 187))))));
                            }
                        }
                    }
                    arr_50 [15] [i_9] [i_9] [i_8] = (max(((max(-90, (arr_22 [i_9])))), (max(var_15, var_5))));
                }
                var_36 = (((((((min(var_0, var_6))) - (((-127 - 1) ? (arr_25 [i_9] [21]) : 0))))) ? (((((-(arr_39 [i_8] [i_9] [i_9])))) ? (max(126, var_8)) : ((min(var_13, 6847))))) : ((~(arr_47 [i_8 + 1] [i_8 - 1] [i_8] [i_8 - 1] [i_9])))));
            }
        }
    }
    var_37 = ((!(((var_3 ? 22500 : (!var_4))))));
    #pragma endscop
}
