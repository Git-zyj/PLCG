/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = 153;
                    var_18 = (((arr_4 [i_1 + 2] [i_1 + 4]) || (arr_4 [i_1 + 2] [i_1 + 4])));
                }
            }
        }
    }
    var_19 = ((194 <= ((9 ? 1 : 1))));

    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_20 = ((var_11 ? var_6 : (((((arr_10 [i_3] [i_3]) != (arr_10 [i_3] [i_3])))))));

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_21 = 0;
            var_22 = (((min(1, (arr_10 [i_3] [i_4])))));
        }
        var_23 += (arr_10 [i_3] [i_3]);
        var_24 = ((((((arr_9 [i_3] [i_3]) - (arr_12 [0])))) ? 1 : (arr_12 [i_3])));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_25 = (min(201, 169));

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_26 = ((-((max(1, 1)))));
            var_27 = -19620;
        }
        /* vectorizable */
        for (int i_7 = 3; i_7 < 20;i_7 += 1)
        {
            var_28 = 12827;
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    {
                        var_29 = (arr_17 [i_9] [i_7 - 1]);
                        var_30 = 1;
                        var_31 &= (arr_17 [i_7] [i_7 - 3]);

                        for (int i_10 = 1; i_10 < 19;i_10 += 1)
                        {
                            var_32 = (1 >= -14483);
                            var_33 += var_3;
                            var_34 *= (-9223372036854775807 - 1);
                            var_35 = (arr_17 [i_7] [i_8 + 2]);
                        }
                        for (int i_11 = 4; i_11 < 18;i_11 += 1)
                        {
                            var_36 = (arr_20 [i_11] [i_11 + 2]);
                            var_37 = (arr_23 [i_7] [i_7] [i_7] [i_8]);
                        }
                        var_38 = (arr_20 [i_7] [i_9]);
                    }
                }
            }
        }
    }
    for (int i_12 = 1; i_12 < 17;i_12 += 1)
    {
        var_39 = (min(1, var_7));
        var_40 = (arr_18 [i_12 + 1]);
        var_41 = (((((min(18446744073709551613, var_4))) ? (((arr_24 [i_12] [i_12] [i_12]) >> (var_5 - 118801185070638008))) : var_12)));
        var_42 = ((-((max((arr_32 [i_12 + 1] [i_12 + 1] [i_12 - 1] [19] [i_12]), (arr_32 [i_12] [i_12 + 1] [6] [i_12 - 1] [i_12 - 1]))))));
        var_43 = (min((((arr_24 [i_12 + 1] [i_12 + 1] [i_12 - 1]) ? (arr_20 [i_12 + 1] [i_12 - 1]) : (arr_24 [i_12 - 1] [i_12 - 1] [i_12 - 1]))), ((1 / (arr_24 [i_12 + 1] [i_12 + 1] [i_12 - 1])))));
    }
    var_44 += var_12;
    #pragma endscop
}
