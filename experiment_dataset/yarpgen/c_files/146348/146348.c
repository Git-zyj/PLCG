/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (30 & var_5);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1] = (((((45818 ? var_7 : 31))) <= (-1301 - var_0)));
                        arr_10 [i_0] [i_1] [i_0] [i_3] = ((var_10 ? ((var_0 ? 25513 : (arr_7 [i_0] [i_0] [i_2] [i_0] [i_2] [i_0]))) : ((var_8 >> (var_5 - 63219)))));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            arr_17 [i_0] [i_0] = (-6560439285427767373 * 0);
                            var_18 = ((var_13 ? 46713 : (arr_15 [i_2] [i_5 + 1])));
                            arr_18 [11] [i_1] [i_1] [1] [i_0] [i_5 - 1] = var_16;
                        }
                        arr_19 [i_4] [i_0] [i_4] = ((((var_4 ? var_0 : var_13))) ? (!1) : (((arr_15 [i_0] [i_0]) ? var_13 : (arr_15 [i_0] [i_0]))));
                        var_19 *= (arr_0 [i_1]);
                        var_20 = (min(var_20, (((((((((var_16 << (10188291742712036277 - 10188291742712036259)))) ? ((var_8 ? 10188291742712036260 : var_8)) : ((var_11 ? 10188291742712036284 : (arr_13 [i_4] [i_4] [i_0] [i_1] [i_0] [i_0])))))) ? ((-(arr_1 [i_2]))) : (~65535))))));
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            var_21 = (((!0) & ((max((arr_14 [i_7 + 1] [1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7] [i_7]), (arr_12 [i_0] [i_6] [i_2] [i_6] [i_7] [i_1]))))));
                            var_22 ^= var_4;
                            arr_26 [i_0] [i_6] [i_6] [i_2] [i_1] [i_1] [i_0] = var_11;
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_23 = (((2767490559 || (12370 || var_4))) ? (max(3034578981, 0)) : ((((((var_8 >> (var_10 - 196)))) ? 255 : (arr_1 [i_0])))));
                            var_24 = ((10188291742712036277 != ((992 ? var_13 : ((min(var_8, var_15)))))));
                        }
                        var_25 -= var_11;
                        arr_29 [i_0] = ((~((~(1 < var_5)))));
                        var_26 -= var_1;
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        arr_34 [i_0] [2] [i_2] [i_0] = (((1 >> (65535 - 65514))));
                        arr_35 [i_0] [4] [12] = arr_15 [i_0] [i_2];
                    }
                    arr_36 [i_0] = (min(((0 ? (arr_32 [i_0] [i_1]) : (arr_32 [i_0] [i_0]))), (((((min(1044601516, var_10))) ? var_11 : 65535)))));
                }
            }
        }

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_39 [i_0] [i_0] = (((~(var_2 * var_1))));
            var_27 = var_15;
            arr_40 [i_0] [12] |= -1;
        }
        var_28 = (((0 & var_13) ? ((min(100820688, (!12288)))) : -1));
        arr_41 [i_0] [i_0] = (arr_14 [i_0] [i_0] [i_0] [i_0] [2] [i_0] [1]);
    }
    #pragma endscop
}
