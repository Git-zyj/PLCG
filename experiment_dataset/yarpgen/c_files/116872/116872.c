/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_14 -= ((-(~var_9)));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    var_15 = arr_1 [9];

                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        var_16 = 127;
                        arr_11 [i_2] [i_1] [i_2 + 1] [i_2 + 1] [i_3 + 2] = (((-105 + 2147483647) << (var_7 - 47495)));
                        arr_12 [i_2] [i_1 - 2] [1] [i_3 - 3] [i_3 + 2] = (((((var_1 ? (arr_10 [i_0] [0] [0] [i_3]) : 32746))) ? (arr_8 [i_0] [i_2 + 1] [i_2] [i_0] [6]) : var_5));
                        arr_13 [i_2] [i_2 + 1] [i_1] [13] [i_2] = (!var_13);
                    }
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        var_17 = (((arr_4 [i_0] [i_1 - 2] [6]) * (arr_4 [i_1] [i_1 + 2] [i_4])));
                        arr_16 [i_2] [i_2] [i_2] [i_0] = ((-((-(arr_7 [i_2] [i_1] [8] [i_1])))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_18 = (min(var_18, (((var_0 ? (arr_14 [i_0] [i_2 + 1] [i_0]) : 72)))));
                                var_19 = (arr_14 [i_2 + 1] [i_1 - 2] [i_2]);
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((var_4 | ((var_12 | (arr_1 [7])))));
                            }
                        }
                    }
                    var_20 = (max(var_20, (arr_18 [i_2] [i_1] [i_0] [i_0])));
                }
                var_21 = ((-((var_8 ? (-127 - 1) : (arr_21 [i_0] [i_1 + 4] [i_1 + 2] [i_0])))));
            }
        }
    }
    var_22 -= (min(((-13953 ? var_9 : 13952)), (((!17870283321406128128) ? 162 : ((1 ? 247 : 117))))));
    #pragma endscop
}
