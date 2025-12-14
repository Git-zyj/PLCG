/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 ^= (max((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), (!var_5)));
        arr_2 [i_0] [i_0] = ((!(((arr_0 [i_0] [i_0]) <= (arr_1 [i_0] [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_1 + 1] [i_2] [i_3] [i_2] = (min((arr_6 [i_1] [i_1] [i_1 - 2] [0]), -var_8));
                        var_18 ^= (arr_5 [i_0] [i_0] [i_0] [i_0]);
                        arr_10 [i_0] [i_1] [i_1] [i_3] = ((min((min((arr_3 [i_0] [i_1 - 1]), var_2)), (arr_3 [i_1] [i_3]))));
                        var_19 = var_12;
                    }
                }
            }
        }
        var_20 &= (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]);
        arr_11 [i_0] = (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = (arr_12 [i_4]);
        var_21 *= var_14;
    }

    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_19 [i_5] &= (max(1771867315, (min(var_13, (arr_12 [i_5])))));
        var_22 &= (max((arr_1 [i_5] [i_5]), (arr_1 [i_5] [i_5])));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 16;i_6 += 1)
    {
        var_23 *= ((var_7 ? (arr_8 [i_6 + 1] [i_6] [i_6] [i_6 - 1] [i_6]) : (!var_13)));
        var_24 = ((~(arr_7 [i_6] [i_6 + 1] [i_6 - 1])));
        arr_23 [i_6 + 1] = (!(arr_12 [i_6 - 1]));
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_25 = 3624;
        arr_27 [i_7] = (arr_24 [i_7]);
        var_26 = var_5;
    }

    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        var_27 = (max(((((arr_14 [i_8]) - (arr_24 [i_8])))), (min((var_13 - var_4), (arr_12 [i_8])))));
        var_28 *= (min((((-(arr_28 [2]))), (max(var_13, (arr_12 [i_8]))))));
    }
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        var_29 = (!var_11);
        arr_34 [i_9] = ((((max((min((arr_26 [i_9] [i_9]), (arr_21 [i_9] [i_9]))), ((-(arr_3 [i_9] [i_9])))))) || ((max(var_5, (arr_13 [i_9] [i_9]))))));
        /* LoopNest 2 */
        for (int i_10 = 4; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    var_30 = (arr_36 [i_11] [i_10 - 4] [i_9]);
                    /* LoopNest 2 */
                    for (int i_12 = 3; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 16;i_13 += 1)
                        {
                            {
                                var_31 = (min(((max((min((arr_28 [i_9]), var_6)), var_2))), (arr_31 [i_11] [i_11])));
                                var_32 += (min(var_0, ((!((!(arr_41 [i_9])))))));
                                var_33 |= ((var_9 ? (max((arr_0 [i_10 - 4] [i_10 - 2]), (arr_0 [i_10 - 4] [i_10 - 2]))) : ((((!((min((arr_31 [i_10] [i_10]), (arr_35 [i_12] [i_10] [i_12]))))))))));
                                arr_45 [i_9] [i_9] [i_9] [i_9] [i_9] |= var_2;
                                var_34 = ((+(min((arr_5 [i_10 + 2] [1] [i_10] [i_12 - 3]), var_8))));
                            }
                        }
                    }
                    var_35 = ((!((min((arr_38 [i_9] [i_9] [i_10 - 4] [i_10 - 1]), var_7)))));
                }
            }
        }
    }
    #pragma endscop
}
