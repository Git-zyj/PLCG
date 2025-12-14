/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (~75)));
    var_15 &= (!var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_3] [i_0] [i_1] = ((0 << (((((arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? var_2 : (arr_8 [i_2 - 1] [i_2 - 1] [i_2]))) - 1871509549))));
                                var_16 = (max(var_16, (arr_9 [i_4] [2] [i_1])));
                                arr_15 [i_0] [i_1] [i_0] [i_3] [i_0] = ((-(arr_6 [i_0] [i_3 - 1])));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_17 = (((arr_20 [6]) & ((((3524216020 | (arr_23 [i_7] [i_6] [i_1]))) & var_2))));
                                var_18 = (var_8 == var_7);
                                arr_25 [11] [i_0] [7] [9] [i_1] [i_0] [9] = (-4307714836857586483 < var_1);
                            }
                        }
                    }
                    arr_26 [i_0] [i_0] [i_5] [i_0] = ((((var_11 >= var_9) - var_2)));
                }
                for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                {
                    arr_30 [i_0] [i_0] [10] [i_8] = ((-((+(((arr_13 [i_0] [i_1] [i_0] [i_0] [i_0]) ^ (arr_11 [i_8] [1] [i_1] [1] [i_1] [i_0])))))));
                    var_19 |= ((min(var_6, 2563064123)));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            {
                                arr_35 [i_0] [i_1] [i_8] [i_9] [i_10] = (arr_4 [i_10]);
                                var_20 ^= ((-(((arr_33 [i_9] [i_10 - 1] [i_10 - 1] [i_10] [i_8]) * (arr_33 [i_1] [i_10 - 1] [i_10 - 1] [i_10] [i_1])))));
                                var_21 = (min(var_21, ((min(21, (min((arr_27 [i_1] [i_8] [i_9]), var_7)))))));
                                arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] = (max(((((((arr_31 [i_0] [i_8] [i_1] [i_0]) || var_8)) || (arr_29 [i_10] [i_10 - 1] [i_10] [i_10])))), (((!1) ? 6668 : (arr_21 [i_9] [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 1])))));
                            }
                        }
                    }
                    arr_37 [i_1] [i_1] &= ((((((arr_28 [i_0] [i_1] [i_1] [i_8]) ? 0 : (arr_28 [i_0] [i_0] [i_0] [i_0])))) ? (arr_28 [i_0] [13] [i_8] [i_0]) : (((arr_28 [i_0] [i_1] [i_1] [i_8]) % var_7))));
                }
                for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_12 = 3; i_12 < 12;i_12 += 1)
                    {
                        var_22 = (((0 & (arr_6 [i_0] [i_11]))));
                        arr_43 [i_0] [i_0] [i_0] = (arr_41 [i_0] [i_12 - 2] [i_12 - 1] [i_12 - 3]);
                    }
                    var_23 = (min(((-(arr_3 [i_0]))), (1 >= 4503599627370495)));
                }
                arr_44 [i_1] &= var_11;
                var_24 = (min((arr_39 [i_1] [i_1] [i_0]), ((((((arr_19 [i_0] [i_0]) ^ var_6))) * var_12))));
            }
        }
    }
    var_25 &= ((((((((88 ? var_0 : 0))) ? (4294967293 / var_13) : -87))) ? 1731903173 : var_11));
    #pragma endscop
}
