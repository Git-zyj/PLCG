/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 &= ((-((-(((arr_5 [i_0] [i_1]) ? 5376136583377570703 : (arr_3 [i_0] [i_0])))))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_16 = ((((((((-(arr_7 [8] [4] [8])))) % (arr_0 [i_0])))) != var_4));
                    var_17 = -455589568;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_18 = (((arr_10 [i_0] [8] [i_4 + 2] [i_0]) == (arr_10 [i_0] [0] [i_0] [7])));
                                var_19 = var_9;
                            }
                        }
                    }
                    var_20 = arr_0 [i_0];
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_21 = (i_0 % 2 == zero) ? ((((arr_7 [i_6 + 1] [4] [4]) >> ((((520570014 + (arr_4 [i_0] [i_0]))) - 520567994))))) : ((((arr_7 [i_6 + 1] [4] [4]) >> ((((((520570014 + (arr_4 [i_0] [i_0]))) - 520567994)) + 18966)))));
                                var_22 = (((arr_4 [i_0] [i_0]) != (arr_13 [i_0] [11] [i_0] [i_0])));
                                arr_19 [8] [8] [i_0] [0] [2] [0] = (((arr_18 [i_3] [i_3] [i_6 + 2] [i_3] [2] [i_6 + 1] [0]) / (arr_18 [i_0] [i_0] [i_6 + 2] [i_6 + 2] [11] [i_6 - 1] [i_6 + 2])));
                                var_23 ^= -2424406039680507895;
                                var_24 -= (((((arr_4 [i_7] [i_7]) ? 0 : -5376136583377570704)) * ((((arr_5 [i_6] [i_3]) ? 1 : -179948936)))));
                            }
                        }
                    }
                    var_25 = ((~(arr_15 [1] [i_1] [i_3] [6] [i_3])));
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 8;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 9;i_9 += 1)
                        {
                            {
                                arr_25 [7] [i_0] [i_0] [i_0] = -14;
                                var_26 = var_4;
                                var_27 = (min(var_27, ((((3975511000 != (arr_22 [i_9] [i_9])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = var_12;
    #pragma endscop
}
