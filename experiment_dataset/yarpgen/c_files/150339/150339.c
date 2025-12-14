/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_8 + (min(5366505928290356031, 19))));
    var_11 = (max((min(var_3, 745785975)), -66));
    var_12 = (((((+(((var_0 + 9223372036854775807) << (((-64 + 101) - 33))))))) ? var_3 : var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_13 ^= ((!((((arr_4 [i_2 + 1] [i_2 + 3]) ? ((255 - (arr_7 [0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((((arr_0 [i_2]) || var_2)))))))));
                            var_14 = 4242328909529413268;
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    var_15 = (max(var_15, ((((var_8 << (var_3 + 101)))))));

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        arr_15 [9] [i_1] = 255;
                        arr_16 [i_0] [1] [i_4] [4] [4] = (((((13845227557674969149 >= (arr_5 [i_0] [0] [i_4] [i_4])))) % (arr_2 [i_0] [i_0] [8])));
                        arr_17 [i_0] [i_0] [i_4] = 7115332296312046157;
                        var_16 = (max(var_16, (arr_11 [10])));

                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            var_17 = ((((13 ? 4601516516034582470 : 245)) ^ 164));
                            var_18 = ((-(arr_18 [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6])));
                            var_19 = var_2;
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            arr_22 [i_0] [i_1] [i_0] [i_5] [5] [i_0] = arr_4 [i_0] [i_0];
                            arr_23 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0] = (arr_10 [i_0] [i_0] [i_0] [5]);
                        }
                    }
                    var_20 = (~var_6);
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        var_21 = ((var_8 ? (arr_8 [i_1]) : (arr_8 [i_0])));
                        var_22 ^= ((var_2 ? 8388607 : var_5));
                    }
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        arr_34 [10] [i_8] [10] [i_1] [i_8] [10] = -1811734736;
                        arr_35 [i_8] [6] [6] [i_8] = (arr_27 [i_8]);
                    }
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        var_23 = 3940649673949184;
                        var_24 = ((~(((~var_0) ? (arr_6 [i_11] [i_1] [7] [3] [i_1] [i_11]) : (~2147483642)))));
                    }
                    arr_39 [i_0] [i_0] [i_0] [i_8] = ((-((var_2 ? (arr_14 [i_8] [i_8] [i_1] [i_0] [i_0]) : var_4))));
                }
                for (int i_12 = 1; i_12 < 10;i_12 += 1)
                {
                    var_25 = 56293;
                    var_26 = (min(var_26, var_2));
                }
                var_27 = (arr_11 [4]);
            }
        }
    }
    #pragma endscop
}
