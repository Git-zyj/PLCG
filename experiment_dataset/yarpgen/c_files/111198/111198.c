/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = var_11;

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_15 = 8184;
                        var_16 ^= (~((-8271770202276604017 ? var_13 : var_6)));
                        var_17 = (((arr_5 [i_0 + 1]) + (-2147483647 - 1)));
                        var_18 = ((2147483647 ? 8271770202276604015 : -8271770202276604038));
                        var_19 = (((142 ^ -8271770202276604017) * (arr_6 [i_3] [i_1] [i_1] [i_0 + 1])));
                    }
                    arr_12 [i_0] [i_1] [i_2] [i_0] = (max(8271770202276604031, 40442));
                    var_20 = ((((min(8388607, -8271770202276604031)) / 11665)));
                    arr_13 [i_0] [i_1] [i_0] = var_9;
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_17 [i_4] [i_4] = 4294967285;
        arr_18 [i_4] = min((max(-1016438157, 212)), (arr_15 [i_4]));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_21 = ((~(min((((-(arr_19 [i_5] [i_5])))), ((var_12 ? var_11 : 18446744073709551613))))));
        arr_22 [i_5] [1] = (max((min((((var_11 >= (arr_21 [i_5])))), 576716067)), (min(-var_3, (25661 >= 8657)))));
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_22 = (max(var_22, ((((-((var_7 ? 587541747225306184 : var_3))))))));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_23 = (min(var_23, -2479293758));
            arr_29 [i_7] = (var_7 ^ -105);
            var_24 = (max(var_24, (((1 <= (arr_23 [i_7]))))));
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_25 = (-763256129 - -24694);
                            var_26 = 3832182237;
                            arr_38 [i_6] [i_7] [i_8 - 1] [i_7] [i_6] = ((213 ? (arr_5 [i_10]) : (arr_5 [i_6])));
                        }
                    }
                }
            }
            var_27 = ((!(arr_31 [i_6] [i_7] [i_6])));
        }
        for (int i_11 = 2; i_11 < 19;i_11 += 1)
        {
            var_28 = (((((((((arr_40 [i_11 + 2]) ? 10248372583447011108 : (arr_24 [i_6])))) ? 1 : (arr_27 [i_6] [i_11 - 1] [i_6])))) ? ((((1503535690 ? (arr_36 [i_6] [4] [i_6] [i_6] [i_6]) : (arr_36 [i_6] [i_6] [i_6] [i_6] [i_11]))))) : var_10));
            arr_41 [6] [i_11] = var_9;
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            var_29 |= (831401064 | 3295519283);
            /* LoopNest 2 */
            for (int i_13 = 3; i_13 < 18;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    {
                        var_30 += 3979358706;
                        arr_48 [i_13] [i_13 - 2] [i_14] [i_13] = 18;
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            arr_51 [i_15] [i_6] |= ((-(((524287 <= (arr_6 [i_6] [i_15] [i_15] [i_15]))))));
            arr_52 [i_15] [i_6] = ((-(((((25659 ? var_12 : 56))) / 587541747225306184))));
            var_31 = (!(arr_9 [i_6] [i_6] [i_6]));
        }
    }
    #pragma endscop
}
