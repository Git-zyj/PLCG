/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_7 [i_0] [i_2] [i_0] [i_0] = var_16;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_2] [i_2] = var_17;
                                var_19 = (min((((((7772105164967687026 ? 4134711706 : -657336142)) | -1216276470))), (((arr_13 [i_3] [i_2]) & ((min(110, 657336142)))))));
                                var_20 = (min(var_20, (arr_3 [i_0] [i_4])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_21 = ((-(arr_3 [i_0] [i_6])));
                                var_22 = ((((~(arr_0 [i_1 - 4]))) < 1062963354));
                            }
                        }
                    }
                    arr_20 [i_0] [i_2] [i_2] [i_1] = ((-(((arr_1 [i_0 - 1]) >> (((arr_17 [i_0 + 2] [i_1 - 1] [i_2]) + 368263400))))));
                }
                arr_21 [i_0] [i_1] [i_1] = (((((arr_9 [i_1 - 3] [i_0 + 1]) == (arr_9 [i_1 - 3] [i_0 + 1]))) ? (((!(arr_5 [i_0] [i_0] [i_0])))) : (arr_15 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1])));

                /* vectorizable */
                for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                {
                    var_23 = var_13;

                    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                    {
                        arr_30 [i_7] [i_0] = 3699550066974421566;
                        var_24 = (min(var_24, ((((arr_3 [i_8] [i_1]) ? (((var_18 ? var_5 : (arr_6 [i_0] [i_1] [i_0])))) : (arr_18 [i_1] [i_1] [i_1] [i_0] [i_1] [i_1]))))));
                        var_25 = (max(var_25, (((-(arr_5 [i_1] [i_1] [i_7]))))));
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                    {
                        var_26 = ((~(arr_19 [i_0] [i_1] [i_0] [i_7])));

                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((!(16596 | var_17)));
                            arr_37 [i_0] [i_1] [i_7] [i_10] [i_10] = (arr_19 [i_10] [i_7] [i_7] [i_7]);
                            var_27 -= (arr_23 [i_0] [i_0] [i_1]);
                            var_28 = (arr_19 [i_0] [i_7] [i_9] [i_10]);
                        }
                        for (int i_11 = 2; i_11 < 22;i_11 += 1)
                        {
                            arr_40 [i_0] [i_0] [i_1] [i_7] [i_7] [i_9] [i_11] = 2147483647;
                            var_29 = (((arr_18 [i_11] [i_9] [i_7] [i_7] [i_1] [i_0]) % (arr_23 [i_0 - 1] [i_0 - 2] [i_1 + 1])));
                            var_30 = ((((((-(arr_26 [i_7] [i_1]))) + 2147483647)) << (7620796559469932244 - 7620796559469932244)));
                        }
                    }
                }
                for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                {
                    var_31 = (((((arr_10 [i_0 + 4]) ? (arr_10 [i_12]) : (arr_6 [i_0] [i_1 - 4] [i_0]))) & ((min((arr_10 [i_0 + 4]), (arr_10 [i_0 + 2]))))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 23;i_14 += 1)
                        {
                            {
                                arr_50 [i_0] [i_1] [i_12] [i_13] [i_14] = ((!(((arr_22 [i_1 - 3]) && 0))));
                                var_32 = (max(523500493, (~2523349936)));
                            }
                        }
                    }
                    arr_51 [i_1] [i_12] = (~-126);
                    var_33 = (min(var_33, (arr_9 [i_0 + 4] [i_0])));
                }
                for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
                {
                    var_34 = var_14;

                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        arr_60 [i_16] [i_15] [i_1] [i_1] [i_0] [i_0] = ((!(arr_52 [i_0] [i_0] [i_0] [i_0 + 3])));
                        var_35 = (min(var_35, ((((arr_27 [i_16] [i_15] [i_1] [i_0]) ? (((arr_29 [i_1]) << (((((arr_17 [i_0] [i_0] [i_0]) % (arr_12 [i_0] [i_1] [i_15] [i_0] [i_0] [i_16]))) + 368263400)))) : ((max((arr_28 [i_1 + 1] [i_1] [i_0 + 4] [i_16] [i_0]), (arr_33 [i_0])))))))));
                    }
                    var_36 = ((-(arr_6 [i_0] [i_1] [i_0])));
                    var_37 = ((~((((0 || (arr_27 [i_0] [i_1] [i_15] [i_15])))))));
                }
            }
        }
    }
    var_38 = max((((var_0 ? -1 : var_14))), var_3);
    #pragma endscop
}
