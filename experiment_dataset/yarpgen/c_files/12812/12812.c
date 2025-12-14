/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((max(-var_6, ((var_7 ? var_11 : (arr_0 [i_0]))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_12 = (((arr_3 [i_0] [i_1]) | var_3));
            var_13 = 18446744073709551596;
        }
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_14 = ((20 ? 0 : 913043440));
            var_15 = var_5;
        }
        arr_11 [i_2] [i_2] = ((~(((arr_3 [i_2] [i_2]) ? (~11) : var_4))));
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_16 = (((-23 ? (arr_5 [i_2] [i_2]) : var_11)));
                                arr_23 [i_2] [i_2] [i_4] [i_5] [i_6] [i_2] = ((max(3215905364, 15)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_17 = (((!-var_4) ? (((max(234, var_4)))) : (max(-1, var_1))));
                                arr_30 [i_2] [i_9 - 2] [i_9] [i_8] [i_5] [i_4] [i_2] = var_3;
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        var_18 = (((((-(arr_13 [i_2])))) - -1079061929));
                        arr_33 [i_2] [i_4] [i_5] [i_2] [i_2] [i_2] = (~((159 ? var_4 : 87)));
                    }
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        arr_37 [i_11] [i_2] [i_2] [i_2] = ((((((3265461675498397225 ? 2147483638 : 1))) ? var_3 : var_3)));
                        var_19 = max(((((var_5 ? var_6 : var_2)))), (var_1 & var_11));
                        var_20 = ((((((var_9 ? 1436928210 : 26))) ? var_2 : (arr_12 [i_2] [4]))));

                        for (int i_12 = 1; i_12 < 24;i_12 += 1)
                        {
                            arr_40 [i_2] [i_11] [i_5] [i_4 - 2] [i_4] [i_2] [i_2] = max(34004, 43230);
                            arr_41 [i_2] [i_2] [i_2] [11] = 1;
                            arr_42 [i_12] [i_2] [i_4] [12] [i_5] [i_2] [i_2] = 1131950853;
                            var_21 = 1261737349;
                        }
                    }
                    arr_43 [i_2] [i_2] [i_2] = (((((~(~var_3)))) ? ((~(~var_11))) : (~var_11)));
                    arr_44 [i_2] [i_2] = ((((max(var_3, var_0))) ? (max((((1131950853 ? 32767 : 1))), (arr_36 [i_2] [i_4] [18] [i_2]))) : (((36 ? (((!(arr_1 [i_2] [i_2])))) : (arr_22 [i_2] [i_5]))))));
                }
            }
        }
        var_22 = ((max((((-(arr_27 [i_2] [1] [i_2] [4] [i_2])))), (min(var_8, var_7)))));
        var_23 = ((!((((arr_4 [i_2]) * (arr_4 [i_2]))))));
    }
    var_24 = max(var_10, var_7);
    var_25 = 127;
    var_26 = var_0;
    #pragma endscop
}
