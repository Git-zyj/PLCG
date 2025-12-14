/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_19 &= (((((var_3 ? var_8 : 45432))) ? var_6 : var_4));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = ((((var_12 ? var_3 : 1))) ? var_1 : var_12);

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                arr_8 [i_0] [i_0] = 4;
                var_20 = (12 ? 0 : var_11);
                var_21 -= var_0;
                var_22 += ((57 ? 4 : var_14));
                var_23 *= -var_3;
            }
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_24 = var_5;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_25 *= ((var_12 ? var_11 : 243));
                            var_26 = (((~var_1) ? 29 : (-9223372036854775807 - 1)));
                        }
                    }
                }
                var_27 -= ((var_3 ? -1037951336719234017 : var_16));
            }
        }
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
    {
        var_28 = var_1;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 20;i_8 += 1)
            {
                {
                    arr_29 [i_6] [i_7] [i_6] = (max(var_2, var_13));
                    var_29 = -var_11;

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_30 += 9;
                        arr_34 [i_6] [1] [i_7] = var_18;
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 21;i_11 += 1)
                        {
                            {
                                var_31 ^= ((-(min((max(var_13, -2147483641)), 21))));
                                var_32 = var_1;
                            }
                        }
                    }
                    var_33 ^= var_4;
                }
            }
        }
        var_34 = ((min(2147483647, 11)));
        arr_41 [i_6] = ((!(!var_11)));
        var_35 -= var_15;
    }
    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {
        var_36 += var_8;
        arr_44 [11] = (min(var_8, ((804267409 ? var_0 : var_11))));
    }
    var_37 &= var_6;
    #pragma endscop
}
