/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_10));
    var_13 = 35184372088704;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_14 = (arr_9 [i_0] [i_2] [i_1 - 3] [i_0] [i_0] [10]);
                        arr_12 [i_0] [i_1] [i_2] [i_0] [i_3] = ((arr_11 [i_0] [i_0] [i_0] [1]) ? (arr_7 [i_0] [i_0] [i_2] [i_3]) : (arr_4 [i_0] [i_1] [i_2]));
                    }
                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        var_15 = 5116610300904661721;
                        arr_15 [i_0] [i_4] [i_2] [i_4] = (min((min(37512, var_10)), (arr_10 [i_0])));
                        var_16 = max(var_2, ((((arr_3 [i_1]) ? var_10 : (max((arr_8 [i_0]), (arr_14 [9] [i_1] [i_0] [i_4])))))));
                        arr_16 [i_4] [i_2] [13] = ((+(max(-5116610300904661726, (min((arr_14 [i_0] [i_0] [i_2] [i_0]), -5116610300904661726))))));
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        arr_20 [i_5] = 9223372036854775807;
                        arr_21 [i_1] [i_2] |= ((((~(3932160 % var_2))) - (((var_11 ? (arr_17 [i_1] [i_0] [i_1 + 3]) : var_5)))));
                        arr_22 [i_1] [i_5] = (-5116610300904661720 - -5116610300904661726);
                        var_17 = (max(var_17, ((max(var_4, var_3)))));
                    }

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        arr_26 [i_0] [i_1] [i_2] [i_6] [9] = arr_9 [i_0] [i_0] [i_2] [i_2] [i_0] [i_6];
                        var_18 = (((var_10 ? var_6 : var_8)));

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_19 -= (--27);
                            arr_30 [i_0] [i_0] [i_2] [i_0] [i_7] = (((arr_14 [i_0] [i_1] [i_1 + 3] [i_6]) <= (arr_13 [i_1 - 2] [i_2])));
                        }
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            arr_33 [i_0] [i_0] [i_0] [i_6] [i_0] = var_2;
                            arr_34 [i_0] [i_1 + 1] [i_2] [14] [i_8] = ((-5116610300904661739 == (((-461751235 + 2147483647) << (5927 - 5927)))));
                            arr_35 [i_8] [i_0] [i_2] [i_2] [10] [i_0] = (arr_19 [i_1] [i_1 - 1] [i_1 + 3]);
                        }
                    }
                    arr_36 [i_1] [i_1] = min((~var_1), ((~(arr_32 [i_1 + 3] [i_1 + 3] [4] [i_1 + 1] [10] [i_1 - 2] [i_1]))));
                    var_20 &= (((arr_17 [i_0] [i_0] [i_2]) << (((((((arr_17 [i_0] [i_0] [1]) ? var_11 : (arr_17 [i_0] [i_0] [6]))) + 106)) - 16))));
                }
            }
        }
        var_21 = ((min(var_10, var_4)));
    }
    var_22 = ((-5116610300904661722 == (((max((var_5 == var_9), var_7))))));
    #pragma endscop
}
