/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = ((var_6 - (min((((arr_5 [16] [i_0] [16]) << (7081145217724283980 - 7081145217724283948))), 8955184645016904587))));
                    var_14 = (arr_3 [i_0]);
                    var_15 = var_11;

                    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                    {
                        var_16 = var_0;
                        var_17 *= (((!1060609954715410268) ? 10775700284179850150 : (-14431 && -8)));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        var_18 = 55;
                        var_19 = var_6;
                        var_20 = (min(var_20, (((((((min(-974984384696356238, 0))) ? ((18126995113493549454 ? var_2 : var_11)) : var_2)) - (((((min(var_3, (arr_6 [i_0] [i_0] [i_4] [i_2] [i_0])))) && (arr_6 [i_0] [i_0] [i_0] [0] [i_0])))))))));
                        var_21 -= (((((-((((arr_8 [i_0] [i_4]) && 2147483646)))))) ? (((-1 ? var_6 : -104))) : ((var_5 ? (min(var_7, (arr_5 [i_1] [i_1] [i_4]))) : (arr_5 [i_4] [i_2] [i_4])))));
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_22 = (max(var_22, (arr_5 [i_0] [i_0] [1])));

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_23 = ((-(((4 - var_12) ? (arr_3 [i_0]) : (arr_10 [i_0] [i_0] [i_0] [i_0])))));
                            var_24 = 12113378085956392793;
                            var_25 = ((-((((((arr_3 [i_0]) ? var_11 : (arr_11 [i_2] [i_2] [i_0] [17])))) ? (~1516014672) : (var_0 / var_0)))));
                            var_26 = ((32752 ? 234 : -7828049445319012462));
                            var_27 = (arr_0 [i_0]);
                        }
                    }
                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        arr_21 [i_7] [0] [2] [2] [i_0] [i_0] |= ((((((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) * var_9))) ? (((((527263486 ? (arr_16 [2] [i_1] [12] [12] [i_1]) : (arr_15 [i_0] [6] [i_0] [i_0] [i_0])))) ? var_6 : -11367)) : var_2));

                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_28 = (+(max((arr_16 [i_7 - 1] [i_7 + 1] [i_8] [i_7 - 1] [i_7 - 1]), -var_10)));
                            var_29 = (max(var_29, (((((var_2 ^ 89) ? 1 : var_1))))));
                            var_30 = (((((arr_20 [i_0] [i_1] [i_8] [i_8] [i_7 - 2]) | (arr_20 [i_0] [i_1] [i_8] [i_2] [i_7 - 2]))) > ((((((((arr_0 [i_0]) && 1))) < (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                            arr_26 [i_0] [i_1] [i_0] [i_0] [i_0] [i_1] [i_0] = -7552854560171211759;
                        }
                        for (int i_9 = 0; i_9 < 0;i_9 += 1) /* same iter space */
                        {
                            var_31 += ((9223372036854775807 ? ((max((((arr_10 [i_0] [16] [i_2] [i_0]) / -5411628716049443238)), var_10))) : (min(((2243003720663040 * (arr_4 [i_0] [i_0] [i_9]))), (8796093022207 * var_9)))));
                            var_32 = (max(var_32, (((arr_13 [i_1] [i_1]) % -var_4))));
                            var_33 = (max(var_33, (arr_18 [i_2] [i_7] [1] [i_7])));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 0;i_10 += 1) /* same iter space */
                        {
                            var_34 = ((-(arr_13 [1] [i_1])));
                            var_35 = (((3669128110 || 13707653812698751952) | -2020677661));
                        }
                        var_36 = -6950442802428827384;
                    }
                }
            }
        }
    }
    var_37 = ((187 ? 18446744073709551612 : 0));
    var_38 = ((((var_9 | ((var_7 ? var_6 : var_11)))) <= 4294967295));
    #pragma endscop
}
