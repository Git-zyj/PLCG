/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 -= ((max(8064, 1855365007)));
        arr_4 [i_0] [i_0] &= (((arr_2 [i_0]) ? (arr_2 [i_0]) : 32765));
        var_14 += (arr_3 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_13 [i_1] [i_2] [i_1] [i_1] = 31;

                        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                        {
                            var_15 -= -32765;
                            var_16 = (((min(59, (arr_6 [i_1])))) >> (arr_10 [i_1]));
                            var_17 += ((((((-10596 / 225) ? (~-24702) : 781936061))) ? (((!(arr_8 [i_0] [i_1 - 2] [i_2])))) : ((~((var_8 ? (arr_11 [i_0] [i_0] [i_2] [i_0] [i_0] [i_4]) : (arr_10 [10])))))));
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            var_18 = (max(var_18, ((min((arr_7 [i_3] [i_3]), (((!(arr_7 [i_5] [i_1])))))))));
                            var_19 -= (arr_9 [i_0] [14] [i_1 + 1] [i_0]);
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_20 = ((((((-((65515 ? 246 : 3560471886603355152)))) + 9223372036854775807)) >> (((!(((arr_18 [i_0] [i_0]) || (arr_2 [i_0]))))))));
                            arr_22 [i_1] [5] [i_2] [i_3] [i_6] = (arr_6 [i_1]);
                            arr_23 [i_0] [i_3] [i_2] [i_3] [i_3] [i_1] = var_6;
                            var_21 = ((!(((32766 ? (arr_3 [i_1 - 3]) : var_12)))));
                        }
                        var_22 = ((!(((-(arr_21 [i_0] [i_1 + 1] [i_1 + 1] [i_3] [i_0] [i_3] [i_3]))))));
                        arr_24 [i_1] = (arr_12 [i_1] [i_3]);
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 15;i_9 += 1)
            {
                {
                    var_23 = (arr_25 [8] [i_8]);
                    var_24 = (min(var_24, 3724045467));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            {
                                arr_38 [i_7] [i_8] [i_8] [i_10] [2] [i_8] [i_11] = (((!239) ? (((!(arr_31 [i_7] [4] [i_7] [i_7])))) : (arr_32 [12] [i_8])));
                                arr_39 [i_11] [i_11] [7] [i_11] [i_7] = ((min(var_3, ((((arr_32 [i_8] [i_8]) ? (arr_32 [8] [i_11]) : var_11))))) << (arr_29 [i_11]));
                                var_25 = (((((arr_33 [i_9 - 4] [i_9] [i_9 - 4] [5]) << (arr_33 [i_9 - 4] [i_9] [4] [i_9 - 4])))) ? ((7 ? (arr_34 [i_9 - 4] [i_9 - 4] [i_9] [i_9] [i_9 - 2] [i_9 - 3]) : (arr_34 [i_9 - 4] [i_9] [i_9] [i_9] [i_9 - 2] [i_9 - 3]))) : ((max((arr_34 [i_9 - 4] [16] [16] [i_9] [i_9 - 2] [i_9 - 3]), (arr_34 [i_9 - 4] [i_9] [i_9] [i_9 - 4] [i_9 - 2] [i_9 - 3])))));
                            }
                        }
                    }
                }
            }
        }
        arr_40 [i_7] [i_7] = (arr_35 [i_7]);
    }
    for (int i_12 = 2; i_12 < 10;i_12 += 1)
    {
        arr_44 [i_12] = ((((arr_28 [i_12] [i_12]) / (arr_25 [i_12 + 1] [i_12 - 2]))));
        var_26 ^= (((var_3 ? (arr_16 [14] [i_12 - 2] [i_12 - 1] [0] [i_12] [0]) : (arr_16 [2] [i_12 - 2] [i_12 - 1] [8] [6] [i_12]))));
        var_27 = (min(var_27, ((((-4865985474906992697 ? 194 : (arr_35 [5])))))));
    }
    var_28 = var_3;
    var_29 = (min(var_29, ((((((-9223372036854775807 - 1) == ((var_11 ? var_7 : -32756)))) ? (((var_4 / ((225 ? 105 : var_11))))) : var_2)))));
    #pragma endscop
}
