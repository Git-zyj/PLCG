/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] = (((max(var_6, 261120)) >= ((var_7 << ((min(var_9, (arr_3 [i_0] [1] [10]))))))));
                    arr_8 [i_2] = (max((((~6) ? 5777 : (max((arr_6 [1] [i_1]), 1073741823)))), var_9));

                    for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_2] [i_2] [i_1] [i_2] [i_1] = ((~((var_0 * (!var_7)))));
                        var_14 = (max(var_14, ((max(((((var_6 ? var_6 : var_2)) ^ (arr_2 [i_0]))), ((((max(261120, var_4)) >> ((((4294706192 ? 5328563743236397222 : (arr_1 [i_1]))) - 5328563743236397207))))))))));

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            arr_15 [i_2] = (arr_1 [i_0 - 1]);
                            arr_16 [i_2] [i_1 + 1] [i_0] [i_3] = ((var_10 ? var_12 : var_12));
                            var_15 *= ((((var_6 ? 3773358344647025490 : (arr_12 [i_4 + 1] [i_0] [i_2] [i_0] [i_0]))) < var_9));
                            arr_17 [i_2] [i_1 + 1] [i_3] = ((+(((arr_5 [i_0] [i_3 + 2] [i_4]) >> var_8))));
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            arr_24 [i_0] [i_2] [i_2] = (arr_20 [i_0 - 2] [i_5 + 2] [i_2 + 1] [i_2 + 1]);
                            arr_25 [i_2] [i_1 - 2] [18] [i_1] [i_1] = ((!((((arr_12 [1] [11] [1] [i_2] [1]) ? (arr_14 [2] [2] [i_2] [i_5] [i_6]) : 1)))));
                            var_16 = ((!(arr_6 [i_1 + 2] [i_1 - 1])));
                        }
                        for (int i_7 = 1; i_7 < 23;i_7 += 1)
                        {
                            var_17 *= var_13;
                            arr_28 [i_1] [i_1] [i_2 + 1] [i_5 + 2] [i_7] [13] [i_2] = ((4294706159 >> (((~var_3) + 7))));
                            arr_29 [i_0] [i_0] [i_0] [i_2] [15] = (2 - -var_8);
                        }
                        var_18 = (~6185617526669176101);
                    }
                    for (int i_8 = 1; i_8 < 23;i_8 += 1)
                    {
                        arr_32 [i_0] [i_0] [i_0] [i_0] |= ((+(max((arr_3 [i_8] [i_8 - 1] [i_1 + 1]), var_7))));
                        arr_33 [i_2] [i_2] [i_2 + 1] [i_0] [i_1] = (max(255, (((!((min(var_5, var_2))))))));
                    }
                }
            }
        }
    }
    var_19 = (max(var_19, var_6));
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 3; i_11 < 9;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            {
                                arr_45 [i_9] [i_10] [i_12] [i_12] [i_13] = ((261130 ? (max(20446, var_11)) : ((((((1 ? 216 : 2419836150)) != -32))))));
                                var_20 = (((((var_10 ? var_11 : (arr_2 [i_11 - 1])))) ? (((arr_2 [i_11 + 1]) ? (arr_2 [i_11 - 3]) : (arr_2 [i_11 - 3]))) : -59));
                            }
                        }
                    }
                }

                for (int i_14 = 2; i_14 < 10;i_14 += 1)
                {

                    for (int i_15 = 1; i_15 < 10;i_15 += 1)
                    {
                        var_21 = (max((arr_13 [20] [i_10] [17] [17] [i_10]), (((!(!var_10))))));
                        var_22 = ((+((((!var_10) || var_3)))));

                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 11;i_16 += 1)
                        {
                            var_23 = (653103879 - 190);
                            var_24 = (arr_18 [i_9] [i_10]);
                            arr_56 [i_9] [i_9] [i_14] [2] [i_16] &= (((var_3 / var_10) ? ((((!(arr_52 [i_16] [i_9] [i_9] [i_9] [i_9]))))) : var_5));
                            var_25 = (~var_6);
                        }
                    }
                    arr_57 [i_9] [1] [i_14] = (!var_3);
                }
                var_26 = var_9;
                var_27 += (((max((min(6185617526669176101, 2147483647)), (arr_14 [i_9] [19] [i_9] [9] [i_10])))) ? 6185617526669176101 : ((((arr_2 [i_9]) ? (arr_1 [i_9]) : ((~(arr_31 [i_9])))))));
            }
        }
    }
    var_28 = (min(var_13, (min((((var_1 ? 166 : var_8))), (var_8 / 4294967295)))));
    #pragma endscop
}
