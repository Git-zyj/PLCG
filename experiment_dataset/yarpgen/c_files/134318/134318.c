/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_6 ? ((1 ? -84 : 1)) : 173));
    var_17 = (min(var_17, (((var_15 ? 17179869183 : 1)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = (min(var_18, (var_5 * var_8)));
        var_19 = (max(var_19, ((((~1) ? var_1 : -26949)))));
        var_20 = (min(var_20, 112));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, var_13));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_22 = (min(var_22, ((((83 % var_3) << (var_1 + 7216681542686583453))))));
                        var_23 = (max(var_23, (((52 ? var_0 : 112)))));
                        arr_10 [i_3] [i_2] [i_2] [i_3] = 1;
                        var_24 = (max(var_24, (((~((var_1 ? var_11 : var_4)))))));
                        var_25 = (max(var_25, (~var_7)));
                    }

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_26 = (((var_7 ? 32142 : -1069396220)));
                            var_27 = (((~var_11) * (~17592186044415)));
                            arr_18 [i_4] [i_5] [i_4] = ((127 ? 32756 : var_10));
                            var_28 = (max(var_28, ((((var_5 ? -30 : var_15))))));
                        }
                        var_29 = (min(var_29, (((~(-17592186044401 * 176))))));
                        var_30 = (min(var_30, ((var_6 ? ((var_9 ? var_11 : -32757)) : -32482))));
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_31 = (max(var_31, (17592186044415 < 78)));
                            var_32 = (((((1 ? -17 : -122))) ? ((((var_2 + 2147483647) << (var_11 - 109)))) : 4967079114487268029));
                        }
                        var_33 = (min(var_33, ((((((15242936658217913879 ? var_12 : var_9))) ? ((var_3 ? var_1 : 32482)) : (~4013051727))))));
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                    {
                        var_34 = (min(var_34, (((var_8 ? var_7 : var_4)))));
                        arr_27 [11] [11] = (((((127 ? 25 : 8772359410930275226))) ? 1134257841 : 246));
                        var_35 = (((((-56 ? 13 : 32476))) ? var_7 : -1700575933));
                        var_36 = (min(var_36, 1700575933));
                    }
                }
            }
        }
    }
    var_37 = 1700575935;
    #pragma endscop
}
