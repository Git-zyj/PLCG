/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (3169 > 50140);
        arr_3 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                {
                    arr_12 [i_2] = (((~(arr_7 [i_2]))));
                    var_10 = (min(var_10, (((!(((var_1 / (arr_6 [i_1] [i_1] [i_1])))))))));
                    arr_13 [i_1] [i_2] [i_1] [i_1] = ((((((-(arr_0 [i_1])))) >= (51085 | var_0))));
                    var_11 *= (min(((max(3170, (-127 - 1)))), -var_7));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                {
                    arr_20 [i_1] [0] [i_5] = (arr_17 [i_1]);
                    arr_21 [i_1] [i_4] [i_4] = (arr_0 [i_1]);
                    var_12 *= 1879048192;
                    arr_22 [i_1] [i_1] [i_1] = (arr_6 [i_5] [i_4] [6]);
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
    {
        arr_25 [i_6] [i_6] = ((-(min((134 < 51084), (((arr_11 [i_6] [i_6] [i_6] [i_6]) ? -1879048197 : -1461551602))))));

        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            var_13 = var_4;
            arr_29 [i_6] [i_7] [i_7] = ((-(min(-3171, (arr_5 [i_6])))));
            arr_30 [i_6] [i_7] = (arr_26 [i_7] [i_6] [i_6]);
        }
        var_14 = (min(var_14, var_6));
        arr_31 [i_6] [i_6] = ((arr_14 [i_6]) + (arr_14 [i_6]));
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                {
                    var_15 = (arr_14 [i_10]);

                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_16 -= (((min((((arr_27 [i_8] [i_9] [i_11]) ? var_7 : 24547)), (!55994)))) | (min((arr_41 [i_10]), var_0)));
                        var_17 = (((var_3 + 2147483647) << (((-3170 + 3188) - 18))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
