/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 = (var_3 == var_12);

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_6 [i_1] [15] [i_0 - 1] &= var_1;

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                arr_11 [i_0] [i_0] [i_0] [i_0 - 1] = (var_1 - var_12);
                var_14 &= ((var_7 < ((var_9 ? var_8 : var_3))));
                var_15 = ((var_0 ? (!var_2) : var_0));
            }
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_20 [i_0] [i_0] [1] [i_5] [i_0] = ((255 ? 768 : 0));
                        var_16 = ((var_12 ? var_5 : var_3));
                        arr_21 [i_5] = (~var_9);
                        arr_22 [i_5] [i_5] [i_4] [i_3] [i_5] = (var_6 < var_0);
                    }
                }
            }
            var_17 = var_9;
            arr_23 [i_3] [1] [1] = -var_10;
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            arr_26 [i_0] [i_0] [0] |= var_6;
            arr_27 [i_6] = var_2;
            arr_28 [i_6] = ((~(!var_11)));
        }
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {

        /* vectorizable */
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            var_18 = (var_11 >= var_11);
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        {
                            arr_40 [i_10] = var_6;
                            arr_41 [i_7] [11] [14] [i_10] [i_11] = var_12;
                        }
                    }
                }
            }
        }
        for (int i_12 = 3; i_12 < 14;i_12 += 1)
        {
            arr_45 [i_7] [i_12] = ((var_0 | (~var_3)));
            /* LoopNest 3 */
            for (int i_13 = 1; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        {
                            arr_55 [i_7] [i_14] &= -var_8;
                            arr_56 [i_7] [7] [7] [7] [i_13] [i_14] = ((max((((var_3 ? var_0 : var_12))), ((var_7 >> (var_0 - 1762900074))))));
                            var_19 = (min(var_11, (((var_7 ? var_10 : var_0)))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_16 = 2; i_16 < 14;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 16;i_17 += 1)
                {
                    for (int i_18 = 3; i_18 < 13;i_18 += 1)
                    {
                        {
                            var_20 = (var_4 && var_1);
                            var_21 = (max(var_21, ((((var_1 ? var_0 : var_1))))));
                        }
                    }
                }
            }
            var_22 = ((min(var_11, var_8)));
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 16;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 16;i_20 += 1)
                {
                    {
                        var_23 ^= 1;
                        arr_74 [i_20] [i_19] [i_19] [11] [13] [i_7] = ((min(var_0, var_5)));
                        var_24 = (((var_7 ? var_0 : var_11)));
                    }
                }
            }
        }
        for (int i_21 = 0; i_21 < 16;i_21 += 1)
        {
            arr_77 [3] [i_21] = max(((((var_1 ? var_12 : var_1)) > (~var_1))), (!-var_6));
            arr_78 [i_21] [i_21] = var_0;

            for (int i_22 = 1; i_22 < 13;i_22 += 1)
            {
                var_25 = ((!var_4) + (((var_2 >> (var_1 - 30271)))));
                arr_81 [i_7] [i_21] [i_21] = var_5;
                var_26 = -var_12;
            }
            for (int i_23 = 4; i_23 < 15;i_23 += 1)
            {
                var_27 = (((!var_8) ? var_0 : var_9));
                var_28 = (((max(var_6, var_5)) >= ((((var_6 > var_0) ? ((var_8 ? var_2 : var_2)) : ((min(32766, 115))))))));
            }
        }
        var_29 = (min(3588725523820260273, var_6));
    }
    /* LoopNest 2 */
    for (int i_24 = 0; i_24 < 24;i_24 += 1)
    {
        for (int i_25 = 1; i_25 < 1;i_25 += 1)
        {
            {
                arr_88 [22] [i_25] = ((var_7 ? var_0 : var_1));
                arr_89 [i_24] [i_24] [i_25] = ((((var_3 ? ((min(var_5, var_4))) : var_6)) > var_8));
                arr_90 [i_25] = var_9;
                arr_91 [i_25] = var_11;
            }
        }
    }
    var_30 = ((max(var_0, (((1 ? 1 : 0))))));
    var_31 -= var_10;
    #pragma endscop
}
