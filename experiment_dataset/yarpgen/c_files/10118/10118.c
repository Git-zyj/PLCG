/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    var_18 ^= arr_5 [i_2] [i_2 + 1] [i_0] [2];
                    var_19 = (arr_2 [i_2] [i_1]);
                }
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_20 = var_16;
                                var_21 = (min((min((min(var_15, (arr_0 [i_1] [12]))), ((min(var_13, (arr_13 [i_3] [i_3] [i_3])))))), (arr_7 [i_3])));
                                var_22 *= (arr_14 [6] [i_4 + 1] [i_5 + 1] [i_0] [i_4]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_23 = (min(var_23, (arr_12 [i_1] [i_6] [8] [i_1])));
                                arr_20 [i_0] [16] [i_3] [i_6 + 1] [i_7] = (min((((min(var_5, (arr_5 [i_7] [i_3] [i_3] [i_0]))))), (min((arr_15 [i_3]), (max(var_2, (arr_12 [i_3] [i_1] [i_6] [i_7])))))));
                            }
                        }
                    }
                    arr_21 [i_3] [i_1] = (arr_16 [6] [i_3 - 2] [i_3] [12] [i_3]);
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 0;i_8 += 1)
                {
                    var_24 = (arr_10 [i_0] [i_0] [i_0] [i_0]);
                    var_25 = (min(var_25, var_16));
                    arr_26 [0] [i_1] = (arr_8 [i_8 + 1] [i_8 + 1]);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_26 *= var_16;
                                var_27 = (min(var_27, var_12));
                                var_28 -= (arr_24 [i_0] [i_8 + 1] [i_10 + 1] [9]);
                            }
                        }
                    }
                    arr_31 [i_0] = var_3;
                }

                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    arr_34 [i_11] [i_1] [i_1] [i_11] = var_9;

                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        var_29 += (arr_18 [14] [i_0] [i_0] [i_0]);
                        var_30 ^= ((min((arr_8 [i_1] [i_12]), (arr_19 [i_1]))));
                        arr_37 [i_0] [i_1] [i_11] [i_12] &= (max(var_13, (min(((max((arr_12 [i_1] [i_11] [i_1] [i_1]), (arr_22 [i_0])))), var_11))));
                    }
                    arr_38 [13] [i_11] [13] = (min((arr_23 [i_0] [i_1] [i_11] [i_11]), (arr_12 [i_0] [i_1] [i_11] [i_11])));
                    arr_39 [i_0] [i_1] [i_11] [18] |= (max((arr_33 [1]), var_1));
                }
                var_31 -= var_13;
                arr_40 [i_0] [i_1] [i_1] = (arr_5 [i_1] [i_0] [i_0] [i_0]);
            }
        }
    }
    var_32 |= var_7;
    var_33 = (min((max(var_0, ((max(var_8, var_7))))), (min(var_11, ((min(var_16, var_5)))))));
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 23;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {
                {
                    var_34 = var_0;
                    arr_49 [i_13] [2] [i_14] [i_15] = (max((arr_46 [i_13] [i_14] [i_14] [i_13]), (arr_46 [i_15] [i_14] [i_13] [i_13])));
                    var_35 = (min((max(11445873572955907554, (arr_41 [i_13] [i_13]))), (arr_41 [i_13] [i_15])));
                }
            }
        }
    }
    #pragma endscop
}
