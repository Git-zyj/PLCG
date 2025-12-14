/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] |= (max((((97 ? ((min(var_6, (arr_7 [i_2 + 1] [i_0] [i_1] [i_0])))) : (arr_6 [i_1 - 1] [i_1 + 1] [i_2 + 1])))), (arr_6 [i_1 + 1] [6] [i_2 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_14 = (max(((((max((arr_9 [i_0] [i_1] [i_2] [i_3]), var_13))) ? var_3 : (arr_7 [16] [i_1 + 1] [i_2] [i_3]))), (arr_3 [i_1] [i_4])));
                                arr_15 [i_0] [i_1] [i_2 + 1] [i_3] [i_4] [i_4] [i_4] = ((arr_4 [i_1]) ? ((min(236, 0))) : ((+((var_4 ? (arr_6 [i_0] [i_1 + 1] [i_3]) : (arr_5 [i_0] [i_0] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 13;i_6 += 1)
        {
            {
                var_15 ^= (max((arr_1 [i_6] [i_5]), ((1 ? 0 : 1))));
                var_16 = (min(var_16, var_2));

                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_17 = ((7955733335979519493 ? ((((min(0, (arr_5 [i_5 - 1] [i_6] [i_7])))) ? 1 : 1)) : 1));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_18 = ((!((((arr_27 [i_5] [i_5 - 2] [i_7] [i_8] [i_5]) ? var_12 : (arr_1 [7] [i_6]))))));
                                arr_29 [i_5] [i_6] [i_5] [i_6] [i_9 - 1] = ((((!(arr_17 [i_9] [i_9 - 1]))) ? (((!(arr_1 [i_6] [i_9 - 1])))) : ((min((arr_28 [13] [i_6] [i_6 + 2] [i_6 + 1] [i_9]), (arr_28 [i_6] [i_6] [i_6] [i_6 - 1] [i_6 + 2]))))));
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    var_19 = ((~(arr_13 [i_5] [i_6] [i_10] [i_6] [i_10])));
                    arr_32 [i_10] [i_6 + 2] [i_5] = (((arr_4 [i_5]) ? (((arr_4 [i_5]) ? (arr_4 [i_5]) : (arr_4 [9]))) : ((91 ? 1 : 111))));
                    var_20 = (arr_19 [i_5 - 3]);
                }
                for (int i_11 = 1; i_11 < 12;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 14;i_13 += 1)
                        {
                            {
                                var_21 = (arr_17 [i_5 - 2] [i_6 - 3]);
                                var_22 = max((arr_5 [i_5] [16] [16]), (((!((((arr_9 [i_13] [i_12] [i_11] [i_5]) ? (arr_13 [i_5] [i_6] [i_11] [i_12] [i_13]) : var_10)))))));
                                var_23 = (min(var_23, ((((arr_18 [i_6 + 1] [i_11 + 1] [i_11]) ? (arr_18 [i_11 + 1] [i_12 - 1] [5]) : ((min(-53, 1))))))));
                            }
                        }
                    }
                    arr_41 [i_11] [i_6] [i_6] [i_5 + 2] = ((((((((var_10 ? var_13 : (arr_34 [i_5] [2] [9])))) ? (((arr_0 [i_5] [i_5]) ? (arr_28 [i_11 + 3] [i_6] [i_11 + 3] [i_6 + 1] [i_11 + 2]) : (arr_23 [i_5 - 1] [i_6] [i_6] [i_11]))) : (arr_26 [i_11] [i_6] [i_6] [i_6] [i_5])))) ? ((160496420 ? (max(1, (arr_2 [i_5]))) : 1)) : var_11));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 22;i_15 += 1)
        {
            {
                var_24 ^= (max((((arr_48 [i_15] [i_14] [i_14]) ? (arr_48 [i_14] [i_15] [i_14]) : (arr_48 [i_14] [i_14] [i_15]))), (arr_48 [i_14] [10] [i_14])));
                var_25 &= (((arr_45 [i_14]) ? (((max((arr_44 [i_15]), (arr_47 [i_15]))))) : var_11));
            }
        }
    }
    #pragma endscop
}
