/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_1] [9] = ((((min((arr_4 [i_0]), 2501377561152629338))) < (((~((((arr_1 [i_0]) != (arr_1 [i_1])))))))));
                var_15 = (min((((arr_4 [i_1 - 3]) ? (arr_4 [i_1 - 3]) : (arr_4 [i_1 - 1]))), (min((arr_4 [i_1 - 3]), (arr_4 [i_1 + 2])))));
                var_16 = ((var_2 != (((max(1, var_0))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((((arr_7 [i_0] [i_0] [i_0] [i_0]) % 56)));
                    arr_10 [i_0] [i_0] [i_0] [i_0 + 3] = (arr_3 [i_2] [i_0] [i_0]);
                    var_17 = 15484915325006400783;
                    var_18 = (((arr_7 [2] [i_1 - 2] [2] [2]) && 23749));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_3] = (arr_0 [i_1]);
                    var_19 = ((17592186044412 ? (arr_1 [i_1 - 3]) : (arr_3 [i_0] [i_0] [0])));

                    for (int i_4 = 3; i_4 < 10;i_4 += 1)
                    {
                        arr_16 [i_0 + 3] [i_1] [i_3] [i_4] = ((((((arr_4 [i_0 - 1]) & 1))) ? (((arr_8 [i_4] [i_4]) ? (arr_3 [i_0] [i_0] [i_0]) : var_8)) : (arr_15 [i_0] [i_1] [i_3] [i_4 + 1])));

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_20 = ((-16382 / (arr_17 [i_4] [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 1] [i_4 + 1])));
                            var_21 = (arr_14 [i_0] [i_1] [i_3] [i_4] [i_5]);
                        }
                        var_22 &= ((!(arr_11 [i_0] [i_1 - 2] [i_3] [i_0])));
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_23 = (((arr_21 [i_0] [i_0] [i_0] [i_6] [i_0]) && var_5));
                        var_24 = (min(var_24, 23749));
                        arr_22 [i_6] = 18446726481523507203;
                    }
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        var_25 ^= arr_4 [i_1 + 1];
                        var_26 = (((arr_20 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0] [i_0]) ? (((arr_26 [i_1]) ? 255 : (arr_25 [i_0] [i_0] [i_3] [i_7]))) : var_0));
                        arr_27 [i_0] [8] [i_0] [i_0 + 2] [i_0] = (arr_6 [i_3] [5] [i_1 - 3] [i_1 - 3]);
                    }
                    var_27 = (arr_6 [i_0] [i_0 + 2] [i_0 + 2] [i_3]);
                }
                var_28 = ((~(arr_0 [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 17;i_9 += 1)
        {
            {
                var_29 = (+(((!var_8) ? (min(18446744073709551615, 7325062989743036002)) : (((min((arr_30 [i_8]), (arr_31 [i_8]))))))));

                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    arr_35 [i_9] = min((arr_30 [i_8]), ((((max(var_0, (arr_34 [i_9])))) ? 65011712 : (min((arr_34 [i_9]), var_11)))));
                    var_30 = ((((arr_32 [i_10]) <= (max(-18823, var_4)))));
                    var_31 = var_3;
                    var_32 = (max(var_32, 4279753126));
                }
                var_33 += 13155376874169947078;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                {
                    var_34 = (((max(10992713759588422828, var_10))));
                    var_35 = ((!((min((arr_36 [i_12 - 1]), (arr_32 [i_12 - 1]))))));
                    arr_43 [i_12] [i_12] = -3160667309231826372;
                }
            }
        }
    }
    #pragma endscop
}
