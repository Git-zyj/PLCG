/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_11 = (max(var_11, ((max(var_10, var_3)))));
                    arr_11 [i_2] = (max(((!(arr_4 [i_1 + 2]))), ((var_6 && (arr_2 [i_0] [i_1 + 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_12 = (max(-var_1, var_1));
                                var_13 = (max(var_13, ((max((((((min(93, var_3)))) != (arr_14 [i_1 - 1] [14] [i_1 - 1] [i_1 - 1] [i_1 - 1]))), ((!(((~(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
                                var_14 = (max(var_14, (min(((((arr_14 [i_0] [i_0] [i_1 + 2] [10] [i_3]) != 4203598769))), (max(50, var_5))))));
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
                {
                    arr_18 [i_5] [i_5] [i_5] [i_5] = ((~var_7) * (((arr_6 [i_5 + 2] [i_1 + 2]) ? 10895144134808765414 : var_6)));
                    arr_19 [i_5] [i_5] = 22;
                    arr_20 [i_5] [9] [9] = var_3;
                    var_15 = min((var_0 || var_3), var_4);
                    arr_21 [i_0] [8] [i_5] = (min(((-(min(var_8, var_10)))), ((((var_7 != (arr_7 [i_5] [i_1 + 1] [i_0] [i_0])))))));
                }
                for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_16 = (min(var_16, (arr_0 [i_1 + 1] [i_6 - 1])));
                        var_17 = (max(var_17, ((((var_7 ? (arr_10 [i_0] [i_1 + 2] [i_1 + 2]) : (arr_3 [7])))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 14;i_8 += 1)
                    {
                        var_18 ^= var_8;

                        for (int i_9 = 1; i_9 < 14;i_9 += 1) /* same iter space */
                        {
                            var_19 |= 93;
                            var_20 = ((5 ? (arr_17 [i_6] [i_1 - 1] [i_6 + 1] [i_9 + 3]) : var_7));
                        }
                        for (int i_10 = 1; i_10 < 14;i_10 += 1) /* same iter space */
                        {
                            var_21 = (max(var_21, -31));
                            arr_37 [i_0] [i_6] [i_6] [i_6] [i_10 + 2] = ((!(162 != var_7)));
                            var_22 = (~108);
                        }
                        for (int i_11 = 1; i_11 < 14;i_11 += 1) /* same iter space */
                        {
                            var_23 = (!163);
                            var_24 |= ((159 < (arr_28 [i_11 + 2] [i_1 + 1] [i_0] [i_0] [i_1 + 1] [i_1 + 1])));
                            var_25 = ((var_4 ? var_10 : var_9));
                            arr_40 [1] [i_6] [1] [i_6] [1] = (-2538 >= 2537);
                        }
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            var_26 = (arr_0 [i_1 - 1] [i_6 - 1]);
                            arr_45 [i_0] [i_6] [i_0] [1] = ((26294 || (((6020 ? 5 : var_1)))));
                            var_27 = var_9;
                        }
                        arr_46 [i_0] [i_6] = (arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [11]);
                        var_28 = var_4;
                    }
                    var_29 = var_10;
                    var_30 += (((((var_1 ? (max(var_0, var_0)) : (~var_3)))) ? (arr_44 [i_6]) : ((-(arr_39 [i_0] [i_0])))));
                }
                for (int i_13 = 1; i_13 < 14;i_13 += 1) /* same iter space */
                {
                    arr_50 [i_0] [i_0] [i_0] [11] = (min((min((arr_14 [11] [i_1 + 1] [i_0] [i_0] [i_0]), (arr_3 [i_1 + 1]))), (((-(arr_5 [i_13] [i_1 - 1]))))));
                    var_31 -= (((((var_10 ? (arr_2 [i_0] [i_1 + 1]) : -62)) << (((~var_3) - 32760)))));
                    var_32 += var_7;
                    var_33 = (min(var_33, var_0));
                }
                var_34 -= ((((max(var_9, (arr_16 [i_1 + 1] [i_1 + 2])))) ? -93 : -var_10));

                /* vectorizable */
                for (int i_14 = 2; i_14 < 14;i_14 += 1)
                {
                    arr_53 [1] [1] [1] [15] |= ((var_8 || (((~(arr_29 [i_0] [i_0] [i_0]))))));
                    var_35 = (arr_26 [i_14 + 2] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0]);
                    arr_54 [i_0] = var_3;
                }
                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    var_36 = (min(var_36, (5360782304049656347 | var_5)));
                    arr_57 [i_1 + 1] [i_15] = ((+(((((arr_24 [i_0] [i_15] [i_15]) || var_9))))));
                    var_37 = (~(arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]));
                }
            }
        }
    }
    var_38 = ((-((var_9 ? ((max(var_2, var_5))) : (-63 & var_9)))));
    var_39 -= ((~(var_3 / 15830987866896965095)));
    #pragma endscop
}
