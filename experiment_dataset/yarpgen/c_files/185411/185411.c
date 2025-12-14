/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = (((var_2 == (((var_12 << (var_0 - 1357902915)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (-1376 >= 4513738902928819274);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_16 = (arr_10 [i_2 - 2] [i_2 + 2] [i_2 + 3] [i_1 - 1]);
                            var_17 = ((((((((var_7 ? var_3 : var_12))) ? var_5 : (~var_12)))) ? -var_10 : (((~(((arr_2 [i_1 + 1]) ? var_4 : var_13)))))));
                            var_18 = ((-(min(var_11, ((101 ? 4513738902928819277 : var_4))))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_19 = ((var_8 << (((arr_1 [i_1 - 1] [i_1 + 1]) - 54989))));
                    var_20 += var_2;
                    var_21 -= ((((var_13 ? (arr_7 [i_0]) : var_4)) + (arr_9 [i_4] [i_4] [i_0] [i_1 + 2] [i_1 - 1] [i_0])));
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    var_22 -= ((-(min(var_4, (!var_5)))));
                    var_23 = var_1;
                    var_24 ^= var_5;
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    arr_18 [i_1] = (max((arr_14 [6] [i_1] [i_1] [i_1 + 1]), (((((var_7 ? var_1 : 16146824088633978598))) ? (arr_9 [i_1 + 1] [i_1] [i_1 + 1] [i_1] [9] [i_1]) : -var_2))));
                    var_25 = ((((((((arr_12 [i_0]) > var_5)) ? ((var_13 ? var_13 : var_12)) : var_7))) ? var_9 : (arr_4 [i_1] [i_1] [4])));
                    var_26 = var_2;
                }
            }
        }
    }

    for (int i_7 = 3; i_7 < 14;i_7 += 1)
    {
        var_27 = 18741;
        arr_21 [i_7 + 3] [i_7] = (((arr_19 [i_7 - 3] [i_7 + 3]) >= ((min(var_6, (arr_19 [i_7 - 3] [i_7 + 3]))))));
        /* LoopNest 2 */
        for (int i_8 = 4; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    var_28 = (min((arr_23 [i_8] [10] [i_9]), (((arr_24 [i_7 + 2]) >> (var_7 - 2)))));
                    var_29 = (((((var_6 ? 46786 : 4513738902928819301))) != (((-24492 ? ((min(var_8, var_6))) : (var_3 || var_3))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_30 = var_0;
                                var_31 = (((((-(~var_4)))) ? (((max(21020, var_3)))) : ((~(min(-21020, var_10))))));
                            }
                        }
                    }
                    var_32 = (max(var_3, (min((arr_24 [i_7 + 3]), (arr_24 [i_7 + 2])))));
                }
            }
        }
    }
    #pragma endscop
}
