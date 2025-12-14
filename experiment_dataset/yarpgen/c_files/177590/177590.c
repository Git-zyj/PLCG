/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((((!((max(var_4, var_13)))))), (max(var_13, 1))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = (~0);
                    var_21 = (max((((var_8 | var_17) ^ var_17)), (~-55)));
                }
            }
        }
    }
    var_22 = (min((46 / var_8), ((14209902785175418073 ? 181 : 75))));

    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_8 [i_3] = ((var_7 ? ((((((-1518874033 + 2147483647) >> (var_18 + 1763886913)))) ? (1 < 0) : ((var_16 - (arr_7 [i_3] [i_3]))))) : ((((min(2850179857141434606, (arr_7 [16] [i_3]))))))));
        arr_9 [i_3] [i_3] = (!((max(-5969264983605435371, -36))));
        arr_10 [i_3] [11] |= (+(((arr_6 [i_3]) ? (arr_6 [i_3]) : (arr_6 [i_3]))));
        arr_11 [i_3] = max(var_2, (((((var_1 ? (arr_7 [i_3] [i_3]) : 181))) ? 36 : -1)));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_15 [i_4] = ((((((max(524287, var_13))) * var_12)) / (((-((161 ? (arr_3 [i_4] [i_4]) : var_5)))))));
        arr_16 [i_4] = ((var_3 == (((-(arr_4 [i_4] [7] [i_4]))))));
        var_23 -= ((var_5 ? (((arr_6 [i_4]) ? var_6 : ((((arr_6 [i_4]) ^ 54))))) : (arr_1 [i_4])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_27 [i_7] [i_4] [i_7] [6] [6] [6] = (((-36 ? 133 : -36)));
                                arr_28 [i_4] [i_4] [2] [i_5] [i_4] = (var_7 ? ((var_11 ? (arr_13 [i_4] [i_8 - 3]) : (arr_7 [i_8 - 1] [i_8 + 1]))) : (arr_7 [i_8 - 3] [i_8 - 1]));
                            }
                        }
                    }
                    arr_29 [i_4] [i_5] [4] [6] |= (max(67, (min((arr_0 [i_4]), var_6))));
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        var_24 *= (!((!(!-810169790))));
        arr_34 [i_9] = ((~((1 ? 75 : (arr_2 [i_9] [i_9])))));
        arr_35 [i_9] = ((((-36 >= (((!(arr_32 [i_9])))))) && 1054535603));
        arr_36 [i_9] [i_9] = var_16;
    }
    #pragma endscop
}
