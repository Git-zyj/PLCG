/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_11);
    var_14 = (((var_8 > var_8) ^ (((!(1 != 1))))));
    var_15 = var_11;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [9] = (((((arr_1 [i_0]) - (arr_1 [11]))) == (arr_2 [i_0])));
            var_16 = (!(((arr_3 [1] [1]) >= (arr_1 [i_0]))));
            arr_6 [i_0] [i_1] = (((-(arr_0 [i_0] [i_1]))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_17 = (min(var_17, ((~(arr_0 [i_0] [i_2])))));
            arr_9 [i_2] [i_0] = ((((!((((arr_8 [6]) + (arr_8 [i_2]))))))) < (arr_3 [i_0] [i_0]));
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_18 = ((~(((((((arr_1 [i_6]) >= (arr_8 [i_3])))) <= (((arr_20 [11] [i_3] [i_4 + 1] [i_5] [i_6]) << (((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]) - 1447312082)))))))));
                            var_19 = ((!(arr_2 [4])));
                            var_20 = arr_10 [i_4] [i_6];
                        }
                    }
                }
            }

            for (int i_7 = 2; i_7 < 15;i_7 += 1) /* same iter space */
            {
                arr_24 [i_0] [i_3] [i_7] = (((+(((arr_14 [i_7]) * (arr_13 [i_0] [i_0] [i_3] [i_0]))))) - (arr_22 [i_7] [2] [i_3] [i_0]));
                arr_25 [i_7 - 1] = arr_23 [i_7 + 1] [i_3];
            }
            /* vectorizable */
            for (int i_8 = 2; i_8 < 15;i_8 += 1) /* same iter space */
            {
                arr_30 [i_0] [i_0] [i_0] [1] = (((~(arr_7 [1]))));
                var_21 = (!(((arr_21 [i_0] [i_0] [i_0] [i_3] [i_8 + 1] [i_8 - 1]) || (arr_4 [13]))));

                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_33 [i_8] [i_8 - 2] = (1 / 1);
                    var_22 = arr_19 [i_0] [i_0] [i_8 + 1] [i_0] [i_0];
                    var_23 = ((!(((arr_22 [8] [i_3] [1] [i_9]) > (arr_14 [i_9])))));

                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_24 ^= (arr_14 [i_0]);
                        var_25 = (max(var_25, (arr_1 [i_0])));
                        arr_36 [i_10] [i_8 - 2] [1] [1] = ((~(((!(arr_13 [i_0] [i_8] [i_9] [i_0]))))));
                        var_26 = (min(var_26, (arr_21 [i_0] [i_0] [0] [i_0] [i_0] [1])));
                    }
                }
                var_27 = (max(var_27, (arr_3 [i_0] [i_0])));
            }
            var_28 = (!(arr_28 [i_3] [i_3] [i_3] [1]));
        }

        /* vectorizable */
        for (int i_11 = 1; i_11 < 1;i_11 += 1) /* same iter space */
        {
            var_29 ^= ((((-(arr_1 [i_0]))) != ((~(arr_7 [1])))));
            arr_39 [i_0] = arr_23 [i_11] [i_11 - 1];
        }
        for (int i_12 = 1; i_12 < 1;i_12 += 1) /* same iter space */
        {
            var_30 = (min(var_30, ((((arr_4 [i_12 - 1]) >> (-1140684155 + 1140684177))))));

            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                var_31 = (i_12 % 2 == zero) ? (((((-(1 >> 1))) != ((((((arr_7 [1]) || (arr_26 [i_0])))) >> (((((arr_14 [i_13]) ^ (arr_43 [i_12] [i_12]))) + 1621604191))))))) : (((((-(1 >> 1))) != ((((((arr_7 [1]) || (arr_26 [i_0])))) >> (((((((arr_14 [i_13]) ^ (arr_43 [i_12] [i_12]))) + 1621604191)) - 1660920842)))))));
                arr_44 [i_12] = (i_12 % 2 == 0) ? ((((((((arr_15 [i_0] [14] [i_13] [1] [i_13] [i_13]) + 2147483647)) >> ((((-(arr_43 [1] [i_12]))) - 1621604137)))) ^ (((!(((arr_26 [i_0]) && (arr_31 [i_12] [i_12] [i_12] [i_12 - 1] [1]))))))))) : ((((((((arr_15 [i_0] [14] [i_13] [1] [i_13] [i_13]) + 2147483647)) >> ((((((-(arr_43 [1] [i_12]))) - 1621604137)) + 1660920810)))) ^ (((!(((arr_26 [i_0]) && (arr_31 [i_12] [i_12] [i_12] [i_12 - 1] [1])))))))));
            }
        }
    }
    #pragma endscop
}
