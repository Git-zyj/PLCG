/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((var_2 ? ((min(var_0, var_0))) : var_5));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = var_12;
        var_21 ^= ((!(arr_1 [i_0 - 3])));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] |= ((((min((min(var_1, var_9)), (max(var_14, 2152263238347304995))))) ? (min((arr_4 [i_1 - 1]), -var_5)) : ((((arr_3 [i_1 + 3]) > var_17)))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_22 ^= (((3009974790 <= 1284992487) ? (arr_3 [i_1 + 2]) : (min(1284992506, 65529))));
            arr_11 [9] = ((~(((var_4 - var_7) | (arr_10 [i_1 - 1])))));
        }

        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            arr_14 [i_1] [i_3] [i_3] = (arr_4 [i_1 + 1]);
            var_23 ^= (max((min(((3009974790 ? var_9 : (arr_7 [i_1]))), ((((arr_5 [i_1] [i_3]) % (arr_5 [i_1 - 1] [i_3])))))), (arr_12 [i_1] [i_1])));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_24 = ((((((arr_13 [i_1 + 2] [i_4] [i_1]) ? 1 : var_0))) == -var_1));
            arr_17 [i_1] = ((var_5 ? var_6 : (arr_10 [i_1 + 3])));
        }
    }
    for (int i_5 = 1; i_5 < 23;i_5 += 1)
    {
        var_25 |= 31451;
        var_26 ^= (min((((((var_7 ? var_5 : var_15))) ? (arr_18 [1]) : 179)), ((((((arr_19 [i_5]) ? 3009974771 : 6385360053203980876)) <= (arr_18 [i_5]))))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    {
                        var_27 = (min(var_13, (arr_18 [i_5 - 1])));
                        var_28 = max(((18386 ? 32747 : -2114328115)), (1873 + var_18));
                        arr_27 [i_7] [i_8] = ((((min(var_0, var_11))) || (arr_20 [i_5 - 1] [i_5 + 1])));
                    }
                }
            }
        }
        var_29 = ((!((!(1 || 3009974817)))));

        /* vectorizable */
        for (int i_9 = 1; i_9 < 22;i_9 += 1)
        {
            var_30 = (((var_9 - 1874706285) <= -var_16));
            var_31 = (((arr_19 [i_5 + 1]) <= 142));
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    {
                        var_32 ^= -1;
                        var_33 ^= (((arr_24 [i_11] [i_9] [22]) / (arr_24 [i_11] [i_11] [i_5 - 1])));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_12 = 2; i_12 < 23;i_12 += 1)
        {
            arr_39 [i_5] = (arr_23 [i_5 - 1] [i_5 + 1]);

            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                var_34 = ((!(((~(arr_18 [i_5]))))));
                var_35 = ((3101980767 ? var_16 : (((arr_34 [i_5] [i_5 + 1] [i_13] [i_12]) | 6465498989501222815))));
            }
            var_36 = ((arr_19 [i_12 - 1]) << (arr_19 [i_12 - 1]));
            var_37 = ((!(((32 ? var_9 : var_18)))));
        }
        for (int i_14 = 4; i_14 < 22;i_14 += 1)
        {
            var_38 = ((-((min(var_7, var_14)))));
            var_39 = (min((((~var_18) ? (arr_22 [i_14 + 1] [i_5 - 1]) : (arr_44 [i_14] [i_14 - 4] [i_14 + 1]))), -1));
            var_40 = 1;
            var_41 |= ((((~(arr_28 [i_14] [i_14 - 4] [i_14 + 2]))) & ((~(arr_28 [3] [5] [i_14 - 1])))));
        }
        for (int i_15 = 3; i_15 < 22;i_15 += 1)
        {
            arr_50 [i_15] [i_15] [i_15] = ((!(((-32747 > 3101980767) <= -var_9))));
            arr_51 [i_5] = -7253460028266528366;

            /* vectorizable */
            for (int i_16 = 0; i_16 < 24;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 24;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 21;i_18 += 1)
                    {
                        {
                            var_42 ^= (arr_28 [i_15] [i_15 - 3] [i_15 - 3]);
                            arr_60 [1] [i_17] [i_16] [1] [i_5] = ((2114328115 ? 3503073626 : var_18));
                            var_43 ^= ((var_3 ? var_15 : var_8));
                        }
                    }
                }
                arr_61 [i_5] [i_5] [10] [i_16] = (((arr_58 [i_5 - 1] [i_5 + 1] [13] [i_15] [i_16]) <= (arr_58 [i_5] [i_15 + 1] [i_5] [i_15] [i_16])));
                var_44 = (arr_26 [i_16] [i_5 - 1] [i_5 - 1] [i_16]);
            }
        }
    }
    var_45 |= ((max((4414388174250349133 == 32747), var_2)) != (3101980780 || var_9));
    #pragma endscop
}
