/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 = (max(3807449643, 4294967275));
        var_15 = var_6;
        arr_2 [i_0] = var_9;
        arr_3 [i_0] [i_0] = ((!(!1072693248)));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                var_16 = ((((((var_10 > var_1) ? (var_13 != var_7) : ((var_4 ? var_4 : var_6))))) & 88));
                arr_11 [i_2] = (min(((var_0 + (var_10 | var_2))), var_1));
                arr_12 [i_2] [i_2] = (min(var_4, var_12));
            }
            for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
            {
                arr_16 [i_2] = ((((var_13 ? var_8 : var_3)) & ((96 ? 8981168124406304290 : 2017612633061982208))));
                var_17 = -var_6;
                var_18 = var_10;
            }
            for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
            {
                var_19 = (((var_3 >> (var_1 - 119))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_20 *= (174 & 99);
                            arr_28 [i_1] [i_2] [i_5] [i_6] [i_1] = var_4;
                        }
                    }
                }
                var_21 ^= -var_11;
                var_22 = ((!(var_8 >= var_6)));
                var_23 &= (((var_6 / var_5) * ((max(var_6, var_4)))));
            }
            var_24 = ((min(var_9, var_3)));
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    {
                        var_25 -= (var_9 ^ var_9);
                        arr_35 [i_1] [i_2] [i_2] [i_1] = (var_5 + var_8);
                        arr_36 [i_1] [i_2] = (-var_6 ? (var_1 + var_3) : var_2);
                        arr_37 [i_1] [i_1] [i_1] [i_1] [i_1] [i_2] = (~var_12);

                        for (int i_10 = 2; i_10 < 20;i_10 += 1) /* same iter space */
                        {
                            arr_40 [i_2] [2] [18] [i_9] [i_9] [i_9] = ((var_9 ? var_3 : var_2));
                            var_26 = (((((var_7 ? ((var_12 ? var_6 : var_11)) : var_13))) & (var_13 | var_11)));
                            var_27 = ((!(var_7 < var_7)));
                        }
                        for (int i_11 = 2; i_11 < 20;i_11 += 1) /* same iter space */
                        {
                            arr_43 [21] [i_2] [i_9] = 13747623527954817101;
                            arr_44 [i_1] [i_1] [i_1] [i_2] [i_1] [i_1] [i_1] = var_3;
                        }
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            var_28 *= var_13;
            var_29 = (((var_0 & (var_8 > var_8))));
            var_30 = 159;
            arr_47 [i_12] = (max((~var_1), (var_9 ^ var_7)));
        }
        for (int i_13 = 4; i_13 < 20;i_13 += 1)
        {

            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                var_31 = (var_4 / var_11);
                arr_52 [i_1] [i_1] [i_1] [i_13] = (max(0, 11605));
            }
            for (int i_15 = 1; i_15 < 19;i_15 += 1)
            {
                var_32 = var_7;
                var_33 = (max(var_33, ((((~var_4) ? (min(var_0, (((var_9 ? var_5 : var_7))))) : var_11)))));
            }
            arr_57 [i_1] [i_13] [i_13] = (~2837188318594753468);
        }
        arr_58 [i_1] = (var_3 / var_9);
        var_34 -= (((-var_6 * var_10) / var_12));
    }
    var_35 = (((max(var_13, var_8))));
    #pragma endscop
}
