/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (min(18522, (max(((var_0 ? 0 : 9)), var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = 6;
                arr_5 [i_0] = ((51 ? -1 : 121));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 -= ((+(((arr_4 [i_3 + 1] [i_1]) ? 2147483647 : (arr_2 [i_3 - 1])))));
                                var_19 *= -20097;
                                var_20 = var_14;
                                arr_15 [i_1] [i_3 + 1] = (((arr_10 [i_0] [5] [i_2] [i_3 - 3] [i_4] [i_4]) == (arr_14 [i_4] [i_4] [i_3 + 1] [i_3 - 4])));
                            }
                        }
                    }
                    var_21 = ((19801 >= ((127 ? 2801675922 : (arr_8 [i_0] [2] [i_1] [i_2])))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_22 = var_6;
                    var_23 = (max(var_23, ((((arr_3 [i_0] [i_1] [i_5]) == 6)))));
                }
                /* vectorizable */
                for (int i_6 = 4; i_6 < 9;i_6 += 1)
                {
                    var_24 = (arr_18 [i_6] [i_6 + 1] [6] [i_6 + 2]);
                    arr_21 [i_6 + 1] [i_1] = ((~((124 ? (arr_6 [i_0] [5]) : (arr_0 [i_0])))));
                    arr_22 [i_0] [i_1] [i_6 + 3] = 4045242820;
                }
                var_25 = (min(((min((arr_3 [i_1] [i_0] [i_0]), (arr_3 [i_0] [i_1] [i_0])))), 2697990767));
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 2; i_7 < 16;i_7 += 1)
    {
        var_26 = (arr_24 [i_7] [i_7 + 1]);
        var_27 = (arr_24 [i_7] [i_7]);
        arr_26 [15] [i_7] = 127;
        var_28 = -106;
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                {
                    var_29 = (max((arr_31 [i_9 - 3] [i_9]), ((var_2 / (arr_32 [i_9 + 2] [i_9] [i_10])))));
                    arr_34 [i_8] [i_9] = (arr_29 [i_8]);
                }
            }
        }
        var_30 = (max(var_30, (((524659604393886376 ? ((~((min((arr_32 [i_8] [7] [i_8]), (arr_31 [i_8] [i_8])))))) : ((max((arr_33 [i_8] [1] [i_8] [i_8]), 140))))))));
        var_31 = (max(var_31, var_13));
        arr_35 [i_8] = (max((arr_28 [i_8]), ((32 ^ (arr_32 [i_8] [i_8] [0])))));
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        arr_40 [i_11] = ((var_3 ? (max((arr_37 [i_11]), (arr_39 [i_11]))) : 33027));
        var_32 = 2697990764;
    }
    for (int i_12 = 0; i_12 < 10;i_12 += 1)
    {
        var_33 = 33027;
        var_34 &= (((((((arr_18 [i_12] [i_12] [i_12] [i_12]) - (arr_10 [i_12] [i_12] [11] [i_12] [i_12] [i_12]))) ^ -var_2)) >> (((arr_42 [i_12]) - 36973))));
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 9;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 8;i_14 += 1)
            {
                {
                    arr_48 [i_13] [i_13] [2] [i_13] = (max(((((((arr_36 [i_12] [i_12]) ? -4 : (arr_24 [i_13 + 1] [i_14]))) <= (((max(-4, 0))))))), ((var_7 << (36944 - 36935)))));
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 7;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 10;i_16 += 1)
                        {
                            {
                                var_35 = (((((((((arr_18 [4] [i_13 - 2] [i_13] [i_13]) <= 18475))) * -6))) ? var_10 : 2640952336));
                                arr_53 [i_12] [i_13 - 2] [i_14 - 1] [i_15 + 3] = ((54266 ? (((((0 ? 2640952336 : (arr_2 [i_12])))) ? var_8 : (arr_24 [i_12] [i_12]))) : (~var_10)));
                                var_36 &= (min((arr_47 [i_15 + 1] [i_14] [i_14] [i_13 - 2]), (max((arr_47 [i_15 + 1] [i_14] [i_14] [i_13 - 2]), (arr_47 [i_15 + 1] [i_14] [i_13] [i_13 - 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
