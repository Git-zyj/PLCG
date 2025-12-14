/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_6, (((var_2 ? (!var_4) : var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 = 188;
                arr_6 [i_0] [i_1] = (((!var_1) ? ((max(var_10, var_11))) : ((var_6 ? var_8 : var_5))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                var_16 *= (((var_0 || var_2) ? ((max(var_12, var_8))) : (var_5 & var_12)));
                                arr_17 [i_0] [i_0] = ((((var_0 ? var_11 : var_11))) ? (max(17871651461641516165, 78)) : ((var_10 ? var_3 : var_13)));
                            }
                            for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                            {
                                arr_22 [i_0] [i_1] [i_0] [i_3] = (max(var_11, var_10));
                                var_17 = (max(var_10, ((var_9 ? var_10 : 2635445935497569731))));
                                var_18 = max((194 / 183), (max((((var_7 ? 127 : 188))), 18446744073709551615)));
                            }
                            for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                            {
                                arr_25 [i_6] [i_2] [i_6] = (((!var_7) && ((max(2635445935497569730, 8557598913831109337)))));
                                var_19 = ((((max(var_11, var_9))) ? (!var_2) : (max(var_2, (var_4 / var_4)))));
                                var_20 *= (max(var_2, ((var_9 ? var_2 : 241))));
                            }
                            for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                            {
                                arr_29 [i_0] [i_0] [i_0] [i_3] [i_2] [i_7] |= ((((var_1 ? var_10 : ((194 ? 61 : var_0))))) ? (!18446673704965373952) : (((((192 ? 18097952773581924730 : var_3))) ? (var_2 / var_11) : 575092612068035451)));
                                var_21 &= 730193318371154334;
                                var_22 = (max(-var_11, ((var_5 >> (var_3 - 4108880567785242536)))));
                                var_23 = max(((max(var_4, 63))), (188 + 575092612068035446));
                                var_24 &= ((((-var_3 ? ((var_3 ? var_9 : var_0)) : var_1)) / (((var_8 * var_4) ? (max(var_1, var_7)) : (max(var_2, var_4))))));
                            }
                            var_25 = (((max(var_11, 17871651461641516158)) <= (((((var_13 == var_13) && var_4))))));
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                {
                    var_26 -= var_9;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                var_27 = (max(575092612068035432, 255));
                                var_28 ^= (575092612068035451 < 15811298138211981896);
                                arr_39 [i_0] [i_1] [i_8] [i_9] [i_10] [i_9] [i_1] = (((((var_0 ? (max(2635445935497569721, var_5)) : var_8))) && ((max(((var_4 ? var_6 : var_3)), var_11)))));
                                arr_40 [i_0] [i_0] [i_8] [i_10] [i_9] [i_10] = (max(((var_7 ? var_0 : var_1)), ((67 ? var_6 : var_8))));
                            }
                        }
                    }
                }
                for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                {
                    arr_44 [i_0] [i_11] = (((((!((max(var_0, var_13)))))) != (!8882500886912269292)));
                    arr_45 [i_0] = ((((18446744073709551615 ? var_13 : var_0))) + ((70 ? var_1 : var_13)));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        for (int i_14 = 4; i_14 < 24;i_14 += 1)
                        {
                            {
                                var_29 = (min(var_29, (((((17290178980817288121 ? 83 : 36)) > var_13)))));
                                arr_53 [i_12] [i_12] [i_12] [i_13] [i_14] = (var_0 ? (((var_3 ? 48 : var_8))) : var_1);
                                var_30 *= 17290178980817288121;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 22;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 25;i_16 += 1)
                        {
                            {
                                var_31 = (var_6 ? var_6 : 188);
                                var_32 = ((var_8 ? var_8 : var_2));
                                arr_60 [i_1] = (35 ? var_1 : var_12);
                            }
                        }
                    }
                    arr_61 [i_12] = (var_2 ? var_2 : ((var_11 ? 184 : var_2)));
                }
            }
        }
    }

    for (int i_17 = 0; i_17 < 15;i_17 += 1)
    {
        var_33 = ((((max(var_0, ((var_1 ? 220 : var_8))))) ? ((((18446744073709551615 / 19) ? (236 * var_0) : (164 * var_10)))) : (max(0, var_8))));
        var_34 = (max((var_0 > var_13), 212));
    }
    for (int i_18 = 1; i_18 < 9;i_18 += 1)
    {

        for (int i_19 = 0; i_19 < 12;i_19 += 1)
        {
            var_35 = (!-var_13);
            arr_72 [i_18] = ((((max(6534458694587145086, 18446744073709551615))) || 164));
            var_36 -= ((((max(237, var_12))) ? (var_1 % 180) : var_10));
        }
        for (int i_20 = 3; i_20 < 10;i_20 += 1)
        {
            var_37 ^= ((186 ? var_6 : var_0));
            arr_76 [4] [i_18] [4] |= -var_1;
            arr_77 [i_18] [i_18] [i_20] = (((((max(35, 176)))) ? (((63 ? 76 : 255))) : ((max(((7052219730568093459 ? 62 : var_8)), (!var_0))))));
        }
        var_38 = (((((var_1 ? 5431027182868481827 : 71987225293750272))) ? (~150) : ((var_1 ? 249 : var_10))));
    }
    #pragma endscop
}
