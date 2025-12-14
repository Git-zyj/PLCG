/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((0 ? -1165553008 : 1));
    var_21 -= 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_2] [1] [9] = ((+(max((-9223372036854775807 - 1), (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
                            arr_12 [i_2] [i_1] = var_19;
                        }
                    }
                }
                arr_13 [10] [i_1] = var_11;
            }
        }
    }
    var_22 = (min(var_5, (max((var_13 ^ var_15), var_10))));
    /* LoopNest 3 */
    for (int i_4 = 3; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 11;i_6 += 1)
            {
                {
                    arr_20 [i_4 + 1] [i_5] [i_4] = (((((arr_8 [i_6 + 1] [i_6 - 1] [i_6] [i_6] [i_5] [i_4]) ? 498463396 : var_5)) == ((12 >> (((arr_1 [i_4]) - 50445))))));
                    var_23 = (max(var_23, var_16));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 12;i_8 += 1)
                        {
                            {
                                arr_27 [i_4] = (max(var_5, (((var_7 || (((arr_6 [i_4] [i_4] [11]) >= 33980)))))));
                                var_24 = (max(var_24, -1056538265));
                                arr_28 [i_4] [i_5] [i_6] [i_4] = (-(~var_14));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 12;i_10 += 1)
                        {
                            {
                                arr_33 [i_4] [i_4] [i_4] = (var_18 ? (min((0 | var_2), ((min((arr_22 [i_4 - 1] [i_6] [4] [i_9 + 2]), (arr_5 [i_10] [i_5] [i_6 + 1])))))) : var_17);
                                arr_34 [i_4] [i_4] = var_0;
                                var_25 = var_18;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
