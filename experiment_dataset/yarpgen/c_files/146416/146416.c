/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_12 = (min(var_12, (arr_0 [i_0])));
        var_13 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_2));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_14 = (((((arr_3 [i_1] [i_2]) ? (arr_8 [i_1] [i_1]) : 0)) ^ -0));
            var_15 = (~18446744073709551615);
            var_16 = (((arr_2 [i_2]) * ((var_0 ? (arr_2 [7]) : (arr_8 [i_1] [i_1])))));
        }
        var_17 = ((((((!(arr_6 [i_1] [i_1] [i_1]))) >> (var_2 + 1735584494)))));
        var_18 = ((max((arr_7 [i_1] [i_1] [i_1]), ((var_3 ? var_3 : 32767)))) % (-1562280301 ^ 1));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    {
                        arr_19 [i_3] [i_3] [3] [i_3] = ((-1 && (!6995664094262845779)));

                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_19 = (arr_3 [i_5] [i_5]);
                            var_20 &= (((arr_8 [i_3] [i_4]) ? (var_11 & var_10) : ((((arr_21 [i_3] [i_3] [i_5] [i_6] [i_3] [i_7]) ? -78 : 4601886557701633356)))));
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            var_21 = ((+(((arr_21 [i_8] [i_8] [i_5] [i_5] [i_3] [i_3]) ? 780563067013469874 : -8021))));
                            var_22 *= ((!((((arr_6 [5] [5] [i_6]) ? (arr_16 [i_3] [i_4] [i_3] [6]) : (arr_18 [i_3] [i_8]))))));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_27 [i_3] [i_9] [i_6] [i_6] [i_9] [i_4] = (arr_12 [i_6]);
                            var_23 += (arr_13 [4]);
                            arr_28 [5] [1] = (arr_8 [i_3] [i_9]);
                            arr_29 [i_4] [i_4] [i_4] [i_9] [i_4] = ((arr_7 [i_5] [i_6] [i_9]) ? (arr_8 [i_9] [i_5]) : (arr_22 [i_3] [i_3] [i_5]));
                            arr_30 [i_3] [i_4] [7] [i_4] [i_9] [i_6] = (arr_3 [i_5] [i_5]);
                        }
                    }
                }
            }
            var_24 = (max(var_24, (((2199023254528 ? var_8 : (arr_25 [i_3]))))));

            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                var_25 = (min(var_25, -1));
                var_26 *= (((((1 ? -15522 : -15684))) || var_3));
            }
            var_27 = 1;
        }
        var_28 = (~1);
        arr_34 [i_3] = 7579856245571085543;
    }
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        var_29 = 16640097332762623851;
        var_30 ^= (((arr_36 [i_11]) ? var_4 : ((max(var_6, (arr_36 [i_11]))))));
    }
    var_31 *= var_0;
    var_32 = ((1832754344 ? -30105 : 1));
    #pragma endscop
}
