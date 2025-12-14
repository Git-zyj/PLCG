/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((((((((-30244 ? var_6 : -30244))) != 18446744073709551615)) ? var_5 : -3715090984218652744)))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_13 [i_0] = (~var_4);
                        var_11 -= ((-30235 ? 188 : 1));
                    }
                }
            }
            var_12 = var_3;
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_17 [i_0] = (((((59 ? var_3 : 47757))) ? (arr_2 [i_0]) : ((var_7 ? 2458493815 : var_1))));
            var_13 -= -30244;
            arr_18 [i_0] [i_0] = 77;
        }
        var_14 = ((((max(65535, var_6))) ? (((1 ? 12 : var_7))) : (max(1962548972, -1))));
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
    {
        arr_21 [i_5 - 1] = ((min(var_4, 1)));
        var_15 = (((max(var_2, (arr_19 [i_5 - 1] [i_5 - 1]))) && var_0));
        var_16 = 1;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    var_17 -= ((-1 ? ((((min(var_2, 188))) ? -3812312996617520778 : (!var_2))) : var_6));
                    arr_26 [i_5] [i_5] [i_6] = (max((max(-1, 2332418324)), (((((min(var_9, (arr_20 [i_5] [i_5])))) ? (var_3 && 30269) : (~var_4))))));
                }
            }
        }

        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                arr_32 [i_8] = 1;
                arr_33 [i_5] [i_8] [i_8] = ((((((((var_0 ? 762286531408409006 : var_0))) || var_2))) << ((((((arr_25 [8] [8]) ? var_5 : var_6))) ? ((((arr_19 [i_8] [i_8]) >> (var_0 + 14772)))) : ((1962548976 ? 3961428140 : 2332418324))))));
                var_18 -= ((1 ? ((-((18064197466550332324 ? 27 : var_1)))) : -var_7));
            }
            for (int i_10 = 1; i_10 < 17;i_10 += 1)
            {
                var_19 += 4235407381;
                var_20 = var_9;
            }
            var_21 -= (min((((arr_25 [i_5 - 1] [i_5 - 1]) + 1)), (((var_0 ? var_4 : var_3)))));

            /* vectorizable */
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        {
                            var_22 = 1962548972;
                            var_23 = (99 > var_4);
                            arr_44 [i_5] [i_8] [i_5] [i_8] [i_5] = (((arr_36 [i_5] [i_5] [i_5] [i_5 - 1]) >= (!4294967286)));
                            var_24 = ((1 ? 2332418323 : (arr_34 [i_8])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        {
                            var_25 -= (arr_24 [i_11] [i_11] [i_15]);
                            var_26 = 6081842860413834879;
                            var_27 -= ((255 ? var_5 : var_5));
                            arr_49 [i_8] [i_8] [i_11] [i_14] [14] [i_8] = ((4294967285 ? var_5 : 4235407408));
                        }
                    }
                }
                var_28 = ((0 >> (-11 - 4294967261)));
                var_29 = 4294967295;
            }
        }
    }
    for (int i_16 = 1; i_16 < 1;i_16 += 1) /* same iter space */
    {
        arr_52 [i_16] = (min(((38461 ? var_6 : (max(var_1, (arr_43 [i_16 - 1] [i_16] [i_16] [3] [i_16]))))), 1));
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 19;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 19;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 19;i_19 += 1)
                {
                    {
                        var_30 = (min(var_30, (((((((arr_54 [i_16] [i_16]) ? (((var_8 != (arr_34 [8])))) : (~38461)))) > -var_3)))));
                        var_31 = (255 ? 587697461 : 3490500540);
                    }
                }
            }
        }
        arr_60 [i_16] [11] = (((((1 ? 252 : 1))) ? ((var_5 ? 4 : var_5)) : ((0 ? 83 : 1))));
    }
    var_32 = ((-(!var_0)));
    var_33 = (((~var_3) ? var_1 : (max(var_5, var_8))));
    #pragma endscop
}
