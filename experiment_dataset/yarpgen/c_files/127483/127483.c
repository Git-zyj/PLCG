/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_0);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_2] [i_0] = (((((arr_6 [i_1 + 2] [i_0]) ? (arr_8 [i_0] [i_1] [i_0]) : (arr_9 [i_0] [i_0] [i_0] [i_2]))) / (arr_4 [i_0] [i_1 - 1] [i_1 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 = (((((arr_8 [i_0] [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_12 [i_0]))) >= (arr_13 [i_0] [i_1 + 2] [i_2])));
                                var_20 = ((!(arr_12 [i_0])));
                                var_21 = (((arr_11 [i_0] [i_3 - 2]) ? (arr_2 [i_1 - 2] [i_0]) : ((((arr_4 [i_0] [i_1] [i_2]) > (arr_2 [i_2] [i_0]))))));
                                var_22 = ((69 || (((~(arr_4 [i_0] [i_0] [i_4]))))));
                            }
                        }
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            arr_19 [i_0] = ((69 <= (-127 - 1)));
            arr_20 [i_0] [i_0] [i_5] = (((arr_18 [i_0]) ? (((!(arr_6 [i_0] [i_0])))) : (arr_6 [i_0] [i_0])));
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                var_23 = (max(var_23, (arr_3 [i_0] [i_7] [i_0])));
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            var_24 -= ((-(arr_30 [i_0] [12] [i_0] [i_8] [i_8] [i_7])));
                            var_25 &= ((~(((arr_4 [i_7] [i_8] [i_8]) % (arr_6 [i_6] [i_7])))));
                            arr_34 [i_0] [i_6] [i_0] [i_0] = (((arr_13 [i_0] [i_7] [i_8 + 2]) ? (arr_13 [i_0] [i_8] [i_8 - 1]) : (arr_13 [i_0] [6] [i_8 - 3])));
                            var_26 = ((-(arr_4 [i_0] [i_6] [i_9])));
                        }
                    }
                }
                var_27 = (max(var_27, ((((arr_5 [i_7] [i_7] [i_7]) || (((-(arr_16 [i_7])))))))));
                arr_35 [i_0] [i_6] [i_0] [i_6] = (arr_8 [i_0] [i_6] [i_0]);
            }
            for (int i_10 = 3; i_10 < 19;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 20;i_12 += 1)
                    {
                        {
                            arr_46 [i_0] [i_6] [i_10] [i_0] [i_10] [i_12] = (((((arr_25 [11] [11] [i_10] [i_0]) & (arr_41 [i_0] [i_0]))) / (arr_21 [i_0] [i_10] [i_12 - 1])));
                            arr_47 [i_0] = ((-32730 ? ((69 ? 69 : -32)) : (arr_44 [i_0] [i_10 + 2] [i_10 - 2] [i_10 - 3])));
                            var_28 = (max(var_28, ((((arr_15 [i_11] [i_0] [i_0] [i_0] [i_6]) % (arr_15 [i_11] [i_11] [i_11] [i_11] [i_12 - 1]))))));
                            arr_48 [i_0] [i_6] [i_10] [i_11] [i_0] = (arr_32 [i_0] [i_10] [i_11] [i_12]);
                            var_29 = (max(var_29, ((((arr_42 [i_6] [i_11] [i_12 - 1] [i_12 + 1]) >= (arr_39 [i_11] [i_10 - 1] [i_12 + 1] [i_12 + 1]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        {
                            var_30 = ((((arr_25 [i_0] [11] [11] [i_0]) / (arr_39 [i_0] [i_0] [i_0] [i_13]))));
                            arr_55 [i_0] [i_0] = ((!(arr_29 [i_0] [i_6] [i_0] [i_0])));
                        }
                    }
                }
            }
            arr_56 [i_0] [i_0] = (arr_41 [i_0] [i_6]);
            var_31 *= (((((((arr_24 [i_0] [i_0] [8]) < (arr_52 [i_0] [18] [18] [i_0] [i_6]))))) % (arr_42 [i_0] [18] [i_0] [i_6])));
            var_32 = (arr_14 [i_0] [i_0] [i_0] [i_0] [i_6]);
            var_33 = (((arr_53 [i_0] [i_0] [i_6] [i_0] [i_6]) >= (arr_53 [10] [i_6] [i_6] [i_0] [i_6])));
        }
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            arr_59 [i_0] [i_15] = ((arr_30 [i_0] [11] [11] [i_15] [5] [i_0]) ? (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_40 [i_0] [i_0] [i_0] [i_0]));
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 21;i_17 += 1)
                {
                    {
                        var_34 = (arr_54 [i_0] [i_0] [i_16] [i_16] [i_17]);
                        var_35 |= (((arr_31 [i_17]) ^ (arr_31 [i_17])));
                    }
                }
            }
        }
        var_36 = ((-((-(arr_61 [i_0])))));
    }
    #pragma endscop
}
