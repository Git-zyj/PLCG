/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = var_8;
        arr_5 [i_0] [11] = ((((!(!-1079491284)))));
    }

    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] = (((arr_7 [i_1] [i_1]) ? ((243 ? (arr_6 [i_1]) : 4294967295)) : (((-2798930418524786693 ? ((~(arr_6 [i_1]))) : (arr_7 [i_1] [i_1]))))));
        arr_9 [i_1] = (min((min((arr_6 [i_1]), var_8)), ((min((arr_7 [i_1 - 1] [i_1]), (arr_6 [i_1]))))));
        arr_10 [i_1] = ((((-(min(var_9, (arr_7 [i_1] [i_1]))))) * (((0 >> (35184372087808 - 35184372087789))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_12 = (min(var_12, var_9));

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            arr_16 [8] [i_3] &= ((8386560 ? var_6 : (((!(arr_11 [i_2]))))));
            arr_17 [i_2] [i_3] = (((arr_0 [i_2] [i_2]) ? (arr_7 [i_2] [i_2]) : 75));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {

                for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        arr_28 [i_2] [2] [i_2] [i_2] [i_6] [i_2] = (arr_13 [10]);
                        var_13 = (max(var_13, (((-var_0 ? (arr_25 [i_4] [i_4] [i_6 + 2] [6] [i_6] [i_6 + 3]) : (arr_0 [i_2] [i_4]))))));
                        var_14 -= var_7;
                    }

                    for (int i_8 = 4; i_8 < 11;i_8 += 1)
                    {
                        arr_31 [i_8] [i_8] [5] [i_6] [i_2] [i_2] = var_10;
                        var_15 = (min(var_15, (arr_29 [i_6] [i_6] [i_6] [i_6 - 1] [i_6 + 3])));
                        var_16 = (max(var_16, (((var_10 << (13 - 13))))));
                    }
                    var_17 = (arr_29 [5] [5] [i_5] [5] [5]);
                }
                for (int i_9 = 1; i_9 < 9;i_9 += 1) /* same iter space */
                {
                    var_18 *= (arr_32 [i_5] [i_5] [i_9 + 1] [i_9] [i_9 + 1]);
                    var_19 ^= (~var_7);
                }
                for (int i_10 = 1; i_10 < 9;i_10 += 1) /* same iter space */
                {
                    arr_37 [i_2] [2] [i_2] [i_5] [i_10 + 3] [i_10 + 1] = var_9;
                    var_20 = 27300;

                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        arr_41 [i_2] [i_2] [i_2] [i_2] [i_2] [1] [i_11] = (arr_18 [i_2] [5] [i_5]);
                        var_21 = (max(var_21, -11904));
                    }
                    var_22 = arr_2 [i_10 + 2] [i_10 + 3];
                }
                arr_42 [10] [i_4] [i_4] &= (((arr_25 [i_2] [i_4] [6] [2] [i_5] [i_2]) ? (arr_25 [0] [0] [i_4] [6] [i_5] [0]) : var_4));
            }
            arr_43 [i_2] [i_2] = (38235 | 27305);
        }
        arr_44 [i_2] [i_2] = (((arr_11 [i_2]) ? (((1 ? 4286580724 : 59))) : (arr_36 [i_2] [i_2] [i_2] [1])));
    }
    var_23 = ((var_6 ? var_10 : (~var_7)));
    #pragma endscop
}
