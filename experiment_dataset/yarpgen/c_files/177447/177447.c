/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 = ((!(~var_9)));
    var_16 = ((min(4080425341482291821, var_5)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_17 = (min(((((arr_1 [i_0] [9]) || (arr_1 [i_0] [i_1])))), (max((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_1])))));
                        arr_9 [i_3] [10] [i_1] [10] [i_0] = (-((min(var_5, ((!(arr_8 [5])))))));
                    }
                }
            }
            var_18 = (min(var_18, (arr_0 [i_0])));
        }
        arr_10 [5] [5] = ((+((min((arr_4 [i_0] [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_19 = (min(var_19, ((min((min((((arr_0 [2]) ? (arr_1 [1] [i_4 + 1]) : (arr_12 [i_0] [i_0] [i_0]))), (arr_0 [i_0]))), ((min((arr_4 [i_0] [i_4 - 3] [7] [i_5]), (arr_13 [i_4 - 2])))))))));
                    arr_15 [i_0] [i_0] [10] [i_0] = ((((min((arr_0 [i_0]), (((arr_5 [i_0] [i_4] [i_0] [i_0]) ? (arr_14 [i_0] [3] [i_5] [i_0]) : (arr_13 [i_4 - 4])))))) ? (min((((arr_3 [i_0] [i_4]) ? (arr_1 [3] [3]) : (arr_1 [i_5] [3]))), ((max(var_12, (arr_11 [i_0])))))) : ((min((min((arr_0 [3]), (arr_4 [8] [i_4] [i_4 + 1] [i_4 + 1]))), ((((arr_14 [i_5] [7] [i_0] [i_0]) && (arr_7 [1] [1] [1] [4] [i_5] [i_5])))))))));
                    var_20 = (-(((((arr_3 [6] [i_4]) || (arr_12 [i_0] [0] [i_0]))) ? ((((arr_3 [5] [i_5]) ^ var_12))) : (var_2 & var_9))));
                }
            }
        }
        var_21 = (arr_2 [7] [7]);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
    {
        var_22 = (min(var_22, ((((arr_18 [i_6]) % 2608501008)))));
        var_23 = (max(var_23, ((((arr_11 [i_6]) & (arr_11 [i_6]))))));
        var_24 *= (arr_18 [i_6]);
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                {
                    var_25 = (max(var_25, (arr_21 [6] [i_7 - 1] [8] [i_6])));
                    arr_24 [i_6] [1] [i_8] |= (((arr_7 [6] [3] [i_7 - 1] [i_8 - 1] [6] [i_8 + 1]) > (arr_7 [i_8] [i_8 + 2] [i_7 - 1] [i_7 - 2] [i_7 - 1] [9])));
                    arr_25 [i_6] = (arr_4 [i_6] [i_6] [i_8 + 2] [i_7 - 1]);
                }
            }
        }

        for (int i_9 = 3; i_9 < 11;i_9 += 1)
        {
            arr_28 [9] = (arr_5 [i_6] [i_9 - 1] [i_9 + 1] [i_9 - 1]);
            /* LoopNest 2 */
            for (int i_10 = 3; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    {
                        var_26 = (arr_29 [i_9 - 2] [i_9] [i_9 + 1] [i_11]);

                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            arr_35 [i_6] [i_9] [i_10] [i_11] [i_6] [i_12] = ((~(arr_17 [i_10 + 1])));
                            var_27 = (((arr_31 [i_9 - 3] [i_9 - 2] [i_10 - 3] [i_10 - 3]) ? (arr_31 [i_9 - 3] [i_9 - 1] [i_10 - 1] [i_10 - 3]) : (arr_31 [i_9 - 1] [i_9 + 1] [i_10 + 1] [i_10 + 1])));
                            var_28 = (arr_31 [2] [i_9] [i_10 - 2] [i_11]);
                        }
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            arr_38 [i_6] [i_13] [i_13] = ((-(arr_29 [i_6] [i_6] [i_6] [i_6])));
            var_29 ^= ((-(arr_27 [i_6] [i_13])));
            arr_39 [1] [1] = (-(arr_12 [i_6] [i_13] [i_13]));
            arr_40 [0] [i_13] = (arr_5 [8] [i_6] [i_6] [i_6]);
        }
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            var_30 = (arr_27 [i_6] [i_14]);
            arr_43 [i_14] = ((((arr_14 [i_6] [i_14] [10] [11]) / (arr_41 [i_6] [0]))));
        }
    }
    for (int i_15 = 0; i_15 < 12;i_15 += 1) /* same iter space */
    {
        var_31 = (min(((min((arr_1 [8] [3]), (arr_31 [i_15] [5] [i_15] [i_15])))), (((arr_30 [i_15] [i_15] [i_15] [i_15]) ? ((((arr_12 [i_15] [i_15] [i_15]) && (arr_7 [i_15] [i_15] [i_15] [i_15] [i_15] [3])))) : (((!(arr_13 [i_15]))))))));
        var_32 = (min(var_32, (((!((!(arr_5 [i_15] [i_15] [i_15] [4]))))))));
    }
    for (int i_16 = 0; i_16 < 23;i_16 += 1)
    {
        arr_50 [i_16] = (arr_49 [i_16] [i_16]);
        arr_51 [i_16] [21] = (((((~((~(arr_48 [22])))))) ? ((((((~(arr_48 [i_16])))) ? ((((arr_49 [8] [i_16]) ^ (arr_49 [i_16] [i_16])))) : (arr_47 [i_16] [i_16])))) : (arr_47 [i_16] [i_16])));
    }
    #pragma endscop
}
