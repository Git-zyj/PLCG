/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = ((!((!(arr_0 [i_0])))));

        for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
        {
            var_14 = var_2;
            var_15 = (max(var_15, (arr_0 [i_1 - 1])));
            arr_4 [4] [i_1] [i_0] = var_0;
            var_16 = (max(var_16, (arr_0 [1])));
        }
        for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] [8] = ((!(arr_2 [i_2 + 1] [i_2 + 2])));
            var_17 = (max(var_17, var_7));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_18 += ((-(arr_11 [8] [i_2 + 1] [i_4] [i_2 + 1])));
                        var_19 = ((!(arr_12 [8] [11] [i_2])));
                        var_20 = ((~(arr_6 [i_0] [2])));
                        arr_16 [i_2] [i_2] [i_0] [5] [i_3] [3] = (arr_6 [i_0] [5]);
                    }
                }
            }
            var_21 |= var_9;
            var_22 = ((-(arr_10 [8] [i_2])));
        }
        arr_17 [10] [i_0] |= ((-(!var_5)));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_23 = (min(var_23, (arr_18 [i_5] [i_5])));
        var_24 = var_10;
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            {
                var_25 = (!var_1);
                var_26 = (min(var_26, var_10));

                /* vectorizable */
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    arr_29 [i_6 + 1] [i_7] [i_7] [i_7] = (arr_25 [i_6 + 1] [i_6] [18]);
                    var_27 = (max(var_27, (arr_28 [i_6] [i_6 - 1] [18] [i_6 + 1])));
                    arr_30 [18] [i_8] [2] |= var_7;
                    var_28 = (min(var_28, (!var_10)));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    arr_34 [i_6] [i_7] [13] = (arr_24 [3] [4] [19]);
                    arr_35 [i_7] [i_7] [i_7] = (arr_27 [i_6] [19] [i_6 + 1]);
                    var_29 = (min(var_29, (arr_24 [i_6 - 1] [i_6 + 1] [i_6 + 1])));
                    var_30 += (~45238);
                }

                /* vectorizable */
                for (int i_10 = 1; i_10 < 23;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            {
                                var_31 = (min(var_31, (arr_22 [i_6 + 1])));
                                var_32 = (min(var_32, var_9));
                            }
                        }
                    }
                    var_33 = var_4;
                    var_34 = var_1;
                    arr_45 [i_7] = ((!(arr_39 [i_7] [i_6 + 1] [i_7] [7])));
                }
                for (int i_13 = 2; i_13 < 21;i_13 += 1) /* same iter space */
                {
                    arr_48 [17] [i_7] [9] = var_6;
                    arr_49 [i_7] = (((-(arr_31 [i_7]))));
                }
                /* vectorizable */
                for (int i_14 = 2; i_14 < 21;i_14 += 1) /* same iter space */
                {
                    var_35 = -var_8;
                    arr_54 [i_7] [0] [i_7] = (arr_32 [i_6 - 1] [7] [20] [i_14 + 2]);
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 24;i_16 += 1)
                        {
                            {
                                var_36 = (arr_28 [i_6 + 1] [i_15] [1] [4]);
                                var_37 = (!8605);
                                var_38 = ((~(arr_26 [i_6] [i_7])));
                                var_39 = (arr_52 [6] [i_7] [1] [0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        for (int i_18 = 3; i_18 < 23;i_18 += 1)
                        {
                            {
                                arr_67 [2] [8] [4] [i_17] [i_18] [6] [10] |= var_6;
                                var_40 = (min(var_40, (arr_28 [i_6 + 1] [i_6 - 1] [0] [12])));
                                var_41 += ((!(arr_59 [i_6 + 1] [9] [22] [i_17] [i_18])));
                                var_42 = (arr_59 [2] [17] [14] [i_17] [3]);
                                var_43 = (arr_44 [i_7] [i_7] [i_17] [14]);
                            }
                        }
                    }
                }
                var_44 = var_1;
            }
        }
    }
    var_45 = var_8;
    var_46 = var_6;
    #pragma endscop
}
