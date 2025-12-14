/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (min(var_6, var_6));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_13 = (min(var_13, (var_7 >= 1)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, (arr_6 [i_3])));
                                var_15 &= (arr_0 [2]);
                                arr_13 [19] = (arr_2 [i_0 + 1]);
                                arr_14 [1] [i_3] [i_2] [i_0] [i_0] = 240;
                            }
                        }
                    }
                    var_16 = var_7;
                    var_17 = (max(var_17, ((((~(arr_4 [i_2] [7] [7])))))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_18 = ((!(((arr_18 [21] [i_5]) >= (arr_18 [i_5] [i_5])))));
        arr_19 [i_5] = ((var_5 >= (((min((!180), 1))))));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_19 = (min(var_2, 1));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 14;i_8 += 1)
            {
                {
                    var_20 ^= var_8;
                    var_21 -= ((((min(((((arr_12 [4] [4] [i_6] [i_6] [i_6]) >= var_5))), (arr_1 [i_7] [i_7])))) ? (min(((max(1, 26141701))), var_5)) : (((((arr_4 [i_6] [i_7] [i_8]) >= (arr_12 [i_8] [17] [i_7] [i_7] [i_6])))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 15;i_10 += 1)
                        {
                            {
                                arr_35 [i_6] [5] [i_8 + 1] [13] [i_10] = (arr_27 [i_10] [i_7] [i_10]);
                                var_22 = (max(var_22, (((((min((arr_10 [i_6]), 207))) ? (9223372036854775806 >= var_6) : (((arr_10 [i_10]) ? 9223372036720558080 : (arr_10 [i_6]))))))));
                            }
                        }
                    }
                    arr_36 [i_8] = (~2121236783);
                }
            }
        }
        var_23 = (min(var_23, (((-(((var_3 >= (arr_27 [i_6] [i_6] [i_6])))))))));
    }
    #pragma endscop
}
