/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, ((max((max(var_6, (min(0, var_3)))), -4707939914986581543)))));
                    var_18 = (min(12387, ((-15216 ? 5 : 15225))));
                    arr_8 [i_0 + 1] [i_0] = ((((var_6 ? var_5 : var_6))));
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 6;i_3 += 1)
    {
        arr_11 [1] [1] = (((max((arr_4 [10] [i_3 + 1] [20]), (((-23116 ? (arr_10 [i_3] [i_3]) : var_8))))) << (((-15216 + 15270) - 54))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 8;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {

                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            var_19 = ((((var_4 ? var_2 : var_6))) || var_14);
                            arr_22 [i_7] [i_5 - 1] [8] = ((max(4070050396, 840906274)));
                            var_20 += min(((~(((arr_4 [i_4] [i_5 + 2] [16]) ^ var_5)))), var_9);
                        }
                        arr_23 [i_3] [i_3] [i_4] [i_3] = var_15;
                        var_21 = (arr_13 [i_3] [i_3] [i_3]);
                        var_22 = ((((max(3188801084, var_3))) ? ((((((var_6 ? 1 : var_13))) ? var_11 : var_6))) : ((var_7 ? ((var_12 & (arr_21 [i_6] [i_5 - 1] [i_4] [i_4] [i_4] [i_3] [i_3]))) : ((var_7 ? -2813937910166108 : var_14))))));
                    }
                }
            }
        }
        arr_24 [i_3] = var_15;
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        arr_27 [i_8] = var_13;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {
                {
                    var_23 = -840906255;
                    arr_35 [i_8] [i_9] [i_10] = ((-var_5 + 2147483647) >> (((((arr_29 [i_10 - 1]) ? var_16 : 8733)) - 9187820904062212545)));
                    var_24 = ((!(~var_15)));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            {
                                arr_44 [i_10] [i_9] [i_9] [i_9] [i_9] = ((((7491821974943485282 ? 1 : (840906284 | -840906275))) + var_3));
                                var_25 = (((161 ? 17773 : 8608828675092101951)));
                                arr_45 [i_8] [i_9] [i_8] [i_10] = ((((max(0, -2134240284))) <= (((var_8 ? var_0 : 840906288)))));
                            }
                        }
                    }
                }
            }
        }
        arr_46 [i_8] = ((1 ? var_8 : ((((arr_33 [i_8] [i_8]) >= (min(var_13, 3)))))));
        arr_47 [i_8] = 1578862838;
    }
    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {

        for (int i_14 = 1; i_14 < 18;i_14 += 1)
        {
            arr_55 [i_13] [14] = var_9;
            var_26 = 15199;
            arr_56 [i_13] [i_13] [i_13] = (arr_52 [i_13] [i_13]);
            arr_57 [i_13] [i_14 + 2] [i_13] = ((((840906267 ? ((-119 ? 4192898690480826768 : -7491821974943485265)) : -1))) ? (((((max(var_2, var_13))) ? var_1 : ((min(1, var_3)))))) : (((var_5 / var_11) ? 4028760379 : (arr_4 [i_13] [i_13] [i_13]))));
        }
        for (int i_15 = 1; i_15 < 19;i_15 += 1)
        {

            /* vectorizable */
            for (int i_16 = 1; i_16 < 20;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 19;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 1;i_18 += 1)
                    {
                        {
                            var_27 = (arr_65 [i_13] [i_13]);
                            var_28 = ((~(arr_54 [i_13] [i_15 + 2])));
                            var_29 += -var_14;
                            arr_69 [i_13] [i_13] [i_13] [i_13] = var_0;
                            arr_70 [i_13] [i_15] [i_17] [i_13] = (1578862838 ? 1809665258 : 161);
                        }
                    }
                }
                arr_71 [i_13] [i_15] [i_13] = (arr_48 [14]);
            }
            var_30 = -91;
        }
        for (int i_19 = 2; i_19 < 17;i_19 += 1) /* same iter space */
        {
            var_31 = var_9;
            var_32 = (max(((max(var_12, var_5))), -4192898690480826777));
        }
        for (int i_20 = 2; i_20 < 17;i_20 += 1) /* same iter space */
        {
            arr_78 [6] [i_20] [i_20] |= var_3;
            var_33 = ((1 / (arr_58 [i_13] [i_20 - 1])));
        }
        var_34 = ((((52 - (arr_74 [i_13] [6] [i_13])))) ? (arr_77 [i_13] [i_13] [i_13]) : 1);
        var_35 = -99;
        var_36 &= var_8;
    }
    for (int i_21 = 2; i_21 < 21;i_21 += 1)
    {
        var_37 = (max(1003010578, ((((arr_1 [i_21] [i_21]) && -20588)))));
        var_38 = ((max(2147483647, ((max(var_13, 65534))))));
    }
    var_39 = ((((max(1, var_0))) | 0));
    var_40 = var_4;
    #pragma endscop
}
