/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [2] [1] = (min((max((arr_2 [i_0]), (arr_10 [i_2 - 2] [i_2 + 2] [i_2 + 1] [i_2] [i_2] [i_2 + 3]))), ((max(var_1, (1 / var_13))))));
                            arr_13 [i_1] [i_2 + 1] [i_1] = var_14;
                        }
                    }
                }
                var_16 = (arr_8 [i_1] [13] [i_1] [13]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 3; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_17 = (min(var_12, ((~(arr_16 [i_4 - 3] [i_5 - 1])))));
                                arr_28 [i_4] [i_4] [i_6] [i_8] = var_5;
                                arr_29 [i_5 + 1] [i_5] [i_8] [i_6] [i_8] = (((((~(arr_16 [i_4 - 2] [3])))) ? (((67092480 || ((min((arr_26 [i_4 + 1]), 4770404726969117782)))))) : (min((~127), var_7))));
                                var_18 = (min(var_18, ((((((var_6 ? (arr_26 [i_4 - 1]) : (arr_14 [i_6 + 1] [i_8 + 2])))) & ((min(var_10, var_3))))))));
                            }
                        }
                    }
                    arr_30 [i_4 + 1] [i_4 - 2] [i_6] = (arr_26 [i_4]);

                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        var_19 = (max((arr_15 [i_4]), ((min(219, 503316480)))));
                        var_20 = (~56);
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_21 = (((!var_13) ^ (arr_33 [i_10] [i_6] [i_5 + 2] [i_4 + 1])));

                        for (int i_11 = 1; i_11 < 17;i_11 += 1)
                        {
                            var_22 = var_4;
                            var_23 = ((arr_26 [i_5]) ? var_7 : (min(-1489208658, 16085554728837198241)));
                        }
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_24 = (max(var_24, ((((var_12 % -1524408262457471565) ? (max(-2936, 1988907678)) : ((min((arr_24 [i_4 + 1] [i_5 + 2] [i_6] [i_12] [i_5 + 2] [9]), (arr_24 [i_12] [1] [i_6 + 3] [7] [1] [7])))))))));
                            arr_41 [i_4] = 1;
                        }
                    }
                    /* vectorizable */
                    for (int i_13 = 2; i_13 < 18;i_13 += 1)
                    {
                        arr_44 [i_6 + 1] &= (arr_38 [i_4 - 2]);
                        var_25 = (min(var_25, ((((arr_25 [i_4 + 1] [i_5 + 2] [i_6 + 1] [i_13 + 2] [i_13 + 2]) & (arr_27 [i_4 - 3] [i_5 - 1] [i_6 + 1]))))));

                        for (int i_14 = 1; i_14 < 16;i_14 += 1)
                        {
                            var_26 |= var_14;
                            arr_47 [9] [i_13 - 1] [i_6 - 1] [i_13 - 1] [i_14] [i_13] = (~45958);
                        }
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            var_27 = (((arr_35 [i_4] [i_4 - 3] [i_5 - 1] [i_13] [i_13 + 2]) ? (arr_35 [i_4 - 2] [i_4 - 3] [i_5 - 1] [i_13] [i_13 + 2]) : (arr_35 [i_4] [i_4 - 3] [i_5 - 1] [i_4] [i_13 + 2])));
                            var_28 -= (~(!2370156953));
                            var_29 = ((arr_19 [2] [i_5]) ^ ((var_9 / (arr_49 [5] [i_5] [13] [17] [i_15]))));
                            var_30 = (min(var_30, ((((arr_35 [12] [i_5] [i_5] [i_13] [i_13]) == (((var_1 ? (arr_45 [i_15] [i_15] [i_15] [i_15] [i_15]) : (arr_22 [i_4])))))))));
                        }
                        for (int i_16 = 3; i_16 < 19;i_16 += 1)
                        {
                            arr_52 [i_4] [i_5] = var_1;
                            var_31 -= (((arr_34 [i_4] [i_4 - 1] [i_4] [i_4] [i_4] [i_4 - 1]) < 1945323641226789544));
                            var_32 = ((!(arr_34 [i_13 + 1] [i_16 - 2] [i_5 - 1] [i_6 + 2] [i_16] [i_16 - 2])));
                        }
                        for (int i_17 = 0; i_17 < 20;i_17 += 1)
                        {
                            var_33 = ((arr_54 [i_4] [i_4 - 3] [i_4] [i_13] [11]) ? (arr_31 [i_4] [i_5] [i_6] [i_13] [5]) : (2147483647 ^ 281474842492928));
                            arr_55 [i_4] [i_4] [i_4] [i_4] = (arr_54 [i_5] [i_13 - 2] [i_17] [i_17] [i_17]);
                            var_34 = 1;
                        }
                    }
                    var_35 = ((min((arr_18 [i_4] [i_4] [i_6]), 9)));
                    var_36 = (min((min(31415, 240)), (!1)));
                }
            }
        }
    }
    #pragma endscop
}
