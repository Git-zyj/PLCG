/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_3 ? var_3 : var_1)) % (min(-810, var_2)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        var_12 = (((arr_1 [i_0]) | ((var_1 ? var_5 : (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_13 = (arr_1 [4]);
        var_14 = (~var_6);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_15 = (max(var_15, ((((arr_3 [i_2] [i_2]) ? (arr_3 [i_2] [i_2]) : 6607336729411550970)))));
        var_16 *= ((var_6 * (arr_4 [i_2])));

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_17 = (max(var_17, (arr_0 [i_3])));
            var_18 = (((((arr_8 [i_2] [i_3]) / (arr_4 [i_2]))) <= (arr_8 [14] [i_2])));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_12 [i_2] [i_2] = (arr_4 [i_2]);
            var_19 = ((((((var_10 + 2147483647) << (288230376151711740 - 288230376151711740)))) ? (arr_11 [i_2] [i_2]) : (arr_7 [i_4])));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_20 = (min(var_20, (((var_4 | (arr_3 [i_5] [i_8]))))));
                            arr_23 [i_7] = -14737;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_21 *= ((~((144 % (arr_1 [i_9])))));
                        var_22 = var_0;
                    }
                }
            }
        }
    }
    #pragma endscop
}
