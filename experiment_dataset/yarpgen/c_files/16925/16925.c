/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= max(var_3, (((var_2 < 44) * (min(var_0, var_1)))));
    var_11 = ((var_4 ? (((var_4 ? (min(385510393, var_5)) : (((385510380 ? 113 : 1)))))) : (max(var_1, ((-107 ? 9 : var_4))))));
    var_12 = ((min(var_1, ((min(385510368, var_2))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [2] = var_0;
        arr_4 [i_0] = (arr_2 [7] [i_0]);
        arr_5 [i_0] = var_0;
        var_13 = (min(689276940119594986, -109683028));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] = (arr_1 [i_1]);

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_14 = (((arr_14 [i_1]) <= var_6));
            arr_15 [1] = (arr_9 [i_2] [i_1]);
            arr_16 [i_1] = ((!(arr_12 [i_2])));
            arr_17 [i_2] = ((-(arr_8 [i_1] [i_2])));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_20 [i_3] |= 17757467133589956636;
        var_15 *= (arr_19 [i_3]);

        for (int i_4 = 2; i_4 < 9;i_4 += 1)
        {
            arr_25 [i_4] [i_4] |= ((~(arr_18 [i_4 + 2] [i_4 - 2])));

            for (int i_5 = 4; i_5 < 11;i_5 += 1) /* same iter space */
            {
                var_16 += ((((((arr_28 [i_3]) * var_8))) ? 2054866697 : (((arr_22 [i_4]) ? 3909456888 : 47))));
                arr_29 [i_5] [i_4] = ((-(-113 ^ var_8)));
                arr_30 [4] = ((+(((arr_21 [7] [i_3]) ? var_5 : var_8))));
                arr_31 [i_3] [i_3] [i_4] [i_5] = (((((arr_24 [i_5] [4] [i_3]) > var_2)) ? (arr_23 [i_4 + 3] [i_5 - 4]) : (((1949351823 ? (arr_27 [i_3] [i_3]) : -1566087012)))));
            }
            for (int i_6 = 4; i_6 < 11;i_6 += 1) /* same iter space */
            {
                arr_35 [i_3] [i_4] [i_3] [i_3] = var_9;

                for (int i_7 = 4; i_7 < 11;i_7 += 1)
                {
                    arr_38 [i_4] [i_4 - 1] [i_6] [i_3] [i_6] [i_3] = ((-123 ? (arr_37 [i_7 - 4] [i_4 + 1] [i_3] [7] [i_3]) : (arr_37 [i_7 - 4] [i_4 + 1] [i_4] [i_4] [i_4])));
                    var_17 = (arr_37 [1] [i_4 + 2] [i_7 - 1] [i_6 - 3] [i_6 - 2]);
                }
            }
        }
        for (int i_8 = 2; i_8 < 8;i_8 += 1)
        {
            var_18 = (((220 ? 3909456937 : (arr_28 [i_3]))));
            arr_43 [i_8] = (~183);
        }
    }
    #pragma endscop
}
