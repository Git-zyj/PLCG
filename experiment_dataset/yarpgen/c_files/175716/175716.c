/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (arr_2 [i_0])));
                arr_7 [8] [i_0] = (((((2147483647 ? (arr_4 [i_0 + 2]) : 2147483647))) ? ((14270 / (((arr_3 [i_1] [i_0] [i_0]) ? (arr_5 [i_0] [i_0]) : var_13)))) : 65535));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_16 = ((2688592030 ? ((((arr_11 [i_0]) >= 255))) : ((1606375246 ? 709818566 : var_10))));
                            arr_12 [i_0] [i_0] [i_0] [i_2] [i_2] [1] = ((((((var_6 << (-1 + 16)))) ? (arr_8 [i_0] [i_0]) : ((((arr_2 [i_0]) > 35841))))));
                        }
                    }
                }
                arr_13 [i_0] [i_0] = (((65535 + var_4) * (((arr_9 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 1]) >> (arr_9 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 1])))));
            }
        }
    }
    var_17 *= ((((((var_9 + var_3) ? var_3 : var_1))) ? 65535 : ((var_3 ? var_4 : var_12))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                var_18 = ((((((arr_16 [i_5] [i_4] [i_4]) != 1)) ? (arr_15 [i_4]) : 1)));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {

                            for (int i_8 = 4; i_8 < 21;i_8 += 1) /* same iter space */
                            {
                                var_19 = (((19955 && 866859538) <= 431160156));
                                arr_24 [1] [i_5] [i_5] [i_5] [13] [i_5] = (arr_22 [i_4] [i_5] [i_8 + 1] [i_6] [i_8] [0] [i_6]);
                            }
                            for (int i_9 = 4; i_9 < 21;i_9 += 1) /* same iter space */
                            {
                                arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((((var_8 ^ (arr_16 [i_9 - 4] [i_9 - 2] [i_9 - 1]))) != ((65535 ? (arr_25 [i_9 - 4] [i_9] [i_7] [i_6] [i_5] [i_4]) : 1))));
                                arr_28 [i_7] [19] [5] [i_7] [i_9] [i_6] [i_9] = ((((((arr_19 [i_9] [i_5] [i_6]) ? 3 : 1))) ^ ((((arr_15 [i_7]) & (arr_14 [i_5] [i_9]))))));
                            }
                            /* vectorizable */
                            for (int i_10 = 0; i_10 < 22;i_10 += 1)
                            {
                                arr_31 [i_4] [i_5] [i_4] [i_4] [i_10] = var_12;
                                var_20 *= var_1;
                                var_21 = ((var_13 ? var_2 : var_11));
                            }
                            arr_32 [i_7] [i_5] [i_6] [i_7] = ((65535 ? var_10 : (arr_16 [i_4] [i_5] [i_6])));
                        }
                    }
                }
                var_22 = (min(var_22, ((((-431160157 ? 28536 : (arr_26 [i_4] [i_5] [i_4] [i_4] [i_4])))))));
                arr_33 [i_4] [i_5] [i_5] = (((2121844762 ? (((arr_22 [i_4] [i_4] [i_4] [i_4] [i_5] [i_5] [i_5]) ? (arr_17 [i_4]) : 19)) : 1)));
            }
        }
    }
    var_23 = var_2;
    #pragma endscop
}
