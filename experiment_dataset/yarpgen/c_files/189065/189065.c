/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0 + 2] = (~((-(arr_0 [i_0 - 2]))));
        arr_3 [i_0] [i_0] &= (max((arr_1 [i_0 - 3]), (arr_0 [i_0 - 4])));
    }
    var_18 &= var_5;
    var_19 = -var_2;

    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_20 += var_16;
        var_21 &= (arr_0 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = var_8;
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_22 |= var_4;
                                var_23 = ((var_1 <= (arr_16 [i_6 - 1] [i_3])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_29 [i_2] [i_4] [i_2] [i_7] &= arr_10 [i_2];
                                arr_30 [i_2] [i_2] [i_4] [i_7 + 1] [i_2] = 0;
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        arr_33 [i_9] [i_3 - 1] &= (((var_17 == var_17) ? (arr_16 [i_3 - 1] [i_3 + 1]) : (arr_19 [i_3])));
                        arr_34 [i_9] [2] [2] |= (var_14 >= 32);
                        var_24 = var_13;
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 13;i_11 += 1)
                        {
                            {
                                var_25 = ((-(arr_37 [i_2] [12] [i_2] [i_4] [i_11])));
                                var_26 = var_16;
                            }
                        }
                    }
                    var_27 = (max(var_27, (((~(((arr_23 [i_2] [i_2]) | var_7)))))));
                }
            }
        }

        for (int i_12 = 2; i_12 < 13;i_12 += 1)
        {
            var_28 = (((((arr_19 [i_2]) + 9223372036854775807)) << var_5));
            var_29 = (~var_4);
            arr_42 [i_12] [i_12] |= (arr_13 [i_2] [i_12 + 1]);
        }
        var_30 = (((arr_41 [i_2]) > (arr_8 [i_2])));
        arr_43 [12] [i_2] |= (arr_41 [4]);
    }
    for (int i_13 = 2; i_13 < 18;i_13 += 1)
    {
        arr_46 [i_13] [i_13] = var_0;
        arr_47 [i_13] = (((arr_44 [i_13 + 1]) >> (-10527758413516038900 - 7918985660193512693)));
        var_31 &= ((var_11 ? (max(var_10, (arr_44 [i_13 - 2]))) : ((var_10 + (arr_44 [i_13 + 1])))));
        var_32 = var_6;
    }
    #pragma endscop
}
