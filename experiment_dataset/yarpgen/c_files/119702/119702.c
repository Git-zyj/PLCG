/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_10 |= (min((((((arr_2 [i_0]) || 124)) ? (arr_4 [16]) : 1)), ((((1 ? (arr_7 [i_3] [i_1] [i_1] [i_0]) : 1)) ^ ((~(arr_7 [1] [i_2 - 1] [i_1] [i_0 - 1])))))));
                        var_11 = var_0;
                        arr_9 [i_2] [i_1] [1] [1] = ((!((((min((arr_0 [i_0]), var_8))) || var_7))));
                        var_12 = ((~((1 ? var_0 : (~-803804900528617107)))));
                    }
                }
            }
        }
        arr_10 [i_0] = ((~((((arr_3 [i_0]) != (arr_8 [12] [i_0] [12]))))));

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_15 [i_0] [i_4] [i_4] = (min((((~((var_5 ? var_4 : 0))))), var_6));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 14;i_6 += 1)
                {
                    {
                        arr_20 [i_0] [i_4] [17] [i_6] [i_4] [1] = ((((max((arr_18 [i_0] [i_6 + 3] [i_6] [i_6]), (arr_18 [i_0] [i_6 + 3] [i_6 + 3] [11])))) << ((min(1, (arr_2 [i_0 + 1]))))));
                        arr_21 [i_0] |= var_9;
                        arr_22 [i_0] [i_4] [i_5] [i_6] [i_4] = 1;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_26 [i_0 + 1] = ((var_9 && (arr_16 [i_7] [i_0 - 1] [i_0] [i_0])));
            arr_27 [1] [i_0] |= ((0 && var_5) ? var_9 : var_9);
            arr_28 [i_0] &= (~var_6);
            var_13 = 30;
        }
        for (int i_8 = 3; i_8 < 17;i_8 += 1)
        {

            for (int i_9 = 2; i_9 < 17;i_9 += 1) /* same iter space */
            {
                arr_33 [15] [i_8 + 1] [i_8] [9] = ((~((max((arr_19 [i_0 + 1] [i_8 - 3] [0]), (arr_19 [i_0 - 1] [i_8 - 2] [i_9]))))));
                var_14 = (max((arr_31 [i_8] [i_8]), (~241)));
                var_15 = var_8;
            }
            for (int i_10 = 2; i_10 < 17;i_10 += 1) /* same iter space */
            {
                arr_36 [1] [i_10] [i_10] = (((((arr_30 [i_0 - 1]) & (arr_6 [i_0 + 1] [i_8]))) - (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                arr_37 [i_10] = (((((~var_5) ^ var_7)) >> (var_6 - 12401296885087669189)));
            }
            arr_38 [i_0] [i_0] = ((((((((var_3 ? (arr_34 [2] [i_0] [2]) : 1)) + 2147483647)) >> (15518 - 15507))) << (((var_4 >> 1) - 129394792))));
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_16 |= var_4;

            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                arr_43 [i_0 - 1] [i_11] [i_12] [6] |= ((((min(var_5, (arr_40 [1])))) / (((arr_32 [i_0 + 1] [i_11] [i_11]) ? (arr_40 [16]) : (arr_32 [1] [i_0 + 1] [i_0 + 1])))));
                var_17 = (((((var_3 & var_3) + (((-127 - 1) ? (arr_39 [i_0] [i_11]) : (arr_7 [i_0] [i_11] [i_0] [i_0])))))) ? var_0 : ((var_5 ? (803804900528617122 / -4131497804851944305) : (((max((arr_11 [6] [i_11] [i_11]), var_8)))))));
            }
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                var_18 &= ((((((((var_8 << (((arr_7 [i_0] [i_11] [i_11] [2]) - 35888))))) ? ((-1637235066029584265 ? var_8 : var_3)) : (arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) ? (arr_18 [i_0] [i_11] [i_13] [i_13]) : (arr_0 [i_0 - 1])));
                var_19 = 2622054214144738479;
            }
        }
    }
    for (int i_14 = 1; i_14 < 17;i_14 += 1) /* same iter space */
    {
        arr_50 [i_14] = var_5;
        arr_51 [i_14] = (6943 && 13609600001389339209);
    }
    var_20 = var_7;
    #pragma endscop
}
