/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 22;i_4 += 1)
                            {
                                var_20 -= (max((arr_1 [i_2] [1]), (max(1, 3033))));
                                var_21 = (min(var_21, ((min((arr_2 [i_1 + 2]), (arr_2 [i_1]))))));
                                arr_14 [i_0] [i_3] = (((arr_11 [i_0] [i_3] [i_2] [i_0]) / (((((~(arr_4 [i_2 + 1] [i_1 + 1])))) * (max((arr_11 [i_0] [i_1] [i_3] [i_0]), (arr_6 [i_4] [i_1 + 1] [i_2])))))));
                            }
                            var_22 = (~1);
                            arr_15 [i_0] [i_2] [i_1] [i_0] = (((max((max((arr_11 [13] [13] [i_2] [i_0]), (arr_3 [i_0] [i_0]))), (max((arr_11 [i_0] [i_2] [i_1] [i_0]), (arr_10 [i_0]))))) <= ((((!((max(-3041, 11824)))))))));
                            var_23 = (((((((arr_3 [i_0] [i_1]) / (arr_3 [i_0] [i_2]))) * (arr_2 [i_2 - 1]))) * ((((!(((-(arr_8 [i_0]))))))))));
                        }
                    }
                }
                arr_16 [i_0] = (arr_0 [i_0] [i_0]);

                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    arr_19 [i_0] [i_1] [i_0] = (max(2251799813685247, 2251799813685270));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_27 [i_0] [i_1] [i_5 - 1] [i_6] = (arr_0 [i_0] [i_0]);
                                var_24 -= (arr_3 [1] [i_5]);
                                var_25 = (~18446744073709551615);
                            }
                        }
                    }
                }
                for (int i_8 = 4; i_8 < 22;i_8 += 1) /* same iter space */
                {
                    arr_30 [i_0] [i_1] [i_0] = (arr_2 [i_1]);
                    arr_31 [i_0] [i_1] [10] [i_0] = (arr_20 [i_8] [i_0] [i_0] [i_0]);
                    var_26 = ((-3009 & (~54807)));
                }
                for (int i_9 = 4; i_9 < 22;i_9 += 1) /* same iter space */
                {
                    arr_34 [i_0] = ((((((((arr_4 [i_9 - 4] [1]) - (arr_12 [i_0] [i_0] [i_0])))) * (((arr_13 [i_0] [7] [2] [21] [i_9 - 3]) / (arr_3 [i_1] [i_9]))))) < (((-(((!(arr_1 [i_0] [i_9 - 1])))))))));
                    arr_35 [i_0] [i_0] [i_0] = (arr_32 [i_0]);
                }
                for (int i_10 = 4; i_10 < 22;i_10 += 1) /* same iter space */
                {
                    var_27 -= (arr_37 [i_0] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 21;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            {
                                var_28 = (max(var_28, ((((-(arr_29 [i_10])))))));
                                var_29 -= ((~(arr_32 [i_11])));
                                arr_46 [i_0] [i_0] [i_10] [i_12] = (arr_12 [i_10 - 3] [i_10 - 2] [i_12]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 20;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 19;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 20;i_15 += 1)
            {
                {
                    var_30 = (arr_49 [11]);
                    var_31 = (max((((!(arr_49 [i_13])))), ((~((((arr_48 [i_15]) == (arr_28 [i_13]))))))));
                }
            }
        }
    }
    var_32 = (!((-11 > ((min(var_10, 0))))));
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 11;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            {
                var_33 = ((((min((max((arr_51 [i_17] [i_16] [i_16]), (arr_6 [i_17] [i_17] [8]))), (((!(arr_7 [i_17] [13] [i_16]))))))) && (~3026)));
                arr_61 [i_16] [i_17] = (((arr_4 [14] [i_16]) / ((((((-(arr_4 [i_17] [i_16]))) + 2147483647)) << (((arr_60 [i_16] [i_17]) / (arr_8 [i_17])))))));
                var_34 = (arr_51 [i_17] [1] [i_16]);
            }
        }
    }
    #pragma endscop
}
