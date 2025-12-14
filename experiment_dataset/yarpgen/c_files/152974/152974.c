/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((((!var_5) << (((var_4 * var_0) - 968995701)))))));
    var_13 = ((var_1 ? var_7 : (((var_4 ^ (~-4495250711873880256))))));
    var_14 &= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = 9294646550087984070;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 = ((!((max((arr_9 [8] [i_3] [i_2] [i_1] [i_0]), (((arr_8 [i_1] [i_2] [i_3] [i_4]) ? (arr_0 [i_0] [i_3]) : (arr_9 [i_3] [i_3] [i_0] [i_1] [i_0]))))))));
                                var_17 ^= (min(((((arr_12 [9] [9] [i_2] [9] [6]) >= (((!(arr_10 [i_0] [i_1]))))))), var_11));
                                arr_14 [i_1] [i_3] [8] [i_0] [i_1] = (max((((7230 ? ((((arr_3 [i_0] [i_1] [5]) && (arr_2 [i_3] [i_4])))) : -var_0))), ((-4495250711873880256 ? ((10 ? 65535 : -4495250711873880236)) : 7262))));
                                var_18 = arr_1 [i_1] [i_1];
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    var_19 = var_6;

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_20 = ((!(arr_2 [i_0] [i_1 + 1])));
                        var_21 = var_8;
                        var_22 ^= 9;
                        var_23 = ((!(!35556)));
                    }
                    var_24 = 0;
                }
                arr_21 [i_1] [i_1] [i_1] = (!17288849410943521551);
            }
        }
    }
    #pragma endscop
}
