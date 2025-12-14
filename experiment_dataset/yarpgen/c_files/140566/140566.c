/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 *= (max((arr_3 [i_0]), (((arr_2 [i_0]) ? (arr_1 [i_0]) : var_6))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_15 = ((((!(arr_3 [i_0]))) ? (((!(arr_3 [i_1])))) : ((((arr_3 [3]) && (arr_3 [i_0]))))));

                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            var_16 &= ((~(min((min(8, (arr_1 [i_0]))), (min(var_1, (arr_10 [i_0] [i_1] [i_0] [i_0] [8])))))));
                            arr_14 [i_2] [i_0] [i_2] [i_2] [i_0] [i_0] [i_0] = (+((((min((arr_6 [i_3] [i_3] [i_3]), (arr_8 [i_0] [i_4] [i_2] [21])))) ? (((arr_0 [i_1]) - (arr_2 [i_2]))) : (max((arr_5 [i_0]), var_1)))));
                            var_17 = ((min((((arr_3 [i_1]) ? 18446744073709551615 : (arr_1 [i_3]))), (arr_3 [i_0]))));
                            var_18 = ((((max((arr_12 [i_0] [i_0] [1] [i_0] [i_4 - 1] [i_0]), (arr_12 [13] [i_0] [13] [20] [13] [i_4])))) == (((!(((18446744073709551577 ? (arr_3 [i_0]) : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_0] [i_1] [i_0] [i_1] [i_0] [7] [i_5] = min((arr_2 [i_0]), (arr_9 [16] [i_3] [i_2] [i_0]));
                            var_19 = (arr_9 [i_0] [i_1] [i_3] [i_3]);
                            var_20 = ((~(arr_13 [7] [i_2] [i_2] [i_3] [i_0])));
                            arr_18 [i_0] [1] [1] [i_0] [23] = 18446744073709551607;
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            var_21 = ((~(arr_6 [i_0] [i_0] [i_0])));
                            var_22 = min((((arr_6 [i_1] [i_2] [i_3]) | (((arr_3 [i_2]) | (arr_0 [i_2]))))), var_12);
                            arr_21 [i_0] [3] [9] [i_0] [9] [i_0] = ((-(arr_3 [i_2])));
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 2; i_7 < 9;i_7 += 1)
    {
        var_23 = min((((~var_0) ^ (arr_0 [i_7 + 1]))), (arr_4 [i_7] [i_7] [i_7]));
        var_24 = ((!var_9) ^ (max((arr_7 [i_7 - 2] [i_7 - 1]), (arr_2 [i_7 + 1]))));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 6;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    {
                        var_25 = (min((((!(((2047 ? 37149 : 18446744073709551607)))))), (min((~var_12), ((min(65523, (arr_12 [i_7] [i_8] [i_7] [7] [i_9 - 1] [i_10]))))))));
                        var_26 = (!var_7);
                    }
                }
            }
        }
        var_27 = max(9049, 0);
        var_28 = (((((var_1 ? (arr_26 [i_7]) : 16)) / (arr_10 [i_7] [i_7 - 1] [i_7] [i_7 + 1] [i_7]))) ^ (arr_11 [i_7]));
    }
    for (int i_11 = 1; i_11 < 16;i_11 += 1)
    {
        var_29 = ((((max(((var_4 ? var_0 : 65533)), (arr_13 [i_11] [i_11 + 1] [7] [i_11 - 1] [i_11])))) ? (min(((12495975714507859610 ? 18446744073709551607 : (arr_3 [i_11]))), ((((arr_9 [i_11] [i_11] [i_11 - 1] [i_11]) << (((arr_2 [i_11]) - 11456))))))) : (arr_30 [i_11])));
        arr_33 [i_11] = (53548 & 65524);
        var_30 = (min(((var_9 <= (!56486))), (!var_5)));
        var_31 = (min(var_31, ((max((((!13211910352714575767) | (arr_2 [i_11]))), (min((arr_30 [i_11]), (~var_6))))))));
    }

    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {
        var_32 = ((-(arr_1 [i_12])));
        arr_36 [i_12] = (((arr_13 [i_12] [i_12] [i_12] [i_12] [i_12]) == (max((arr_20 [i_12]), var_2))));
    }
    for (int i_13 = 0; i_13 < 13;i_13 += 1)
    {
        arr_39 [i_13] = (min((max((max((arr_38 [i_13]), var_5)), (max(var_0, (arr_3 [i_13]))))), var_2));
        var_33 = (min(var_3, (max(12009, -var_10))));
        var_34 = (min(var_34, (((var_0 - (arr_10 [i_13] [i_13] [i_13] [i_13] [16]))))));
        var_35 -= var_9;
    }
    var_36 = (min((min((max(var_9, var_13)), (min(var_6, var_7)))), (((!((max(2103830586995071625, var_11))))))));
    var_37 &= var_1;

    for (int i_14 = 1; i_14 < 22;i_14 += 1)
    {
        var_38 = (min((min(((var_13 ? var_11 : 9007199254740991)), var_11)), (min((arr_9 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14]), (max((arr_6 [i_14 + 1] [i_14] [i_14]), (arr_12 [10] [4] [i_14 + 1] [i_14] [i_14] [i_14])))))));
        var_39 = var_5;
        var_40 -= (((((((min(var_2, var_2))) ? (arr_41 [i_14 - 1]) : (((max(var_3, var_3))))))) && ((((((14046064456093723069 - (arr_12 [i_14] [10] [i_14] [i_14] [10] [10])))) ? (arr_13 [22] [i_14] [i_14] [i_14] [18]) : (arr_20 [8]))))));
    }
    #pragma endscop
}
