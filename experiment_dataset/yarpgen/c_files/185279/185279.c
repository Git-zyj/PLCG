/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((var_3 ? ((max(var_5, var_7))) : 3840)))));
    var_11 = (min(var_11, ((min(1137272680, 41617)))));
    var_12 |= var_4;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_13 = (max(((+((max((arr_4 [i_0] [i_0] [i_2]), (arr_6 [i_0])))))), ((-(arr_1 [i_0])))));
                    var_14 = ((var_7 ? (((var_0 <= (arr_4 [i_2] [i_0] [i_2])))) : (~var_4)));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_15 = (min(var_15, (((((~(arr_5 [i_0]))) <= (min(((min(1, (arr_10 [22] [22] [22] [i_3])))), ((2782857868003592970 ? (arr_5 [i_2]) : var_7)))))))));
                        var_16 = (max(var_16, (max((max((arr_5 [i_1 + 3]), (arr_0 [i_0 + 2]))), 1))));
                        var_17 -= (max((arr_2 [1] [i_3]), var_2));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            var_18 = (max(var_18, (arr_10 [8] [8] [i_4] [20])));
                            arr_16 [i_0] [i_1] [i_2] [i_4 - 1] [i_0] = (arr_4 [7] [i_0] [i_0]);
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_19 *= (((arr_5 [i_4 - 1]) <= var_2));
                            var_20 = var_7;
                        }
                        var_21 = (min(var_21, (arr_13 [i_2] [i_2 - 1] [i_2] [i_2] [i_2 - 1])));
                    }
                    var_22 += (max((((arr_4 [i_0 + 1] [22] [i_2]) / (arr_17 [i_1] [i_1] [i_2] [i_2] [i_2] [i_2 - 1] [0]))), var_1));
                }
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    arr_23 [i_0] [i_0] [i_0] [i_0] = ((((arr_10 [i_0] [i_0] [i_0 + 2] [i_0]) ? (arr_10 [i_0] [18] [18] [i_1 + 2]) : (arr_10 [i_0] [i_0] [i_7 - 1] [i_7 - 1]))));
                    var_23 = (max(var_23, ((((arr_20 [i_7] [16] [i_7 + 1]) <= ((-(arr_8 [22] [22] [i_7] [0]))))))));
                    var_24 = (min(var_24, ((min(((min((arr_7 [16]), (arr_7 [18])))), var_8)))));
                }

                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    var_25 ^= ((((((max((arr_2 [2] [i_1]), var_2)) <= (arr_25 [i_0 - 3] [18] [i_0 + 2] [i_0 + 1])))) <= (arr_10 [4] [i_1] [16] [i_1])));
                    var_26 = (max(var_26, 1));
                    var_27 = (min(var_27, (!var_7)));
                    var_28 = (min(var_28, (arr_8 [4] [4] [i_8] [4])));
                }

                /* vectorizable */
                for (int i_9 = 1; i_9 < 23;i_9 += 1)
                {
                    arr_29 [i_0] = (!var_5);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 23;i_11 += 1)
                        {
                            {
                                var_29 ^= var_6;
                                arr_35 [i_11] [i_10] [18] [i_9] [18] [2] [2] |= 227;
                            }
                        }
                    }
                    var_30 = (max(var_30, (((~(arr_31 [i_0 + 1] [1] [i_9 - 1]))))));
                    var_31 = var_5;
                    var_32 = (min(var_32, 2782857868003592970));
                }
            }
        }
    }
    var_33 &= (((-72 <= -36) <= ((min(19, 61683)))));
    #pragma endscop
}
