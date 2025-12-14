/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_17 -= (((arr_0 [i_0]) ? (((~(arr_0 [i_0])))) : (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))));
        arr_3 [i_0] = ((-(arr_2 [i_0])));
        arr_4 [i_0] [i_0] = ((~(arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_18 ^= arr_2 [i_1];
        var_19 = (max(-285047084, (max((arr_1 [i_1]), (((!(arr_8 [i_1]))))))));
        var_20 ^= ((!(((((min((arr_8 [i_1]), (arr_0 [i_1])))) ? (((!(arr_5 [i_1] [i_1])))) : (((!(arr_5 [i_1] [i_1])))))))));
    }

    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        var_21 *= ((+(min((((arr_9 [i_2] [i_2]) ? (arr_11 [i_2] [i_2]) : (arr_9 [i_2] [i_2]))), -1377))));
        var_22 = (((~(arr_11 [i_2 - 1] [i_2 - 1]))));
    }
    for (int i_3 = 4; i_3 < 23;i_3 += 1)
    {
        arr_16 [i_3] [i_3] = (arr_15 [i_3]);
        var_23 &= (!(((~((-(arr_15 [i_3])))))));
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_21 [i_4] = (((((arr_13 [i_4]) ? (arr_13 [i_4]) : (arr_10 [i_4]))) + (((-(arr_13 [i_4]))))));
        var_24 = ((-((~(arr_19 [i_4])))));
        arr_22 [i_4] = (max((arr_13 [i_4]), 285047082));
    }
    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 4; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    {
                        arr_38 [i_7] [i_7] [i_7] [i_7] = (arr_31 [i_5] [i_5] [i_8 + 1] [i_6 - 2]);

                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_25 ^= (+(((arr_36 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_9]) ? ((min((arr_36 [i_9] [i_8] [i_5] [i_5] [i_9]), (arr_27 [i_5])))) : (arr_2 [i_5]))));
                            var_26 = ((((!(arr_34 [i_7] [i_6 - 2] [i_7] [i_7] [i_5 - 2] [i_7]))) ? ((((max((arr_13 [i_7]), (arr_20 [i_7])))))) : ((~((~(arr_10 [i_6])))))));
                        }
                    }
                }
            }
        }
        var_27 = ((~(((((~(arr_11 [i_5] [i_5])))) ^ (((arr_37 [2]) ? (arr_32 [i_5] [i_5] [i_5] [i_5 - 1]) : (arr_10 [i_5])))))));
        arr_41 [i_5] [i_5] = (((arr_27 [i_5]) / ((-(((arr_26 [i_5]) ? (arr_36 [i_5] [i_5] [i_5] [i_5] [6]) : (arr_28 [i_5] [i_5])))))));
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 24;i_12 += 1)
            {
                {

                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {

                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_28 = (min((((-(((arr_42 [i_10]) ? (arr_42 [i_10]) : (arr_43 [i_10] [i_10])))))), ((+(((arr_44 [i_10] [i_10]) / -1352))))));
                            var_29 += (arr_13 [10]);
                            var_30 &= ((~((((((!(arr_43 [20] [20]))))) / (min(7095044874492326975, 1372))))));
                            var_31 *= (((((~(arr_52 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1])))) ? (~-11) : -4272755833776278910));
                        }
                        arr_56 [i_10] [i_10] [i_12] [i_13] [i_11] = (min((((-(arr_50 [i_13] [i_12 - 2] [i_12 - 2] [i_12] [i_12 - 2] [i_12 + 1])))), (arr_15 [i_13])));
                        var_32 = ((+(max((arr_49 [i_11] [i_11] [i_12 + 1] [i_13] [i_13] [i_13]), (arr_52 [i_10] [i_10] [i_11] [i_10] [i_11] [i_10])))));
                    }
                    var_33 = ((!(arr_48 [i_10] [i_10])));
                    arr_57 [i_11] [i_10] [i_11] = min(1, -1391);
                }
            }
        }
    }
    #pragma endscop
}
