/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] = ((((((arr_4 [i_1 - 1]) ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 - 1])))) && (arr_0 [i_1] [i_0])));
                var_11 = (max(var_11, ((max(var_3, (min((arr_0 [i_1] [i_0]), var_1)))))));
                arr_8 [i_0] = ((+((var_10 << (((arr_4 [i_0]) + 160))))));
                arr_9 [i_0] [i_1] = arr_6 [i_1];
            }
        }
    }

    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] [i_2] = ((-24290 ? ((~((min(-1, -8))))) : 32645));
        arr_14 [i_2] = (max(((-26202 ? -8 : 1)), 12));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        arr_18 [i_3] [i_3] = var_7;
        var_12 = (var_2 ? var_4 : (arr_15 [i_3]));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_13 *= (((arr_21 [i_4]) ? 0 : (arr_15 [i_4])));

        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            var_14 = (arr_15 [i_5]);
            var_15 = (min(var_15, var_8));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_16 = (((arr_0 [i_4] [i_5]) >> (((((((-127 - 1) || (arr_26 [i_4] [i_8] [i_7] [i_7]))) ? ((~(arr_30 [i_4] [i_7] [i_6] [i_7] [i_8]))) : (((arr_10 [i_4]) ? var_1 : (arr_28 [i_4] [i_5] [i_6] [i_7] [i_8] [i_8]))))) + 29))));
                            var_17 = (min(var_17, ((((((max(var_0, (arr_17 [2] [2]))))) % ((54 ? (((arr_25 [i_5] [i_8]) - var_4)) : (arr_0 [i_5] [i_8]))))))));
                            arr_31 [i_7] [i_5] [i_6] [i_8] = (((((arr_25 [i_4] [i_5 - 1]) == -24290)) ? ((((var_9 && (var_10 >> 1))))) : ((12 & (var_10 ^ 1)))));
                            arr_32 [i_7] [i_5] [i_5] [i_5] [i_5] [i_5] = ((50298 == (64 & 19904)));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                {
                    arr_38 [i_10] [i_9] [i_4] [i_4] = ((((((13 ? 17150606762903192937 : (arr_5 [i_10] [i_9] [i_4])))) ? var_7 : var_4)));

                    for (int i_11 = 2; i_11 < 18;i_11 += 1)
                    {
                        arr_42 [i_4] [i_9] [i_10] [i_11] = ((((arr_29 [i_10] [i_10] [i_9] [i_11 + 1] [i_11] [i_11 - 1]) >= (arr_29 [i_11] [i_11] [i_9] [i_11 - 2] [i_11] [i_11 + 1]))));
                        var_18 *= ((var_9 == (arr_39 [i_10] [i_11 - 1] [i_11] [i_11 - 2] [i_11 - 2])));
                    }
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        var_19 = (max(var_19, (((~((((arr_41 [i_4] [i_9] [i_10] [i_9] [i_12]) || var_0))))))));
                        var_20 = (arr_26 [i_4] [i_9] [i_10] [i_12]);
                        var_21 = 1;
                    }
                }
            }
        }
    }
    for (int i_13 = 3; i_13 < 16;i_13 += 1)
    {
        arr_48 [i_13] = ((((min(var_4, var_6))) ? -var_4 : (((max(-55, (arr_25 [i_13] [i_13])))))));
        arr_49 [i_13] = ((((((((-(arr_17 [14] [i_13])))) ? ((var_8 ? var_4 : 32645)) : ((-(arr_2 [i_13])))))) ? (max((max(8415, (arr_6 [i_13]))), ((min(var_9, (arr_4 [i_13])))))) : (arr_29 [i_13] [i_13] [8] [i_13] [i_13] [i_13])));
        var_22 = (((((arr_1 [i_13] [i_13 + 1]) ? var_1 : (arr_27 [i_13] [i_13] [i_13] [i_13] [i_13]))) / ((min(24305, -24306)))));
    }
    var_23 = (min(var_23, var_7));
    var_24 = (min(var_24, ((min((max((max(14292732633293325250, var_6)), ((((-2 + 2147483647) << (1 - 1)))))), var_3)))));
    var_25 = (min(var_25, -var_1));
    #pragma endscop
}
