/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (min(var_4, var_5));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = max((-9223372036854775807 - 1), -9223372036854775803);
        arr_3 [i_0] = ((min(var_1, (arr_0 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_11 = var_6;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        arr_13 [i_1] [i_2] [i_3] [i_3] = 9223372036854775807;

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_16 [i_1] [i_3] [i_4 - 1] [i_5] = (arr_7 [i_1] [i_2] [i_4 - 1]);
                            var_12 = (!((((arr_14 [i_1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) ^ (arr_5 [i_3])))));
                            arr_17 [i_1] [i_2] [i_3] [i_4 - 1] [i_5] = (arr_10 [i_1] [i_3] [i_4 - 1]);
                            arr_18 [i_1] [i_2] [i_5] [i_4 - 1] [i_5] |= (min((((var_3 >= (arr_14 [i_4 - 1] [i_2] [i_1] [i_4 - 1] [i_5] [i_4 - 1] [i_2])))), var_7));
                            var_13 = 333496632;
                        }
                        arr_19 [i_1] [i_3] [i_3] [i_4 - 1] = -22142;
                    }
                    /* vectorizable */
                    for (int i_6 = 4; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_2] [i_3] [i_3] = (arr_9 [i_3] [i_2]);
                        arr_23 [i_3] [i_6 + 2] = (((arr_20 [i_1] [i_6 - 4] [i_3] [i_6 - 1]) != (arr_9 [i_1] [i_6 - 1])));
                        var_14 = (((arr_7 [i_1] [i_6 - 3] [i_6 - 1]) % (arr_12 [i_1] [i_2] [i_3] [i_6 - 2] [i_2] [i_3])));
                    }
                    for (int i_7 = 4; i_7 < 18;i_7 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_8 = 3; i_8 < 19;i_8 += 1)
                        {
                            arr_29 [i_1] [i_2] [i_3] [i_3] [i_8 - 3] [i_8 - 2] = (((arr_21 [i_1] [i_7 - 1] [i_8 - 2] [i_8 - 2] [i_3] [i_8 + 1]) | var_9));
                            var_15 = var_5;
                            var_16 = (((arr_7 [i_1] [i_3] [i_1]) | (arr_14 [i_1] [i_2] [i_2] [i_3] [i_3] [i_7 + 1] [i_8 - 3])));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            arr_32 [i_2] [i_3] [i_7 - 3] [i_9] = (((arr_14 [i_3] [i_3] [i_7 + 1] [i_7 + 2] [i_7 - 3] [i_7 - 3] [i_7 - 4]) << (((arr_14 [i_2] [i_3] [i_3] [i_7 - 2] [i_7 + 2] [i_7 + 1] [i_7 - 4]) - 1217962502061758433))));
                            var_17 = arr_25 [i_1] [i_7 - 3] [i_3] [i_7 + 1];
                            arr_33 [i_1] [i_2] [i_3] [i_7 + 2] [i_9] [i_3] = (i_3 % 2 == zero) ? ((((arr_30 [i_7 - 2] [i_3] [i_7 + 1] [i_7 + 2] [i_7 + 1] [i_7 - 3]) >> (((arr_30 [i_7 - 1] [i_3] [i_7 - 1] [i_7 + 2] [i_7 - 4] [i_7 - 1]) - 60032))))) : ((((arr_30 [i_7 - 2] [i_3] [i_7 + 1] [i_7 + 2] [i_7 + 1] [i_7 - 3]) >> (((((arr_30 [i_7 - 1] [i_3] [i_7 - 1] [i_7 + 2] [i_7 - 4] [i_7 - 1]) - 60032)) + 48203)))));
                            arr_34 [i_1] [i_2] [i_3] [i_3] [i_7 - 2] [i_3] [i_9] = (((arr_6 [i_7 + 1]) * (arr_5 [i_1])));
                        }
                        /* vectorizable */
                        for (int i_10 = 4; i_10 < 19;i_10 += 1)
                        {
                            var_18 = (arr_27 [i_10 - 3] [i_7 - 2]);
                            arr_37 [i_1] [i_2] [i_3] [i_7 + 1] [i_10 + 1] [i_10 - 2] [i_3] = 0;
                        }
                        arr_38 [i_1] [i_2] [i_3] [i_3] = (arr_28 [i_1] [i_2] [i_3] [i_3] [i_7 - 1] [i_7 - 1]);
                        arr_39 [i_1] [i_3] [i_3] [i_7 - 2] [i_1] = 9223372036854775807;
                    }
                    arr_40 [i_1] [12] [i_3] |= (min((min((arr_4 [i_1]), (arr_24 [i_1] [i_2] [i_3] [i_1]))), (((!(arr_14 [i_1] [i_2] [i_2] [i_3] [i_3] [i_3] [i_3]))))));
                    var_19 = var_5;
                }
            }
        }
        var_20 = var_0;
    }
    var_21 = (11 <= var_6);
    #pragma endscop
}
