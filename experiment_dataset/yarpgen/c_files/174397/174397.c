/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [0] &= var_3;
        var_19 += (~var_13);
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 23;i_4 += 1)
                    {

                        for (int i_5 = 2; i_5 < 21;i_5 += 1)
                        {
                            arr_18 [i_4] = var_12;
                            arr_19 [i_1] [i_4] [i_3] [i_4] [i_5 + 4] = (var_10 ? var_9 : ((3629542698 ? var_14 : var_10)));
                            var_20 = var_18;
                            var_21 = (((var_9 >= var_15) ? var_1 : var_3));
                        }

                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_1] [i_2] [15] [i_4 + 1] [i_6] [i_4] [i_3] = (16465219898610754725 && 2047627151);
                            var_22 = ((var_0 ? 0 : var_13));
                            arr_23 [i_1] [i_2 - 1] [i_4] [i_3] [i_6] = ((var_14 ? 2047627168 : var_7));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_1] [i_2] [i_4] [i_3] [1] [i_3] = (var_8 ? ((var_11 ? var_1 : var_8)) : 2047627151);
                            var_23 = (~2809432261);
                            arr_27 [i_1] [i_4] [i_3] [i_4] [i_4] [i_7] = ((var_13 ? var_12 : var_15));
                            arr_28 [i_1] [i_1] [i_3] [i_2] [i_7] [1] [i_4] = ((1037115634 ? 172 : 3629542706));
                        }
                        var_24 = (min(var_24, var_16));
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        arr_31 [i_2 + 1] [i_3] = ((3770808810 ? 16465219898610754725 : 8952775550228557263));
                        var_25 = ((((-(min(-137, -1399603470312266488)))) > (var_0 >= -var_4)));
                        var_26 += ((((min(var_3, var_2))) ? (((~var_17) ? 1056964608 : var_6)) : 3238002714));
                    }
                    for (int i_9 = 1; i_9 < 24;i_9 += 1)
                    {

                        for (int i_10 = 2; i_10 < 21;i_10 += 1)
                        {
                            var_27 = (~1644043871);
                            var_28 = ((((min(var_4, var_6))) ? (!2047627171) : -416648378));
                        }

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            var_29 = (max(var_29, var_8));
                            arr_41 [i_1] [i_1] [i_1] [i_1] [20] = (~262143);
                        }
                    }
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        arr_45 [1] [i_2] [i_2] [i_2 + 4] [i_2] [1] = -var_11;
                        arr_46 [i_3] [i_3] [16] [16] = (min((((((var_3 ? var_4 : var_18))) ? (~var_16) : (~-140737488355328))), ((max(var_8, 31744)))));
                        arr_47 [i_1] [i_1] [i_1] [i_1] = var_1;
                        var_30 = var_14;
                    }
                    arr_48 [i_1] [i_1] [i_3] [i_3] = var_13;
                    arr_49 [i_1] [2] [2] = ((-((1 ? 9223372036317904896 : var_17))));

                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        var_31 = (!var_15);
                        arr_53 [i_1] [i_1] [i_1] [i_1] = var_10;
                    }
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        arr_57 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] &= ((~(max(((var_8 ? var_14 : var_2)), (!var_11)))));
                        var_32 += 3629542701;
                        arr_58 [i_3] [i_1] [i_1] [i_14] = (((!var_9) ? (3238002697 | var_10) : var_5));
                        arr_59 [i_1] [i_2 - 1] [i_3] [19] = var_0;
                        arr_60 [i_1] [i_2 - 2] [i_2 + 4] [i_3] [i_3] [i_14] = var_0;
                    }
                }
            }
        }
    }
    var_33 = 73;
    #pragma endscop
}
