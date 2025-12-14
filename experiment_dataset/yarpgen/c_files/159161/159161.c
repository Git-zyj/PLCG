/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((66 / (((((var_2 ? var_3 : var_1))) ? ((96 ? var_0 : var_9)) : ((min(var_4, var_0)))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = (max(var_15, ((((arr_2 [i_0]) || 64)))));
        var_16 *= ((((min(((-(arr_1 [i_0]))), (((!(arr_3 [i_0]))))))) ? (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : ((((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) ? (!var_9) : var_6))));
        arr_4 [1] = (min((min(-123, (((arr_3 [i_0]) ? var_13 : (arr_1 [i_0]))))), ((min(-115, -112)))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_17 *= (((arr_1 [i_1 + 1]) ? var_11 : 123));
        arr_7 [i_1] = (arr_5 [i_1]);
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                {
                    var_18 = arr_11 [2] [i_2];
                    var_19 = ((~((var_7 ? var_13 : ((30 ? (arr_16 [i_2] [9] [i_2] [i_2]) : (arr_12 [i_2] [i_2] [i_4])))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                {
                    var_20 = var_13;

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_26 [i_6] [i_6] [16] [i_2] = 7;
                        var_21 -= 122;
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                    {
                        var_22 = (((arr_19 [i_6 - 1]) ? (~var_12) : -87));
                        var_23 = (min(var_23, (!-36)));
                        var_24 = (max(var_24, ((((((var_6 ? (arr_11 [7] [i_8]) : (arr_28 [i_2] [i_5 - 3] [i_6] [i_8])))) ? (arr_13 [i_6]) : (arr_25 [i_2] [i_5] [i_6] [i_8]))))));

                        for (int i_9 = 1; i_9 < 13;i_9 += 1)
                        {
                            arr_33 [i_2] [i_2] [11] [8] [i_6] [i_8] [i_6] = arr_11 [i_5 + 3] [8];
                            var_25 = ((((-28 ? var_7 : -7)) <= -109));
                            arr_34 [i_6] [i_6] [i_6] [i_6 + 2] [13] |= ((-65 ? (arr_32 [i_2] [i_5] [i_6] [12] [i_9]) : (arr_31 [i_9] [i_9 - 1] [i_9 + 2] [i_9 + 1] [i_9 - 1])));
                        }
                        for (int i_10 = 1; i_10 < 15;i_10 += 1)
                        {
                            var_26 = (max(var_26, ((((arr_28 [i_2] [i_2] [13] [i_2]) ? var_2 : var_1)))));
                            var_27 = ((var_13 ? -80 : ((61 ? 76 : var_13))));
                        }
                        arr_39 [i_5] [6] [5] [i_5] = ((-62 ? 53 : -53));
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                    {
                        var_28 = (max(((max(-96, -9))), ((-((max((arr_41 [i_2] [i_2] [12] [i_6] [i_2]), (arr_29 [i_2] [i_5] [4] [i_5] [2]))))))));
                        var_29 ^= max(((((arr_40 [i_2] [i_6]) >= 58))), (max((max((arr_8 [i_5]), var_1)), var_0)));
                        var_30 = ((-(!-25)));
                    }
                }
            }
        }
        var_31 = (((arr_30 [7] [i_2] [i_2] [i_2] [i_2] [14] [i_2]) ? ((max(-123, 80))) : ((min((-127 - 1), (min(33, (arr_8 [16]))))))));
        arr_43 [i_2] = ((-(arr_14 [i_2] [i_2] [4])));
        arr_44 [4] = arr_10 [i_2] [3];
    }
    #pragma endscop
}
