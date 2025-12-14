/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_10;
    var_16 = (4096 || -1);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = ((~(((~-1) << (((18446744073709551615 | var_6) - 18446744073709551605))))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    arr_8 [i_1] [i_0] [i_1] [i_1] = (248 ? 2122939317 : 7);
                    var_18 = -var_8;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 = var_3;
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4 + 1] [i_4 + 1] = (arr_13 [i_0 + 1] [i_2 - 1] [i_0] [i_4 - 1] [i_4]);
                                arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] [i_0] = ((238385254649939973 ? -var_1 : (((256403972 ? 7289 : 249)))));
                                var_20 -= ((~(((arr_0 [18]) ? 238385254649939973 : var_12))));
                            }
                        }
                    }
                    arr_17 [i_0 - 3] [i_0] [i_0] = ((6076 << (arr_1 [i_0] [i_2])));
                    var_21 = (max(var_21, (((!(arr_3 [i_0 - 1] [0] [i_0]))))));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {

                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        arr_22 [i_0] [i_1] [i_0] = (~var_13);
                        var_22 &= (((arr_12 [i_5] [i_5] [4] [i_5] [i_5 + 1]) << (arr_18 [i_0] [0] [i_5])));
                    }
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        var_23 = (min(var_23, (arr_21 [i_5] [16])));
                        var_24 += (((arr_25 [i_0] [i_1] [i_5 + 1] [i_7]) ? (arr_14 [1] [i_0] [i_0] [i_0] [i_0 - 3]) : (((-607160586 ? 59474 : (arr_11 [i_0] [i_0] [2] [i_0] [i_0]))))));

                        for (int i_8 = 3; i_8 < 18;i_8 += 1)
                        {
                            var_25 = (min(var_25, (-2229835773566258685 > 1)));
                            var_26 = ((((56820 ? var_7 : -1710111604)) << (!var_8)));
                            var_27 = (max(var_27, ((-(~3971644915590218593)))));
                            arr_29 [i_0] = var_14;
                            arr_30 [i_0] [i_1] [i_7] [i_8] = (arr_4 [i_0] [i_5]);
                        }
                    }
                    var_28 = (max(var_28, ((((((var_2 ? (arr_10 [i_1] [i_1] [i_1] [7]) : 6987522175854714375))) ? ((-(arr_11 [i_0] [i_0] [0] [i_1] [0]))) : 0)))));
                }
                for (int i_9 = 4; i_9 < 18;i_9 += 1) /* same iter space */
                {
                    var_29 ^= (var_6 || (((0 - var_0) || (arr_19 [i_1] [i_9]))));
                    var_30 = (max(var_30, ((((((~(arr_28 [i_1] [i_9] [i_9] [i_9] [i_9 - 2])))) ? 1 : (((!(var_11 <= var_14)))))))));
                }
                for (int i_10 = 4; i_10 < 18;i_10 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            {
                                var_31 ^= (arr_0 [i_10]);
                                var_32 = (arr_14 [i_0 - 2] [i_1] [i_10] [i_11] [i_12]);
                            }
                        }
                    }
                    arr_40 [i_0] = var_5;
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_33 = (((((((-(arr_43 [i_0] [i_1] [i_1] [19] [i_1])))) ? (arr_43 [i_0] [i_1] [i_10 - 4] [i_13] [i_14]) : var_7)) | 1));
                                arr_46 [i_0 - 3] [i_0] = (((((!(arr_37 [i_0 + 1] [i_0 + 1] [i_13] [i_0])))) > (arr_37 [17] [i_0 - 1] [i_0] [i_0])));
                                var_34 = (min(var_34, (!var_6)));
                                arr_47 [9] [i_0] [i_0] = (min((arr_34 [i_0] [i_10] [i_0] [i_14]), ((31 ? ((7274635472172181308 ? -7 : 1)) : (((28688 ? 15 : 1)))))));
                            }
                        }
                    }
                    arr_48 [i_0] = (((((2674698574787571792 ? -49 : -1710111626))) ? (((arr_43 [i_0] [i_0] [i_1] [i_10] [i_10 - 2]) ? ((((!(arr_31 [i_0] [i_1] [i_1] [i_10]))))) : ((var_2 << (((arr_2 [i_1]) + 14366)))))) : (arr_44 [i_0] [i_0] [9] [i_10] [i_10])));
                }
                arr_49 [i_0] = ((255 ? ((3971644915590218593 ? var_13 : -1)) : -1));
                var_35 = (arr_21 [i_0 + 2] [i_0]);
            }
        }
    }
    var_36 = (~var_12);
    #pragma endscop
}
