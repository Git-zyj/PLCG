/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_19 += (((arr_3 [i_1] [i_0] [1]) && (arr_1 [i_0])));

            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                var_20 = -var_18;
                var_21 = -175;
            }
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                {
                    var_22 = ((175 / (arr_8 [i_0])));

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_23 = ((var_16 <= (arr_2 [i_0])));
                        var_24 = (max(var_24, 175));
                        var_25 = -158;
                        var_26 = (81 <= (~175));
                        var_27 = (arr_15 [i_0] [i_1] [i_3] [i_4] [1]);
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_28 = (((arr_12 [i_1] [i_4]) >> (63 - 52)));
                        var_29 = (((arr_2 [i_0]) <= var_3));
                        var_30 = ((-(var_11 * 60)));
                        var_31 = (((arr_7 [i_0] [i_0] [i_6]) ? (arr_11 [i_6] [i_1] [i_0]) : (arr_18 [i_0] [i_0] [i_0] [i_0] [i_3] [i_4] [i_6])));
                        var_32 = ((arr_9 [i_0]) ? (arr_9 [i_3]) : (arr_9 [i_1]));
                    }
                    var_33 = ((-1473965279 ? 1 : 3767709700));
                    var_34 = (arr_9 [12]);
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                {
                    var_35 = var_1;
                    var_36 = ((196 ? 81 : 1));
                    var_37 ^= (((arr_18 [i_0] [i_0] [i_1] [i_7] [i_1] [i_3] [i_7]) > var_3));
                }
                for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                {
                    var_38 = ((!(arr_16 [i_0] [i_1])));

                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        var_39 = ((196 + (arr_23 [7] [i_1] [i_3] [8] [i_1] [7])));
                        var_40 = ((((((arr_10 [i_0]) ? (arr_13 [i_0] [i_3] [i_3] [i_8]) : -1))) ? (arr_25 [i_9] [i_9 - 1] [i_9 - 1] [0] [i_9 - 1]) : 183));
                        var_41 -= var_6;
                        var_42 = (((arr_15 [i_0] [4] [i_3] [i_3] [i_9 - 1]) ? (arr_15 [6] [i_8] [i_9] [i_9] [i_9 - 1]) : (arr_15 [i_1] [i_3] [i_3] [i_9 - 1] [i_9 - 1])));
                    }
                    var_43 = ((var_3 > (arr_8 [i_0])));
                    var_44 = ((1 ? (arr_4 [i_0] [i_3]) : (arr_4 [i_0] [i_0])));
                    var_45 &= 94;
                }
                var_46 -= (((arr_14 [1] [i_1] [i_3]) & 0));
                var_47 = ((((((arr_20 [7] [i_1] [i_3] [7]) % var_13))) ? ((var_1 / (arr_10 [i_0]))) : (2667642404 <= 1)));
            }
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                var_48 = var_2;
                var_49 = ((arr_28 [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 1]) ? 1 : (((!(arr_27 [i_0] [i_1] [i_1] [i_0])))));
            }
            var_50 = (max(var_50, (((!(((-1073741824 * (arr_26 [i_1] [i_1] [4] [i_0] [i_0] [i_1])))))))));
            var_51 = ((arr_9 [i_0]) ? var_2 : (arr_16 [i_0] [i_1]));
            var_52 = arr_12 [i_0] [i_1];
        }
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            var_53 = (arr_4 [i_0] [i_0]);
            var_54 = ((~((var_7 >> (var_17 - 150)))));
        }
        for (int i_12 = 3; i_12 < 13;i_12 += 1)
        {
            var_55 = (arr_32 [i_0] [i_12] [i_0]);
            var_56 = (((arr_28 [i_12 + 1] [i_12] [i_12 - 3] [i_12 - 1]) > (arr_28 [i_12 - 3] [i_12 - 3] [i_12 + 1] [i_12 + 1])));
            var_57 = ((arr_28 [i_0] [10] [i_12 + 1] [i_12]) + (arr_28 [4] [i_12] [i_12 + 1] [1]));
        }
        var_58 = (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_59 = (((arr_9 [i_0]) < (arr_11 [1] [i_0] [i_0])));
    }
    var_60 = (524287 + var_6);
    #pragma endscop
}
