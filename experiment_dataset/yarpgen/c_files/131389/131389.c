/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((-(((!(((var_8 ? -19118 : var_1))))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] = var_12;
                        arr_12 [i_1] [i_1] [i_1] [i_1] = ((var_6 ? (((-((1212402847744483489 ? 65534 : 55792))))) : ((-(~var_17)))));
                        var_18 = (~((-var_14 ? (~var_15) : (!var_16))));
                        var_19 = (max(var_11, var_11));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_20 = max(0, (max((~15), (~-19136))));
                    var_21 = ((-19117 ? 23 : (max(8393788651266150284, (~1)))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [i_7] [i_0] = ((-(max(6238894771242168448, (max(var_1, 8451175936153562129))))));
                                var_22 = (+-3484946276260885678);
                            }
                        }
                    }
                    arr_24 [i_0 + 2] [i_0] [i_0] = -4743407396278202751;
                }
            }
        }
        var_23 += ((-(min(var_7, (min(var_3, var_14))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {

                    for (int i_11 = 4; i_11 < 10;i_11 += 1)
                    {
                        var_24 = (max(var_24, var_15));
                        arr_36 [i_8] = 0;
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_25 += var_14;
                        arr_40 [i_8] [i_9] [i_10] [i_8] [i_8] [i_12] = var_8;
                        var_26 ^= 0;
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            {
                                var_27 += ((9750 ? -248 : (~var_7)));
                                var_28 = (min(var_28, -var_0));
                                var_29 = (max(var_29, 65534));
                                var_30 = (min(var_30, var_5));
                                arr_47 [i_13] [i_9] [i_13] [7] [i_9] [i_9] = var_5;
                            }
                        }
                    }
                }
            }
        }
        arr_48 [i_8] = ((-54 ? var_11 : -var_13));
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                {
                    var_31 ^= (((((-10 ? 248 : var_4))) ? var_8 : var_3));
                    var_32 = (min(var_32, (((var_8 ? ((var_17 ? 1016 : 5863321489860229167)) : var_17)))));
                }
            }
        }
        var_33 = ((-3 ? -var_2 : -var_12));
    }
    var_34 = 4743407396278202750;
    #pragma endscop
}
