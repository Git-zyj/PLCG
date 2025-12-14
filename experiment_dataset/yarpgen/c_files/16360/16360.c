/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((((8 * 0) / (((((arr_10 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0]) * 115)) * 108)))))));
                                var_18 = (((max((arr_7 [i_2] [i_3 + 1] [i_0] [i_2]), (arr_1 [i_0]))) != (694891487161745416 && 180)));
                            }
                        }
                    }
                }
                var_19 = (max(var_19, (((-(max((((1287104679 == (arr_11 [i_0 - 1] [16] [10] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])))), -var_15)))))));

                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_20 = ((~(max(1359464869, 71))));
                                var_21 += (max((((+((((arr_15 [i_0 + 1] [i_0] [i_0] [i_0]) <= 4118948807)))))), ((var_5 * (var_16 == -118)))));
                                var_22 += -694891487161745417;
                                arr_22 [i_1] [i_0] = (max(((~(6501 / 424965048))), (((max((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] [i_7]), 30)) & (max((arr_11 [i_0] [i_1] [i_0] [i_1] [i_5] [i_6] [i_7]), (arr_12 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0])))))));
                            }
                        }
                    }
                    var_23 += ((68 - (31046 && 23962)));
                    var_24 = (~-122);
                    arr_23 [i_0] [i_1] [i_0] = (max((((-((max(-42, var_14)))))), (max((max(-6022762781856557898, (arr_19 [i_0] [i_1] [i_0] [i_0 - 1] [i_5]))), -247))));
                }
                for (int i_8 = 3; i_8 < 19;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                arr_32 [i_0] [i_1] [i_8] [i_0] [i_10] [i_10] &= (arr_1 [i_10]);
                                arr_33 [i_0] = ((((max(122, (((-2 + 2147483647) << (var_1 - 74)))))) * ((((max(var_3, var_5))) + (max(-6352212022148217515, (arr_7 [5] [i_10] [i_0] [i_9])))))));
                            }
                        }
                    }
                    var_25 = (-95 <= 16);
                    arr_34 [i_0] [i_0] [i_1] [i_8 - 1] = ((-(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])));
                }
                var_26 = (((arr_16 [i_0 + 1] [i_0] [i_0 + 1] [6] [i_1] [i_1]) == (((-56 / ((max(247, -89))))))));
            }
        }
    }
    var_27 = var_16;
    #pragma endscop
}
