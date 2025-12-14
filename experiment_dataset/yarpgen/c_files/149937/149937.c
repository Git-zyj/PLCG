/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((min(var_13, ((3165 ? 25643 : var_13)))) - (39887 <= var_10)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = max(3918278228, 31);
        var_19 *= (((!var_8) > -706806580));
        var_20 = (min(490, 3175));
        var_21 = (max(var_21, ((((((((min(1, (arr_1 [i_0])))) ? ((-(arr_0 [i_0]))) : (!31)))) ? (min(((var_12 ? (arr_1 [i_0]) : 18014398509449216)), var_8)) : (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_22 = min((min((min((arr_2 [i_1] [i_1]), 376689068)), ((max(25643, -845433564))))), -845433564);
        var_23 = 13547;
        arr_6 [i_1] = ((!(((-((202 ? var_12 : (arr_4 [i_1] [i_1]))))))));
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    arr_15 [i_2] = (min((((!((max(1, var_2)))))), ((26433 ? (arr_11 [i_2 - 1]) : 26))));

                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        var_24 = (max((((~(arr_19 [i_5 + 2] [i_5] [i_5 + 1] [i_2] [i_5])))), (((max(var_8, var_2)) | var_12))));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_25 = ((!(!var_8)));
                            var_26 = ((var_2 ? (arr_19 [i_2 - 1] [1] [i_6] [i_2] [i_4]) : (var_8 + var_11)));
                            arr_23 [i_2] [i_2 - 1] [i_2] [i_2] [i_2] [i_2] = ((!((!(arr_14 [i_2] [i_3] [i_4])))));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_27 |= var_14;
                            arr_26 [i_2] [i_4] = (min((~var_16), (arr_7 [i_3] [i_5 + 2])));
                        }
                        /* vectorizable */
                        for (int i_8 = 3; i_8 < 12;i_8 += 1)
                        {
                            var_28 *= -8;
                            var_29 = (!(arr_22 [i_2] [i_2 - 1] [10] [i_2] [i_2 - 1]));
                        }
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_32 [i_2] [i_2] = (((((67108864 ? 18369126998666367577 : -10317))) ? (((var_6 ? 5873 : 0))) : ((28035 ? -576460752303423488 : var_8))));
                        var_30 = (max(var_30, (((-(((var_14 || (arr_24 [i_2] [i_2 - 1] [i_4] [i_3])))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
