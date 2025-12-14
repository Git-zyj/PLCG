/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = (~10610262975673805069);
        var_16 = (arr_1 [5]);
        var_17 = (((!(arr_0 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_18 = ((~(arr_4 [i_1] [i_1])));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_19 = ((-((~(arr_5 [i_1] [i_2])))));
                        var_20 = (((arr_11 [i_1] [i_2] [i_2] [i_3]) % ((((arr_9 [i_1] [i_3] [i_4]) * (arr_5 [i_1] [i_1]))))));
                    }
                }
            }
            var_21 = ((~(((arr_11 [i_1] [10] [i_2] [10]) * (arr_10 [i_1] [i_1])))));
            var_22 = (arr_3 [i_2]);
            var_23 = ((-(arr_4 [i_1] [i_1])));
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
        {
            var_24 = (((0 | 49378) != ((-(arr_14 [0] [i_5] [i_1] [i_1])))));
            var_25 = arr_18 [i_5] [i_1] [i_1];
            var_26 = (max(var_26, ((-(((!(arr_4 [i_1] [i_1]))))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 11;i_7 += 1)
                {
                    {
                        var_27 = (((((!(arr_23 [i_5] [i_5] [i_5] [5] [i_5] [1])))) >= 49378));
                        var_28 = ((+((((arr_6 [i_7]) < (arr_3 [i_1]))))));
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_29 = (arr_33 [i_1]);
                        var_30 = (arr_16 [i_10]);
                        arr_34 [i_10] [9] [i_9] [i_9] [10] [i_1] = (arr_9 [i_1] [i_9] [i_10]);
                    }
                }
            }
            var_31 ^= (arr_10 [i_1] [i_1]);
            arr_35 [i_8] = (arr_15 [i_8]);
            var_32 = ((~((~(arr_12 [i_1] [i_1] [i_8] [i_8])))));
        }
        var_33 = (((((arr_20 [i_1] [i_1]) >> (((arr_28 [i_1] [i_1] [i_1] [i_1]) + 457734312)))) % (arr_5 [i_1] [10])));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {

        for (int i_12 = 1; i_12 < 22;i_12 += 1)
        {
            var_34 = (arr_38 [i_11] [i_12]);
            var_35 = (arr_39 [i_11]);
            arr_42 [i_12] [i_12 + 1] = 34457;
            var_36 = (arr_36 [i_12]);
            var_37 &= ((~(arr_41 [23] [i_11] [i_11])));
        }
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            var_38 = (((~(arr_36 [1]))));
            var_39 = (arr_41 [16] [i_11] [i_11]);
        }
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    {
                        var_40 = (arr_43 [i_15]);
                        var_41 = 255;
                        var_42 = (arr_39 [i_14]);
                    }
                }
            }
            arr_52 [10] = arr_40 [i_11] [i_11] [i_11];
        }
        var_43 = (min(var_43, (arr_50 [i_11] [i_11])));
    }
    #pragma endscop
}
