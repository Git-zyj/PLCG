/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_11 = (((~16383) < ((max((arr_1 [i_0 - 1]), 49152)))));
        var_12 += (((arr_1 [i_0]) ? (((arr_2 [i_0 + 1] [i_0 + 1]) ? (arr_2 [i_0] [i_0 - 1]) : (arr_1 [i_0]))) : (arr_0 [6])));
    }
    var_13 = (min(var_13, (((-23741 || (((~((-32739 ? var_9 : var_5))))))))));

    /* vectorizable */
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            arr_8 [i_1] [i_1] [5] = (arr_0 [i_1]);

            for (int i_3 = 2; i_3 < 8;i_3 += 1) /* same iter space */
            {
                var_14 = (max(var_14, (((var_1 < (((arr_7 [i_2] [i_3]) ? 19911 : var_5)))))));

                for (int i_4 = 2; i_4 < 6;i_4 += 1)
                {
                    var_15 = (((arr_10 [8]) ? 3563799261 : (arr_1 [i_1])));
                    var_16 *= (arr_10 [i_1 + 1]);
                }
                for (int i_5 = 2; i_5 < 7;i_5 += 1)
                {
                    var_17 ^= ((~((var_8 ? (arr_9 [i_1] [i_2] [i_5 + 3] [9]) : (arr_1 [i_3])))));
                    arr_16 [i_1] [i_2] [i_3] [i_3] = (arr_2 [i_1 - 1] [i_5 + 2]);
                    var_18 = (((arr_14 [i_1] [i_2 + 1]) ? (arr_0 [i_1 - 2]) : ((((arr_5 [i_3 - 1]) || var_0)))));
                }
            }
            for (int i_6 = 2; i_6 < 8;i_6 += 1) /* same iter space */
            {
                var_19 = (max(var_19, var_0));
                var_20 = (arr_11 [i_1] [i_1] [i_2] [i_2] [i_2] [i_6]);
            }
            for (int i_7 = 2; i_7 < 8;i_7 += 1) /* same iter space */
            {
                var_21 = ((~(((arr_0 [i_1]) * (arr_10 [i_1])))));
                var_22 = (min(var_22, (((-(((var_9 > (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))))));
                var_23 = (min(var_23, var_6));
            }
        }
        var_24 = (arr_3 [8]);
    }
    #pragma endscop
}
