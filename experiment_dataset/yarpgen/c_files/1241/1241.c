/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_17 -= var_12;
        var_18 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            var_19 -= (~-21430);
            var_20 = (arr_7 [i_2 - 3] [3]);
            arr_8 [3] [5] [0] = ((var_9 ^ (arr_4 [i_2 + 3])));
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                var_21 = ((2147483647 ^ (arr_11 [i_4 + 1] [i_4] [i_4 - 1])));
                var_22 = (((arr_11 [0] [i_4] [1]) ? var_9 : (arr_9 [11] [i_4 + 1] [9])));

                for (int i_5 = 4; i_5 < 10;i_5 += 1)
                {

                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        arr_18 [6] [i_4] [2] = (arr_2 [i_6 - 1]);
                        arr_19 [5] [10] [11] [5] [i_4] [7] = ((~(arr_3 [i_6 - 1] [i_5 + 1])));
                    }
                    var_23 = (arr_9 [1] [7] [11]);
                }
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    var_24 = 54082;

                    for (int i_8 = 2; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        arr_24 [i_4] = (arr_14 [11] [i_4] [9] [1] [6]);
                        arr_25 [7] [11] [i_4] [8] [10] [8] = (arr_14 [7] [i_4] [1] [1] [5]);
                    }
                    for (int i_9 = 2; i_9 < 11;i_9 += 1) /* same iter space */
                    {
                        arr_29 [9] [10] [9] [i_4] = (arr_3 [4] [i_7]);
                        var_25 = (((arr_27 [1] [9] [4] [5] [9]) * (!-1948122505)));
                    }
                }
                var_26 |= var_0;
                arr_30 [i_4] [5] = 1;
            }
            var_27 = ((~(arr_3 [1] [i_3])));
        }
        for (int i_10 = 4; i_10 < 10;i_10 += 1)
        {
            arr_33 [4] [1] [5] = 1;
            var_28 = (arr_14 [i_10 + 2] [i_10] [i_10 + 1] [i_10 - 2] [4]);
            arr_34 [5] = (((arr_3 [6] [11]) * (0 * 16252928)));
            var_29 ^= (~((13994168090891135272 ? (arr_21 [7] [0] [10] [0]) : (arr_28 [2] [4] [7] [10] [9]))));
        }
        var_30 = (((arr_10 [1] [10]) <= (arr_2 [i_1])));
        arr_35 [11] [1] = -0;
    }

    for (int i_11 = 1; i_11 < 7;i_11 += 1)
    {
        var_31 = (max(((((arr_14 [8] [i_11] [4] [6] [1]) == (((!(arr_3 [7] [0]))))))), (max((arr_13 [i_11 + 1] [3] [i_11] [1]), (arr_13 [i_11 + 1] [3] [i_11] [1])))));
        arr_39 [i_11] = ((((~((-(arr_11 [4] [i_11] [1]))))) ^ (((!(arr_23 [0] [6] [5] [5] [2] [9] [1]))))));
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_32 = (((arr_41 [4] [13]) > var_8));
        arr_44 [4] = ((!(((-((((arr_41 [8] [12]) != (arr_42 [1] [4])))))))));
    }
    var_33 -= ((max((47118 + 11518830225357290057), var_3)));
    #pragma endscop
}
