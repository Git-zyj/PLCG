/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    var_16 = var_6;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = (max(var_17, 5745));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_18 = ((35937 ? 60967 : 60970));
            var_19 = (max(var_19, ((max((max(var_6, ((var_1 ? (arr_3 [i_0]) : var_5)))), var_13)))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            var_20 = (min(var_20, var_11));
            var_21 = (var_9 / var_11);
            var_22 = (max(var_22, (arr_2 [i_2 + 1])));
            var_23 ^= ((var_2 ? 53 : var_1));
        }
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_24 = (max(var_24, ((((var_10 + 2147483647) >> (60967 - 60946))))));
        arr_8 [i_3] = var_1;

        for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
        {
            arr_12 [i_4] [i_4] = (arr_9 [i_4]);
            var_25 = var_14;
            var_26 = (max(var_26, ((((var_1 >> (((arr_11 [i_3] [i_3] [i_3]) - 30))))))));
            arr_13 [i_3 - 1] [i_3] = var_7;
        }
        for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
        {
            var_27 += (arr_7 [i_3 - 1]);
            arr_16 [i_3] [i_5 + 2] [i_5 + 1] = (((arr_14 [i_5 - 1] [i_5 + 2]) ? ((~(arr_9 [i_3]))) : ((60967 ? var_8 : var_4))));

            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                var_28 = ((~((var_4 >> (var_6 - 197)))));
                arr_19 [i_6] = var_10;
            }
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                var_29 = ((-(arr_11 [i_5 + 2] [i_3 - 1] [i_3 - 1])));
                arr_22 [i_3] [i_3] [i_7] [1] = 251;
            }

            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                arr_27 [i_8] = var_2;

                for (int i_9 = 2; i_9 < 21;i_9 += 1)
                {
                    arr_30 [i_8] [i_5 + 2] [i_8] [i_3] = ((!(arr_18 [i_3 - 1] [i_5 + 2] [i_5 - 1] [i_9 - 2])));
                    arr_31 [i_8] [i_8] = ((249 ? 60965 : 60975));
                }
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    arr_35 [i_8] [19] [6] [19] [13] = ((((((arr_26 [1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) ? (arr_15 [19] [19] [1]) : (arr_24 [i_10] [2] [i_5] [i_3 - 1])))) ? var_5 : (arr_14 [i_10] [i_3 - 1])));
                    arr_36 [i_8] = ((1053 ? (((arr_11 [i_3 - 1] [i_8] [i_8]) >> (var_9 - 105))) : var_5));
                    var_30 *= 251;

                    for (int i_11 = 3; i_11 < 19;i_11 += 1)
                    {
                        var_31 ^= (((arr_39 [i_3 - 1] [i_10]) >> (var_9 - 83)));
                        var_32 ^= var_0;
                        var_33 = ((1 >> (((arr_6 [i_3 - 1] [i_3 - 1]) + 118))));
                    }
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        var_34 *= ((var_11 >> (var_8 - 218)));
                        arr_43 [i_3] [i_3] [i_8] [i_3] [i_12] = var_12;
                    }
                }
                for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                {
                    var_35 += ((var_11 >> (arr_17 [6])));
                    var_36 = var_9;
                }
                for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                {
                    arr_48 [10] [i_5] [i_5] [i_5] [20] [i_5] &= 60975;
                    var_37 = var_14;
                }
            }
            for (int i_15 = 1; i_15 < 22;i_15 += 1)
            {
                var_38 += (arr_21 [i_3]);
                var_39 = ((-var_4 ? (~var_8) : ((106 ? 60967 : 15345))));
                arr_51 [i_15] = (arr_38 [i_15 + 1] [1]);
            }
            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                var_40 += ((((arr_18 [6] [i_5] [i_16] [i_16]) >> (arr_17 [4]))));
                var_41 += (arr_42 [i_3 - 1] [i_5]);

                for (int i_17 = 3; i_17 < 20;i_17 += 1)
                {
                    arr_56 [i_3] [i_3] = 96;
                    var_42 = -76;
                }
            }
        }
        for (int i_18 = 1; i_18 < 21;i_18 += 1) /* same iter space */
        {
            arr_60 [4] = var_7;
            var_43 = (min(var_43, (((-24 ? ((-(arr_18 [17] [17] [i_18] [i_18 - 1]))) : var_7)))));
            arr_61 [i_18] = ((((92 ? 7 : var_9)) >> (var_0 - 32642)));
        }
    }
    #pragma endscop
}
