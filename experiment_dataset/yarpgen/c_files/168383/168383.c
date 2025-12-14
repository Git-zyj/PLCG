/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= -994099750;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_10 [i_1] [i_1] = (((((min(var_3, (arr_8 [i_1] [i_1] [i_1] [i_3])))) ? ((min(var_3, (arr_9 [i_0] [i_0] [i_0])))) : -99)));
                        arr_11 [i_3] [i_1] [i_2] [i_3] &= (((((((var_4 ? var_1 : 0))) ? (-83 % var_5) : ((var_2 ? 2497952128 : var_0)))) << (((arr_7 [i_2] [i_2] [i_2] [i_2] [i_2]) + 5230))));
                        arr_12 [i_0] [i_3] [i_0] [i_3] &= ((-1239205288029515730 * (((262601828 ? 0 : 0)))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            var_11 *= ((var_9 | (arr_14 [i_1] [i_1] [i_2] [i_3] [i_4] [i_4])));
                            var_12 = (((((~(arr_8 [i_1] [i_1] [i_2] [i_2])))) ? 1239205288029515729 : (((arr_0 [i_1] [i_1]) ? (arr_2 [i_4]) : (arr_13 [i_4] [i_3] [i_1] [i_1] [i_1] [i_0])))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            var_13 = (min(var_13, ((((arr_17 [i_3]) ? 1239205288029515737 : (arr_17 [i_3]))))));
                            arr_18 [i_5] [i_1] [i_2] [i_0] [i_1] [i_0] = ((~((2497952148 ? (arr_15 [i_5] [14] [i_2] [i_1] [14]) : 1797015167))));
                            var_14 = 1797015157;
                            var_15 = (min(var_15, (((10 / (arr_5 [i_0] [i_3] [i_2] [i_3]))))));
                            arr_19 [5] [i_3] [i_1] [i_1] [i_0] = ((~((~(arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            var_16 += (min((arr_16 [i_3] [i_3] [i_6]), var_9));
                            var_17 = (min(var_17, (((var_8 && ((((((arr_22 [i_6] [1] [i_2] [7] [i_0]) && 2497952146)) ? var_2 : (2497952142 && var_2)))))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        var_18 *= (((arr_5 [i_7 + 1] [i_7] [i_7 - 1] [i_7]) ? (arr_5 [i_7] [i_7] [i_7 - 2] [i_7 - 1]) : var_0));
                        var_19 = (min(var_19, var_6));
                        arr_27 [i_0] [i_0] [i_1] [i_2] [i_0] [i_1] = (((arr_22 [i_0] [i_0] [i_2] [i_0] [i_2]) ? (((arr_17 [i_1]) ? var_7 : var_2)) : var_1));
                    }
                    /* vectorizable */
                    for (int i_8 = 3; i_8 < 18;i_8 += 1)
                    {
                        var_20 = (2497952142 & 15537384360030084173);
                        var_21 = (max(var_21, -2497952129));
                        var_22 *= (arr_6 [i_8 - 1] [i_0] [i_2]);
                        var_23 -= (((arr_29 [i_8 - 2] [i_8 - 2] [i_8 - 2] [8]) & (arr_8 [12] [i_1] [i_2] [i_2])));
                    }
                    var_24 = (max(var_24, (((+-11) ? ((min((arr_29 [i_0] [i_0] [i_2] [8]), 30409))) : 26))));

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_25 = (min(var_25, (((var_9 ? var_6 : (arr_8 [18] [i_1] [i_2] [i_9]))))));
                        var_26 &= (((arr_32 [i_0] [i_0] [i_0]) % var_5));
                    }
                }
            }
        }
    }
    var_27 = ((var_0 ? var_5 : (~var_3)));
    #pragma endscop
}
