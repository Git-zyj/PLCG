/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_5 ? (((112 ? -1855686600 : 1))) : ((((((var_4 + 9223372036854775807) << (((var_16 + 1735808861) - 61))))) ? ((var_17 << (var_18 - 8218217700507576081))) : var_1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (arr_2 [i_0]);
                arr_7 [i_0] [i_0] [i_0] = ((((((((((arr_5 [i_0] [i_1] [i_1]) >= var_13)))) == ((~(arr_5 [19] [i_1] [i_1])))))) >> ((((((((arr_5 [i_0] [18] [i_0]) + (arr_2 [i_0])))) ? (arr_1 [i_0]) : ((var_0 + (arr_1 [i_1]))))) - 83))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_21 = (((((-(arr_3 [i_0])))) ? (((arr_3 [i_0]) ? (arr_3 [i_2]) : (arr_3 [i_0]))) : ((((!(arr_3 [i_0])))))));
                    arr_10 [i_1] [i_2] [i_2] [i_0] = (-(((((((arr_9 [i_1] [i_1] [13] [i_1]) ? (arr_9 [i_2] [i_1] [i_1] [i_0]) : (arr_5 [i_0] [i_1] [i_0])))) || (arr_8 [i_2] [i_1] [i_1] [i_1])))));
                    var_22 = var_5;
                    var_23 = (((!(((~(arr_1 [i_0])))))));
                    arr_11 [i_0] [i_2] [i_0] [i_2] = (arr_1 [i_1]);
                }
                arr_12 [i_0] [i_1] [i_1] = (arr_2 [i_0]);
            }
        }
    }
    var_24 = ((var_17 % (max(-var_8, -var_12))));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_25 = ((~(arr_0 [i_3])));
        var_26 = ((((((arr_5 [i_3] [i_3] [i_3]) ? (arr_1 [i_3]) : (arr_3 [i_3])))) ? (arr_5 [i_3] [i_3] [i_3]) : -175));
        arr_15 [i_3] = (arr_4 [i_3] [i_3]);

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_27 = (arr_16 [7] [i_4] [17]);
            var_28 = (((((!(arr_18 [i_3])))) << (((arr_13 [i_3] [i_4]) - 8401484434181060479))));
            var_29 = ((-(((arr_9 [i_3] [i_3] [i_3] [14]) ? var_18 : var_8))));
            var_30 = ((-(arr_9 [i_4] [i_4] [i_3] [i_3])));

            for (int i_5 = 2; i_5 < 23;i_5 += 1)
            {
                var_31 = (((arr_21 [i_5 - 2] [i_5 - 1] [i_4] [i_5 + 1]) + (!var_1)));
                arr_23 [i_4] [i_4] [i_4] = ((!(1855686583 || 1205214997)));
            }
            for (int i_6 = 2; i_6 < 23;i_6 += 1)
            {
                arr_26 [i_4] [i_6] [i_6 - 2] [i_6 - 2] = (arr_20 [i_3] [i_4] [i_6] [i_6]);
                var_32 = (((((var_11 ? var_16 : (arr_25 [i_6] [i_4] [i_3])))) ? (arr_8 [i_4] [i_6] [i_6 - 1] [i_4]) : (((arr_20 [i_3] [i_4] [i_3] [i_6]) / var_6))));
                var_33 = (!(!var_8));
                arr_27 [i_4] [i_3] [11] [i_3] = ((((((arr_4 [i_3] [i_3]) >> (arr_16 [i_6 + 1] [i_4] [i_3])))) + (((arr_3 [i_4]) ? var_2 : var_4))));
            }
        }
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            var_34 = (arr_30 [i_7]);
            var_35 = ((!(arr_31 [i_3])));
        }
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 21;i_8 += 1)
    {
        var_36 = (!var_19);
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    {
                        var_37 = (+(((arr_21 [i_8] [i_9] [i_9] [i_11]) ? (arr_24 [i_8] [i_8] [i_10] [i_11]) : (arr_37 [i_8] [i_9] [i_9] [i_11]))));
                        arr_41 [i_8] [i_9] [i_10] [i_8 - 1] = (((((arr_31 [i_8]) - (arr_30 [i_9]))) << (!var_16)));
                        var_38 = ((-(((arr_20 [19] [i_9 + 1] [i_9 + 1] [i_11]) >> (arr_22 [i_8] [i_8] [9] [i_8])))));
                        var_39 = var_2;
                    }
                }
            }
        }
    }
    #pragma endscop
}
