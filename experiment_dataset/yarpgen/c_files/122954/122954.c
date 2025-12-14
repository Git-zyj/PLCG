/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = ((28 / (-292580420 / var_6)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, var_3));
                    var_13 = (min(var_13, var_0));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            var_14 = (min(((min(18246, 18247))), (((arr_4 [i_4] [i_6]) ? -18251 : -32744))));
                            var_15 = ((((((var_3 ? (arr_11 [i_3] [i_3]) : (arr_1 [i_3])))) < var_2)));
                            var_16 = (max(var_16, -2060864283));
                            arr_20 [i_4] [i_4 + 3] [i_5] = (((((~(arr_11 [i_4 - 2] [i_7])))) || ((min((((!(arr_0 [i_3] [6])))), (arr_1 [i_3]))))));
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_17 = (arr_14 [i_3] [i_4]);
                            arr_23 [i_3] [i_4] = (((max(1935615212, 18209803272451471934)) >> (((-1184727057 < (~18231))))));
                        }
                        arr_24 [i_3] [i_3] [i_4] [i_5] [i_5] [i_6] = (min((-7628 * -18251), (min((arr_14 [i_4 - 1] [i_4]), -1789))));
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_18 = 762362535;
                        arr_28 [i_4] [i_4] [i_5] [i_9] = ((((~(((arr_8 [i_3] [i_5]) ? -2819532351684892480 : -2147483639)))) | (max(16, 9007130535264256))));
                    }
                    var_19 = (max(var_19, 29012));
                }
                for (int i_10 = 2; i_10 < 10;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            {
                                arr_36 [i_4] [i_11 - 3] [i_4] [i_4] [i_4] = (-2147483647 - 1);
                                var_20 = (min((((arr_27 [i_3] [i_4] [i_10] [i_11]) ? 236940801258079714 : (arr_34 [i_3] [i_4 + 1] [i_10 + 1] [i_11 - 2] [i_4]))), var_6));
                                var_21 = (arr_19 [i_4] [i_3] [i_4] [3] [6] [6] [i_12]);
                            }
                        }
                    }
                    arr_37 [i_3] [i_3] [i_4] [i_10 + 2] = max(((((arr_4 [i_4 - 1] [i_4 + 1]) < 9223372036854775790))), ((var_4 - ((max((arr_35 [i_3] [i_4 - 2] [i_10] [i_4] [i_10] [i_3]), 2147483647))))));
                    arr_38 [i_3] [i_3] [i_4] = ((var_1 < (!236940801258079682)));
                }
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 12;i_15 += 1)
                        {
                            {
                                var_22 = (max(var_22, (((!(((-(arr_41 [i_14])))))))));
                                arr_47 [i_4] = (arr_27 [i_15] [i_13] [i_4] [7]);
                                var_23 ^= (~69);
                                var_24 = ((((((!(arr_30 [i_13])))) < (arr_19 [i_4] [8] [8] [8] [i_3] [i_3] [8]))) ? (((-(!35967)))) : ((~(arr_31 [i_4 - 1] [i_13] [i_15 + 1] [i_15] [i_15] [i_4 - 1]))));
                                var_25 = (max(var_25, (arr_45 [i_3] [10] [i_3] [6] [i_15 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
