/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((var_16 ? var_15 : var_15));
        arr_4 [i_0] = (var_4 < var_13);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_17 &= ((!var_0) != (((-var_13 < (!var_6)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_19 [i_2] [i_4] [i_3] [i_2] [i_1] [i_2] = (((max(((min(var_2, var_4))), (var_8 & var_1)))) - ((var_4 | ((72 ? -7404506007067122553 : -7404506007067122553)))));
                                arr_20 [i_3] [i_2] [i_3] [i_3] [i_1] &= (((((var_8 << (var_8 - 222)))) ? (~var_10) : (max(var_4, var_9))));
                                arr_21 [i_2] [i_4] [i_3] [i_2] = (min(((var_13 ? ((min(var_11, var_6))) : var_16)), var_7));
                                var_18 = (((~var_2) ? ((var_6 ? var_15 : var_16)) : (min(var_3, var_3))));
                            }
                        }
                    }
                }
            }
        }
        arr_22 [i_1] = (min((-7404506007067122553 / -7404506007067122553), (((102 >> (7404506007067122552 - 7404506007067122544))))));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_19 = (((!var_0) ? ((((1 ? -2 : 0)))) : ((~(max(var_9, var_16))))));
                        arr_29 [i_1] [i_6 + 2] [i_8] [i_1] [i_6 - 1] [i_6 + 1] = ((((var_6 ? (~var_2) : var_6)) - var_3));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_33 [i_1] [i_6 + 1] [i_6 + 1] [i_7] [i_9] = ((var_11 != ((1536 ? 1536 : 0))));
                        var_20 = ((var_8 ? ((var_12 ? var_3 : var_1)) : ((var_14 ? var_11 : var_8))));
                        var_21 = var_3;
                        arr_34 [i_1] [i_6 + 1] [i_7] [i_9] = (((var_16 ? var_1 : var_15)));
                        var_22 = (max(var_22, var_0));
                    }
                    arr_35 [i_1] [i_6 + 3] = (((((var_14 ? ((var_16 ? var_3 : var_15)) : (var_0 * var_8)))) ? (((~37973) - var_16)) : (((var_13 + var_7) - var_5))));
                }
            }
        }
        arr_36 [i_1] = ((var_6 ? 7404506007067122553 : ((((~var_4) ^ var_1)))));

        for (int i_10 = 2; i_10 < 9;i_10 += 1)
        {
            arr_40 [i_10] = (((~var_14) - -63999));
            arr_41 [i_10] = (((var_8 ? (~var_6) : (var_4 / var_13))));
        }
    }
    var_23 = var_9;
    #pragma endscop
}
