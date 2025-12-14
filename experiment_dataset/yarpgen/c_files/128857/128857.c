/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [1] = ((0 ? (min((-2147483647 - 1), var_0)) : ((65535 ? 1 : (-127 - 1)))));

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        arr_11 [i_0] [i_3] [i_3] [i_2] [i_3] [20] = (max((((((6 ? (arr_1 [i_2] [i_1]) : 32767))) ? 0 : var_11)), var_0));
                        var_17 = (max(var_17, ((max((~var_0), (((arr_9 [i_0] [i_1] [i_3 + 2] [i_2] [i_0] [i_3]) ? 9 : 9529562599653722999)))))));
                        var_18 = (max(((((arr_9 [14] [i_3] [i_3] [i_3] [i_3 - 1] [i_3]) ? 1 : var_5))), ((var_16 ? (arr_8 [i_3] [i_3 - 1] [i_3 - 1] [i_3]) : (arr_9 [11] [i_3 + 2] [i_3 - 1] [i_3] [i_3] [i_3])))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_19 = ((!((((arr_9 [i_4] [0] [i_4] [i_4] [i_1] [i_0]) ? (!var_6) : var_11)))));
                        var_20 = ((var_9 & ((min((6 & 38261), ((1721417979 ? 65535 : 0)))))));
                    }
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_5 - 1] = ((((max(var_13, (arr_17 [i_1] [i_5 - 2] [i_5 + 1] [i_5 - 1] [i_5])))) ? (((var_12 ? var_4 : var_8))) : ((var_11 ? 4521 : var_13))));
                        var_21 = (((-7766873722359098713 ? 4398046511103 : 4398046511103)) == ((max((arr_5 [i_1] [i_2] [i_5]), 1511026008))));
                    }
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_22 -= max((min((arr_21 [1] [i_6]), 1)), (!-4912));
        var_23 = (~var_8);
        var_24 = (max((min(27, (var_0 - 523776))), var_3));
    }
    for (int i_7 = 1; i_7 < 15;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            {
                                arr_36 [7] [i_7] [12] [i_9] [14] [i_9] = (((((var_4 ? var_14 : (arr_34 [i_7] [i_7] [i_7 + 1] [i_10 + 2] [i_11])))) ? -4496 : ((((1 ? var_10 : var_16))))));
                                var_25 = (~((((max(-59, 69))) ? 65522 : ((min((arr_20 [i_7] [i_7]), -69))))));
                            }
                        }
                    }
                    var_26 = (((((((-1511026009 / var_8) || (((var_11 ? var_1 : var_8))))))) == ((((max(var_8, 9))) ? (arr_35 [i_7 + 1] [i_8] [i_8] [i_9]) : (var_10 - var_6)))));
                }
            }
        }
        var_27 = ((var_8 || ((((!35797) | -3529)))));
        arr_37 [1] |= ((15774600899131634246 ? (((~((16474 ? 1 : var_3))))) : ((13415329236324856999 ^ ((var_12 ? var_6 : (arr_14 [i_7] [1])))))));

        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            var_28 -= (min(var_6, (!var_15)));
            arr_40 [i_7] [i_12] [i_7] = ((((((var_11 ? 65508 : 9970363174767553663)))) << (((((max(1, 43434))) != ((max(var_0, -1))))))));
            var_29 = ((((0 ? 65507 : 1)) ^ ((var_6 ? (arr_29 [i_7 + 2] [i_7 + 1] [i_7 + 1]) : var_3))));
            /* LoopNest 2 */
            for (int i_13 = 3; i_13 < 16;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    {
                        var_30 = -38261;
                        var_31 = var_10;
                        var_32 = (min((!-1265671126), var_11));
                        arr_46 [i_7] [i_12] [i_13] [i_7] [i_13] [i_7] = (max((arr_42 [i_7] [i_7] [i_7]), var_12));
                    }
                }
            }
            var_33 = ((~(min(-24, 7424752513653517671))));
        }
    }
    for (int i_15 = 1; i_15 < 15;i_15 += 1) /* same iter space */
    {
        arr_49 [i_15] = ((!(((2064478900 ? 27263 : 4294967295)))));
        arr_50 [i_15] = ((((min(38265, -201))) ? (((var_10 ? 255 : var_7))) : (~var_11)));
    }
    for (int i_16 = 0; i_16 < 20;i_16 += 1)
    {
        arr_53 [i_16] = (~1);
        var_34 = (min((arr_22 [i_16] [i_16]), ((var_12 ? var_10 : var_7))));
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 12;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 12;i_18 += 1)
        {
            {
                var_35 = (!var_0);
                var_36 = (min((~33554431), (~-77)));
            }
        }
    }
    #pragma endscop
}
