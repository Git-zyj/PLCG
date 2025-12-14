/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((+((((arr_1 [i_0] [i_0]) != (arr_1 [i_0] [i_0]))))));
        var_11 = (min(var_11, var_1));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            arr_14 [i_3] [i_4] = var_0;
                            var_12 -= (max((((~6923722509154578650) ? (arr_12 [i_5] [i_1] [i_3] [i_2] [i_1] [i_1]) : ((6923722509154578650 >> (var_5 + 8069305159892640596))))), (~-6923722509154578651)));
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_13 = (max(var_13, (((((((var_5 ? 16 : 166))) ? (((arr_8 [i_1] [i_1]) % var_10)) : (arr_12 [i_6] [i_4] [i_3] [i_3] [i_2] [i_1]))) / (((((88 ? 3909 : 40679))) ? var_8 : (arr_16 [i_6] [i_4] [i_3] [i_2] [i_1])))))));
                            var_14 = var_3;
                            var_15 = ((var_7 < ((((((11511484406307888060 ? 13195086313747165327 : 127))) ? ((((arr_12 [i_1] [i_2] [i_2] [i_4] [i_4] [8]) / (arr_9 [4] [6] [i_2] [i_1])))) : var_8)))));
                            var_16 = (min(((((arr_10 [6] [i_2] [i_2] [i_1]) ? (arr_13 [3]) : ((~(arr_13 [i_1])))))), ((var_8 >> ((((arr_8 [i_1] [i_1]) >= var_3)))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            var_17 = (arr_5 [i_4] [i_2] [i_3]);
                            var_18 = (((arr_17 [i_7] [i_2] [i_7 - 1] [i_7 + 1] [i_2] [i_7 + 2] [i_7]) ? ((-4567669695878792558 ? var_8 : var_7)) : (var_4 % var_10)));
                            arr_19 [i_7] [i_1] [i_3] [i_4] = ((~(((arr_5 [i_1] [i_3] [i_4]) - (arr_3 [i_1])))));
                        }
                        var_19 += ((47422 ^ (((var_2 | var_3) >> (((var_6 & 32170) - 18848))))));
                        var_20 ^= var_10;
                    }
                }
            }
        }
        var_21 = (max(var_21, ((((arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) / -6923722509154578656)))));
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
    {
        var_22 = (((!var_10) ? (arr_20 [i_8]) : (((arr_21 [i_8]) ? (((-(arr_11 [i_8] [i_8] [i_8])))) : ((var_4 ? (arr_15 [i_8] [i_8] [i_8] [14] [i_8] [i_8] [i_8]) : (arr_20 [i_8])))))));
        var_23 = (arr_7 [i_8]);
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
    {
        var_24 = ((-((((arr_4 [19] [i_9]) && (arr_5 [i_9] [i_9] [i_9]))))));
        var_25 = (arr_16 [i_9] [i_9] [15] [i_9] [i_9]);
        arr_24 [i_9] = ((((var_3 == (arr_20 [i_9]))) ? (((arr_17 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) / var_8)) : (((((arr_20 [i_9]) < var_10))))));
        var_26 = (min(var_26, ((((((arr_13 [i_9]) ? var_6 : (arr_3 [i_9]))) > (arr_13 [i_9]))))));
        var_27 = (arr_15 [i_9] [i_9] [i_9] [i_9] [16] [i_9] [16]);
    }
    var_28 = var_2;
    #pragma endscop
}
