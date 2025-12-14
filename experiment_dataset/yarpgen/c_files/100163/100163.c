/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (~(arr_1 [2]));
        var_16 = (min(var_16, ((((arr_1 [i_0]) && (arr_1 [i_0]))))));
        var_17 += 42;
        var_18 = ((-(arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_19 = ((7967395299308822698 ? (arr_3 [i_1]) : 0));
        arr_5 [i_1] [i_1] = (((arr_0 [i_1]) ^ (arr_0 [i_1])));

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    {
                        var_20 = (((arr_11 [i_2] [i_2]) >= 0));
                        arr_14 [i_1] [i_1] &= ((var_1 - (arr_8 [3] [i_4] [3] [i_4 + 1])));
                        var_21 = (max(var_21, (((((var_5 ? (arr_4 [i_4]) : 62419)) * 58)))));
                        var_22 *= 62419;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 11;i_6 += 1)
                {
                    {
                        var_23 = (((arr_19 [i_1] [2] [i_5] [i_6 - 3] [2] [i_1]) & 62415));
                        var_24 = (max(var_24, ((((8143244487766727223 && var_3) ^ (arr_20 [i_1] [i_6 - 3] [i_5] [0]))))));
                        arr_21 [i_1] = ((!535822336) / (var_8 / var_15));
                        arr_22 [i_1] [2] [i_5] [3] = ((-13921 >= (arr_20 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 + 1])));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 10;i_9 += 1)
                    {
                        {
                            arr_29 [i_7] [i_7] [11] [i_7 + 1] [i_7] = (535822336 < 0);
                            arr_30 [i_1] [i_1] [i_7] [i_8] [i_9] = (var_4 % -13921);
                        }
                    }
                }
            }
        }
        for (int i_10 = 1; i_10 < 10;i_10 += 1)
        {
            arr_33 [i_10] [i_10 + 2] = (((arr_25 [0] [0] [i_10] [0] [i_1] [2]) + (arr_28 [i_1] [i_1] [i_1] [i_10 - 1] [i_1] [i_10] [i_1])));
            arr_34 [i_1] [i_10] [i_10] = (arr_23 [i_1] [i_10 + 2] [i_10 + 1] [i_10 + 2]);
        }
        for (int i_11 = 0; i_11 < 0;i_11 += 1)
        {
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_25 = (min(var_25, ((((((7251 ? 1 : 5292460044796862112))) ? (((!(arr_11 [i_1] [i_1])))) : 62419)))));
                            arr_48 [i_1] [i_11 + 1] [i_12] [i_12] [i_12] = (((var_6 ? 7622 : var_13)));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 12;i_15 += 1)
            {
                for (int i_16 = 3; i_16 < 9;i_16 += 1)
                {
                    {
                        arr_54 [i_1] [i_1] [i_15] [8] [i_16 - 3] = (((arr_49 [i_16 + 1] [i_11 + 1] [i_11 + 1]) ? (arr_49 [i_16 + 2] [i_11 + 1] [i_11 + 1]) : (arr_49 [i_16 - 1] [i_11 + 1] [i_11 + 1])));
                        var_26 = ((((((arr_39 [i_15]) != -1020606744))) & -7755));
                        arr_55 [7] [i_11 + 1] [7] [i_16] = ((62437 ? 195 : 186));
                    }
                }
            }
            var_27 = (min(var_27, (((((-206343337 ? 0 : (arr_13 [i_1]))) < (arr_28 [i_11 + 1] [i_11 + 1] [1] [1] [i_11 + 1] [i_11] [i_11 + 1]))))));
        }
        var_28 = (min(var_28, var_10));
    }
    var_29 = max(var_14, (((var_11 << (1 - 1)))));
    #pragma endscop
}
