/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = ((5942 ? (~var_6) : var_12));
        var_13 += (-8121 > 15);

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_8 [i_0] [i_0 - 1] [i_1] = ((arr_1 [i_0]) ? var_8 : (((((arr_0 [i_0] [i_0 + 3]) > var_3)))));
            arr_9 [i_1] = var_1;
            arr_10 [i_0] [i_1] [i_1] = (((-var_5 / ((var_3 ? var_0 : (arr_6 [i_0]))))));
        }
        /* vectorizable */
        for (int i_2 = 3; i_2 < 23;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            arr_22 [i_0 + 2] [i_4] = (arr_17 [19] [i_2] [i_4] [i_2 - 2]);
                            var_14 ^= -204080537;
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            arr_26 [i_4] [i_4] [i_4] [i_4] [i_3] [i_2 + 1] [i_4] = var_12;
                            arr_27 [i_0] [i_0] [i_3] [i_4] [i_6] [i_0] [i_4] = (-(arr_15 [i_3]));
                            var_15 = (((arr_2 [1]) | 56136));
                            arr_28 [i_4] [i_4] [i_3] [i_4] [i_4] = ((~(arr_5 [i_3 - 2] [i_0 + 4])));
                            var_16 |= -204080537;
                        }
                        var_17 = var_12;
                    }
                }
            }

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                var_18 += ((!(204080537 > var_0)));
                arr_32 [i_2] = ((~(arr_19 [i_0] [i_7] [i_2] [i_0])));
                arr_33 [i_0] [i_0] [i_0] [i_7] = (((~var_12) ? var_3 : (!var_7)));
            }
            arr_34 [i_2] = (arr_6 [2]);
            arr_35 [i_0] [i_0] = var_9;
        }
    }
    for (int i_8 = 2; i_8 < 10;i_8 += 1)
    {
        var_19 = (arr_19 [i_8 - 2] [i_8 + 1] [i_8 + 1] [i_8]);
        arr_38 [i_8] [i_8] = (min((arr_0 [i_8] [i_8]), ((min((arr_20 [i_8 - 1] [i_8] [12] [i_8] [i_8]), (arr_31 [i_8 + 1] [i_8 + 1] [i_8 - 2]))))));
        var_20 = (arr_30 [13] [i_8] [i_8] [i_8 - 2]);
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    {
                        var_21 &= ((~(arr_16 [i_8 + 1] [i_8 + 1] [i_8 + 1])));
                        arr_49 [i_8] [i_9] [i_8 + 1] [i_11] [i_10] [i_10] = var_4;
                    }
                }
            }
        }
        arr_50 [i_8] = ((((var_2 > (((arr_17 [i_8] [i_8] [i_8] [12]) ? (arr_16 [1] [i_8] [i_8]) : var_0))))) > (((!((min(3, 10930403220828353374)))))));
    }
    var_22 = var_3;
    #pragma endscop
}
