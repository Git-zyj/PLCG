/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((~var_0) * ((var_7 ? var_10 : var_11))));
    var_14 = var_8;
    var_15 = (~((var_1 ? -2147483638 : -var_9)));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (min(((((arr_2 [i_0]) ? -1049 : (2147483638 & -32232)))), ((2147483647 ? (((-62 | (arr_1 [i_0])))) : ((-1541483286 ? -447972852 : 18446744073709551610))))));
        var_16 = (max(var_16, (((-1268633410 ? ((((min((arr_1 [i_0]), -2147483638))) ? ((var_3 ? var_8 : (arr_1 [i_0]))) : (((arr_0 [i_0 - 1]) ? (arr_2 [i_0]) : var_0)))) : ((var_10 ? 2147483637 : (arr_0 [i_0]))))))));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = var_5;
        var_17 = var_12;

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_10 [10] [i_1] = min(-17662, (!-18905));
            arr_11 [i_1] = (-var_6 ? ((var_5 ? var_9 : ((var_6 ? -447972844 : var_8)))) : 16116);
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_19 [i_3] [i_2] [i_3] [2] [i_3] &= (min(((2 ? (arr_12 [i_5] [i_1 + 1] [i_1 + 1]) : -17668)), (((!(arr_12 [10] [i_2] [i_3]))))));
                            var_18 = 156953098;
                        }
                    }
                }
            }
            var_19 = (min(var_19, (((-(((!(((15193166145867710635 ? (arr_5 [i_2] [i_2]) : var_9)))))))))));
            arr_20 [i_1] [i_1] [i_1] = var_3;
        }
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            arr_23 [i_1] [i_1] = ((-((~(arr_18 [i_6 - 1] [i_6 - 1] [i_1] [i_1] [i_1 - 1])))));
            arr_24 [i_1] = -17658;
        }
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 17;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 17;i_9 += 1)
            {
                {
                    arr_35 [i_7] [i_7] [i_9] = ((2147483637 ? ((var_1 ? (arr_33 [i_9] [i_9]) : var_6)) : var_4));
                    var_20 = (max(var_20, (((!(arr_29 [i_9 - 1]))))));
                    arr_36 [i_7] [i_8] [i_9] = ((1541483271 ? 4294967290 : 2063656970));
                    var_21 &= arr_26 [i_9 - 1] [i_8];
                }
            }
        }
        arr_37 [i_7] = var_6;
        arr_38 [i_7 - 2] = ((4294967272 ? (18363 != -447972840) : ((var_2 ^ (arr_29 [i_7])))));
    }
    #pragma endscop
}
