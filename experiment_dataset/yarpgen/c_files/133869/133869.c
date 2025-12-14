/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (!var_7)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= (max(-112, (arr_0 [i_0])));
        var_16 = ((3584 / ((max(-3600, -85)))));
        var_17 ^= (min(((((max((arr_0 [i_0]), (arr_0 [11])))) ? var_14 : (arr_0 [i_0]))), (((80 ? -3600 : (var_13 + var_4))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_18 = (+-18446744073709551615);
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    arr_13 [i_2 + 1] [i_2 + 1] = ((~(((max((arr_4 [i_1]), var_0))))));
                    var_19 = 3582;
                    var_20 = (min(((((-21922 & 37) | ((min(-32762, var_6)))))), (((4294881399 ^ -109) ^ (((max((arr_6 [i_1]), 16))))))));
                }
            }
        }

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_21 = (max((((arr_3 [13]) ? (((min(var_11, (arr_12 [i_1] [i_1] [i_4]))))) : (max(var_11, var_12)))), ((max(var_5, -3600)))));
            arr_16 [i_4] = (arr_14 [i_1] [i_4]);
        }
        var_22 = (max((((arr_12 [i_1] [i_1] [i_1]) ? (arr_12 [i_1] [i_1] [i_1]) : (arr_12 [i_1] [i_1] [i_1]))), (((((var_10 ? (arr_14 [i_1] [i_1]) : (arr_5 [i_1] [i_1])))) ? (arr_12 [i_1] [i_1] [1]) : ((var_2 | (arr_15 [13])))))));
        var_23 += ((+(((84 | var_8) ? (arr_15 [i_1]) : (!var_8)))));
    }
    var_24 = var_0;
    var_25 = var_0;

    for (int i_5 = 1; i_5 < 8;i_5 += 1)
    {
        arr_19 [i_5 + 2] [i_5] = (min((arr_0 [i_5 - 1]), var_4));

        for (int i_6 = 3; i_6 < 9;i_6 += 1)
        {
            var_26 = ((((max((arr_17 [i_6 - 2]), (arr_17 [i_6 + 1])))) ? (arr_21 [i_6] [i_5] [6]) : ((max(var_10, (((arr_20 [i_6]) & var_12)))))));
            var_27 = ((var_14 ? (((min(var_6, var_10)))) : 6104));
            arr_22 [i_6] = arr_8 [i_5] [i_6 - 2];
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_25 [i_7] [i_7] = ((var_6 || ((!(!var_9)))));
            arr_26 [i_7] [i_7] [1] = (min((max(-var_0, (arr_10 [i_5] [i_7] [i_5 + 1]))), ((((arr_11 [i_5] [i_7] [i_5] [i_5]) ? ((max((arr_11 [i_5 + 1] [i_7] [7] [i_5]), var_14))) : ((var_12 ? (arr_24 [i_7] [i_5]) : var_13)))))));
            arr_27 [i_7] = -var_12;
        }
        /* LoopNest 2 */
        for (int i_8 = 4; i_8 < 9;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {
                    arr_34 [i_9] = ((~(((-127 - 1) | -108))));
                    var_28 = 8894;
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 9;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 9;i_11 += 1)
                        {
                            {
                                var_29 = (max(((~(arr_7 [i_5 + 1]))), (arr_7 [i_5 + 1])));
                                arr_40 [i_5] [i_8] [i_9] [i_10] [i_11] [i_11] = ((((((494831008 ? 1592328024 : 3590)) / ((0 ? (arr_1 [i_8] [i_8]) : var_10)))) == (((max(var_6, (-32767 - 1)))))));
                            }
                        }
                    }
                }
            }
        }
        var_30 |= (((((!(arr_32 [i_5 + 2] [i_5 + 1] [i_5 - 1])))) * ((max((((!(arr_3 [4])))), (min(0, (arr_24 [7] [i_5 - 1]))))))));
    }
    #pragma endscop
}
