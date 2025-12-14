/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((min(var_4, (min(var_4, var_0)))), var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_8 [i_0] [14] [i_2] = (-1597096876 || var_8);
                    var_12 = var_5;

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_12 [i_0] [10] [i_3] [i_0] = min(var_0, ((58 >> (8778913153024 - 8778913152996))));
                        arr_13 [i_3] [7] [i_3] [i_3] [4] [7] = (min((1597096876 | -14323), ((var_7 << (var_5 - 38114)))));
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_13 -= ((+((((var_7 == var_1) || var_5)))));
                        var_14 = ((((((var_7 || (((var_7 ? var_10 : var_5))))))) != (min(var_4, (var_2 % var_10)))));
                        arr_16 [i_1] = (((min(var_1, var_5))));
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_15 = ((((var_6 || (var_6 >= var_6)))));
                        arr_21 [i_2] [i_2] = (min(var_2, (var_8 == var_4)));
                        var_16 = (var_7 || -396);
                        var_17 = (((min(var_2, var_5))));

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_25 [i_6] [16] [i_6] [i_6] [1] = ((var_2 - var_9) ? ((var_9 ? var_9 : var_10)) : ((min(var_0, var_9))));
                            var_18 = (((((((var_6 ? var_4 : var_1))) ? 17507189989658161204 : var_10)) == (((-378 ? 407 : 380)))));
                            var_19 += (((((min(var_7, var_7)) & (var_9 + var_7)))));
                            arr_26 [i_0] [i_6] [14] [i_2] [i_6] [i_0] = ((!((min(var_8, var_4)))));
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_20 ^= ((min(var_2, var_2)));
                        var_21 = (((1597096864 ? 6093905864291300731 : 6093905864291300729)));
                    }
                    var_22 |= 24464;
                    arr_33 [16] [16] = -397;
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    var_23 += var_4;
                    arr_37 [i_0] [i_0] [9] [i_9] = var_9;
                    var_24 = ((var_2 << (var_10 - 18068)));
                    arr_38 [i_0] [i_1] [i_0] = var_9;
                    var_25 = var_1;
                }
                var_26 = (min(var_26, ((((1597096870 == 1597096856) - 96)))));
                var_27 = ((var_3 ? (min(var_4, var_3)) : var_6));
                arr_39 [0] [i_1] = (var_0 | var_10);
            }
        }
    }

    /* vectorizable */
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                {
                    arr_48 [i_12] [i_11] [i_12] [i_12] = var_3;
                    var_28 = var_5;
                }
            }
        }
        var_29 += ((var_0 ? var_6 : var_3));
        var_30 -= var_5;
    }
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                {
                    var_31 = ((~((18401 << (((-382 + 407) - 25))))));
                    arr_55 [i_15] [i_15] [i_15] [i_14] = var_0;
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 0;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 10;i_17 += 1)
                        {
                            {
                                arr_64 [i_13] [i_15] = ((var_2 & (((var_8 ? var_8 : var_6)))));
                                var_32 = (min(((min(var_10, var_10))), var_0));
                            }
                        }
                    }
                }
            }
        }
        arr_65 [i_13] [i_13] = (((253 % 1597096856) || ((min((-3722297365920569696 || 1), 3819448661)))));
    }
    var_33 |= (((var_2 / var_7) ? var_1 : ((+(((var_9 + 2147483647) << (var_4 - 1224005147)))))));
    var_34 = (((62293 ? 1597096864 : 383)));
    #pragma endscop
}
