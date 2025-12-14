/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_8 [i_0] [1] [i_1] &= arr_4 [20] [i_0];
                arr_9 [i_0] = var_11;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_22 [i_2] [i_2] [i_2] = 32767;
                                var_15 = (((((max((129655975804959616 || 6), (arr_19 [8] [8] [i_3] [i_4] [2] [i_6]))))) < var_12));
                                var_16 = (arr_18 [i_4] [10] [i_4] [i_5]);
                            }
                        }
                    }
                }
                arr_23 [i_2] [i_3] [i_2] = (min((((arr_14 [i_2] [i_3]) << (arr_14 [i_2] [i_2]))), 57892));
                var_17 = (min(var_17, var_2));
                arr_24 [i_2] [i_2] = ((0 + (arr_21 [i_2] [i_3] [i_3] [i_2])));
            }
        }
    }

    for (int i_7 = 3; i_7 < 19;i_7 += 1)
    {
        var_18 |= ((((-(arr_13 [i_7 - 1] [i_7 + 1]))) ^ ((var_8 - (arr_13 [i_7 - 1] [i_7 + 1])))));
        arr_28 [i_7] = (((min(var_0, (arr_11 [12]))) | ((((arr_4 [i_7 + 1] [i_7]) ? -14878 : 1)))));
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    var_19 = (max(var_19, (((((((min(32760, var_10)) > (((25655 ? var_14 : (arr_14 [0] [0]))))))) == 0)))));
                    arr_36 [i_8] [i_8] = (min(var_13, (max(-17290, 9485))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 9;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 8;i_12 += 1)
            {
                {
                    arr_43 [i_12] [1] [i_12] [i_12] &= (min((((((-25673 ? -4625711229364776265 : 62885))) / (min(var_3, var_8)))), var_5));
                    arr_44 [i_8] [10] [i_8] [i_12] = (((var_1 | (((arr_30 [8] [8]) ^ var_13)))));
                }
            }
        }
        arr_45 [i_8] = (((((((56 / -14902) > -129655975804959599)))) == (min(2734373550, (min(8686834692161974251, 7035768925674917600))))));
        var_20 = (max(var_20, (28205 - 1851368619)));
    }
    #pragma endscop
}
