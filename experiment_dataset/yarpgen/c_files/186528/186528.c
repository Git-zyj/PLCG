/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_14 = (arr_0 [i_0]);
        var_15 = (arr_1 [i_0 - 2]);
    }
    var_16 = var_5;

    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_17 = 18446744072635809792;
        var_18 = arr_4 [15];
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_19 = ((min((arr_7 [i_2]), (78 * -28233))));
        var_20 = ((~((((arr_5 [i_2] [i_2]) >= (arr_5 [i_2] [i_2]))))));
        var_21 = (arr_7 [i_2]);
        var_22 = (min(28212, var_10));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_23 = 16145;

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_24 = (min(var_24, var_6));
            var_25 = (arr_6 [21]);
            var_26 = -492570245;

            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                var_27 = (((448065192010638160 ? var_11 : (arr_6 [i_3]))));
                var_28 = ((((-(arr_15 [i_5] [i_4] [i_3])))));
                var_29 = (((arr_3 [i_3]) != var_8));
                var_30 = (((~(arr_14 [i_5 + 2] [i_5 - 1]))));
            }
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_31 = (arr_16 [i_3] [i_6]);

            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                var_32 = 537616892;
                var_33 &= (-(((arr_11 [i_6] [i_6] [i_6]) ? (arr_11 [i_3] [i_6] [i_7]) : (arr_11 [i_7] [i_6] [i_6]))));
            }
            var_34 = (((arr_16 [i_6] [i_6]) ? (!var_12) : (!17998678881698913465)));

            for (int i_8 = 3; i_8 < 20;i_8 += 1)
            {
                var_35 = (min(var_35, (((((((min(var_8, var_12)) >= 7316538800746591429))) >= ((max(var_11, 150))))))));

                for (int i_9 = 1; i_9 < 22;i_9 += 1) /* same iter space */
                {
                    var_36 = (min((arr_15 [i_8 + 1] [i_9 - 1] [i_9]), (min(-1706185372, (arr_6 [i_8 + 3])))));
                    var_37 = (((arr_16 [i_3] [i_9]) ? (arr_9 [i_8 + 3]) : (((arr_21 [i_8] [i_6] [i_9 - 1] [i_8 - 3]) << (((arr_11 [i_6] [i_6] [i_9 + 1]) - 6182769560630672334))))));
                    var_38 = 106;
                }
                for (int i_10 = 1; i_10 < 22;i_10 += 1) /* same iter space */
                {
                    var_39 -= var_10;
                    var_40 ^= (arr_27 [i_8 - 3]);

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_41 = 551831961;
                        var_42 = (((min((min((arr_17 [i_6]), (arr_18 [i_3]))), 57)) != ((((((var_6 >= (arr_18 [i_11])))) * (~1))))));
                    }
                    for (int i_12 = 3; i_12 < 20;i_12 += 1)
                    {
                        var_43 = ((!(((arr_34 [3] [13] [13] [i_8] [i_10] [i_12]) >= (arr_8 [i_10])))));
                        var_44 &= (((arr_30 [i_3] [i_12 + 1] [i_3] [i_12] [i_12]) >= ((min((arr_34 [i_8] [i_8] [i_12 - 1] [i_12] [i_3] [18]), 1)))));
                        var_45 *= (arr_23 [i_3] [i_3]);
                        var_46 = (!1);
                    }
                    for (int i_13 = 1; i_13 < 22;i_13 += 1)
                    {
                        var_47 = (min((~18446744072635809804), (((!(arr_19 [i_13 - 1] [i_10 + 1] [i_8 + 1]))))));
                        var_48 = 18507;
                    }
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        var_49 -= -var_11;
                        var_50 |= ((((!(((-(arr_13 [i_10] [4] [11] [i_3]))))))));
                        var_51 = (((!0) != ((((((((arr_21 [i_3] [i_6] [21] [i_10 + 1]) != (arr_13 [i_3] [i_3] [i_3] [i_3]))))) >= (arr_11 [i_3] [i_3] [i_3]))))));
                    }
                }
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    var_52 = ((var_4 << (arr_33 [22] [22] [i_15] [i_6] [i_8 + 1] [i_15])));
                    var_53 *= ((~(arr_5 [i_8] [i_8 - 2])));
                }
                var_54 = ((!(arr_36 [i_3] [i_3] [i_6] [i_6] [i_8])));
            }
            var_55 = 0;
        }
        var_56 ^= (arr_33 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
    }
    #pragma endscop
}
