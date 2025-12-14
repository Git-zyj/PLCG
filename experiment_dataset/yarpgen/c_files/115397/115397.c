/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (min(((var_9 ? var_12 : var_9)), var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 &= ((((max(var_16, 2846067277428006232))) + ((min((max(var_17, (arr_2 [i_0] [6]))), (arr_5 [i_4] [i_0] [i_0]))))));
                                var_21 = -var_6;
                                var_22 = (max(var_22, (-9576 != 228)));
                                var_23 = (min(((-57 ? -23273 : 43644)), -113));
                                var_24 = (((((arr_10 [10] [i_4 + 1] [10] [i_3] [10]) ^ (-13 | var_8)))) ? ((~(arr_8 [i_4 + 1]))) : 1207922666);
                            }
                        }
                    }
                    var_25 = (min(var_25, (((105553116266496 ? (arr_12 [i_2] [i_2] [12] [9] [i_2]) : ((max((((!(arr_9 [i_2])))), (arr_5 [1] [i_1 + 2] [i_2])))))))));
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_26 = (max(var_26, (arr_1 [i_1 + 1])));
                    var_27 = 9576;
                    var_28 = ((((min((((~(arr_5 [i_5] [9] [i_5])))), (~0)))) ? var_4 : (arr_9 [i_0])));
                }
                for (int i_6 = 3; i_6 < 12;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_29 = min(((min(9545, -9576))), (max(var_0, 319308246)));

                        for (int i_8 = 1; i_8 < 11;i_8 += 1)
                        {
                            var_30 = (min((9568 <= 216), (((((39 << (((arr_15 [1] [1] [1]) - 89057307))))) ? (arr_5 [i_1 - 2] [i_1 - 2] [i_8 + 2]) : (max(-5942616901225238212, var_8))))));
                            var_31 = -9556;
                            var_32 = (arr_22 [i_8]);
                            var_33 = -9954;
                            var_34 = ((((!67) || var_12)));
                        }
                    }
                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        var_35 = (arr_13 [i_9 + 1]);

                        for (int i_10 = 3; i_10 < 11;i_10 += 1)
                        {
                            var_36 = (max((arr_5 [i_10] [i_10] [i_10 + 2]), (max(92, -9545))));
                            var_37 = (((((min((arr_28 [i_10 - 2] [i_9 - 2] [i_1 + 2] [i_1 + 2] [i_0]), (arr_28 [i_0] [i_1 - 2] [i_6] [i_9 - 2] [i_10]))))) == (arr_15 [i_0] [i_1] [i_6])));
                        }
                        for (int i_11 = 1; i_11 < 11;i_11 += 1)
                        {
                            var_38 = ((max(1792, (((30809 ? (arr_26 [3] [6] [6] [6]) : (arr_19 [i_6] [9] [i_6] [9])))))));
                            var_39 += (arr_20 [9] [3] [6]);
                            var_40 = ((!(64 | var_16)));
                            var_41 = (max(var_1, (((arr_12 [1] [1] [i_0] [i_9] [i_11 + 2]) ? (arr_12 [i_11] [i_11] [i_11 + 1] [i_11] [i_11 + 1]) : (arr_12 [i_1] [1] [i_6 - 3] [8] [i_11 + 2])))));
                        }
                        var_42 = var_3;
                        var_43 = ((((!(arr_23 [i_6 + 1] [i_6] [i_0] [i_0] [i_0]))) ? var_15 : ((((arr_18 [i_0]) && 0)))));
                    }
                    var_44 |= ((((((arr_29 [i_6 - 3] [12] [i_6 - 3] [i_0] [12] [8] [8]) ? var_0 : var_13))) ? var_14 : ((max((arr_17 [i_6 - 2] [i_6] [i_6]), (arr_17 [i_6 - 3] [i_6 - 3] [i_6 - 3]))))));
                    /* LoopNest 2 */
                    for (int i_12 = 4; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            {
                                var_45 = var_9;
                                var_46 = (((~9556) ^ (var_1 & -68)));
                                var_47 = ((max((((-(arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), var_8)));
                                var_48 = ((((arr_7 [i_0] [i_0] [i_1 - 1]) < (arr_7 [i_0] [i_0] [i_0]))));
                            }
                        }
                    }
                }
                var_49 = ((((max((max((arr_17 [i_0] [7] [i_0]), (arr_17 [i_1] [i_0] [i_0]))), (arr_12 [11] [i_1 - 1] [i_0] [1] [i_0])))) ? (~3087044647) : var_16));
                var_50 = (3675458153 >= 524287);
            }
        }
    }
    #pragma endscop
}
