/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_11;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 *= (arr_1 [i_0] [i_0]);
        var_21 = (((2147483647 || -2147483637) >> ((((~((min(var_15, 22))))) + 42))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                {
                    var_22 = (~((-(arr_9 [i_3 + 1] [i_3 - 1] [i_3]))));
                    var_23 = var_3;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {

                            for (int i_8 = 0; i_8 < 24;i_8 += 1)
                            {
                                var_24 *= (min((((-2147483647 - 1) / 12)), (arr_23 [i_6 + 1] [22] [4] [i_6 + 1] [i_6 + 1])));
                                arr_28 [2] [i_5] [i_6 - 1] [i_5] [i_7] [i_8] = (min(((min((arr_27 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1]), (arr_27 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1])))), (arr_27 [i_6 - 1] [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6 + 1] [i_6 + 1])));
                            }

                            for (int i_9 = 2; i_9 < 22;i_9 += 1)
                            {
                                arr_31 [22] [i_5] [i_5] [6] [i_7] [i_5] [i_9] = ((!(~21)));
                                arr_32 [5] [i_4] [i_4] [i_5] [i_6 + 2] [i_4] [i_9 - 2] = ((+((-(min((arr_24 [i_4] [i_5] [i_6] [i_7] [i_9] [4]), 39))))));
                                var_25 = (((-36 ? -2147483647 : ((22 ? 2147483637 : -2147483647)))));
                                arr_33 [i_4] [i_5] [i_6] = (arr_12 [i_4]);
                                arr_34 [i_4] [i_5] [i_6] [i_7] [i_9 + 2] = ((!(((-(-2147483629 / 26540))))));
                            }
                            for (int i_10 = 0; i_10 < 24;i_10 += 1)
                            {
                                var_26 *= (((((255 ? (arr_17 [i_4] [i_4] [i_4]) : (((~(arr_24 [i_4] [i_4] [i_5] [i_6 + 2] [11] [i_10]))))))) ? (arr_13 [i_10]) : (max(((~(-2147483647 - 1))), ((~(arr_26 [i_4] [i_4] [i_4])))))));
                                var_27 = var_18;
                                arr_37 [i_10] [i_7] [i_5] = (arr_12 [i_6]);
                            }
                            var_28 = ((((((((arr_14 [i_7]) ^ var_4)) != 119))) + (arr_19 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 2])));
                            arr_38 [i_5] [i_7] [14] [i_5] [i_5] [i_4] = (((~2147483647) / 15331));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                var_29 = (arr_12 [i_13]);
                                arr_49 [i_4] [i_5] [i_11] [i_12] [i_11] = ((+(((60 <= 50193) ? 6 : 65535))));
                                var_30 *= ((!(((+(((arr_47 [i_13]) ? var_6 : (arr_30 [i_4] [i_4] [i_4] [16] [i_12] [i_12]))))))));
                            }
                        }
                    }
                }
                var_31 = (min((min((9223372036854775798 / 2305843009213693951), (arr_22 [i_4] [i_4] [9] [i_4]))), ((((arr_12 [i_4]) ? 13 : 15)))));
            }
        }
    }
    #pragma endscop
}
