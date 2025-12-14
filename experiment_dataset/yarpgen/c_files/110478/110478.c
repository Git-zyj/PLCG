/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 |= (1879048192 % 6673788602056973954);
        var_14 = 6673788602056973964;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_15 = (min(var_15, (((-var_1 ? (max(1836162680, -6673788602056973942)) : ((6673788602056973955 ? -9143348660423684680 : 6673788602056973942)))))));
        var_16 = (((((var_0 ? 126 : var_3))) ? (min((arr_0 [10]), (arr_0 [12]))) : (arr_0 [22])));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_17 ^= ((min((arr_7 [i_2 - 1] [i_2 - 1]), (arr_7 [i_2 - 1] [i_2 - 1]))));
        var_18 = (((((144 ? (arr_1 [i_2]) : ((var_4 ? 131071 : 235895392))))) ? 117 : var_5));
        var_19 = (((max(var_3, -4982830532474282338)) + ((min(var_8, 150445868)))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_20 = (~9218868437227405312);
                        var_21 &= (((4144521441 ? ((min(var_0, 38)) : 1852386172))));
                    }
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_22 *= ((-(((((var_3 ? 208 : var_12))) ? (max(4144521397, (arr_6 [i_6] [i_6]))) : 8))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                {

                    for (int i_9 = 3; i_9 < 13;i_9 += 1)
                    {
                        var_23 &= var_11;
                        var_24 += var_8;

                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_25 ^= (min(15534259562521060555, ((((18446744073709551612 ? 1505834189 : var_8))))));
                            var_26 = (max(var_26, ((((-6673788602056973954 ? (!18446744073709551612) : var_11))))));
                            var_27 = (arr_13 [i_9 + 1]);
                        }
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        var_28 = (2789133100 ? (((1852386172 ? ((var_2 ? var_12 : 150445903)) : ((0 ? var_12 : var_0))))) : ((((min(var_5, 6673788602056973954))) ? (min((arr_18 [i_6]), var_3)) : ((1 ? 17 : 18388991818854763564)))));
                        var_29 = (min(var_29, ((((arr_8 [i_8]) ? (((((var_1 ? var_10 : (arr_10 [i_11])))) ? ((1 ? 255 : (arr_30 [i_6] [i_6 - 1] [i_7] [i_8 + 1] [i_7] [i_7]))) : var_5)) : (((arr_14 [i_6 - 1] [i_6 - 1] [i_7] [i_7] [i_8] [i_8]) / (((-1 ? (arr_29 [i_6] [i_6] [i_6] [i_6] [i_6]) : 19873))))))))));
                    }
                    var_30 = ((max((min((-2147483647 - 1), var_7)), 2147483647)));
                }
            }
        }
        var_31 = ((((min(((1401932350 ? var_1 : 1)), (((var_3 ? 1 : 0)))))) ? (((arr_24 [i_6 - 1]) ? var_1 : (arr_13 [i_6 - 1]))) : (arr_29 [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1])));
    }
    var_32 = 16129882332823252556;
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 12;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 12;i_13 += 1)
        {
            {

                /* vectorizable */
                for (int i_14 = 2; i_14 < 13;i_14 += 1)
                {
                    var_33 = (arr_40 [i_12] [i_12 + 1] [i_13 - 1]);
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 14;i_16 += 1)
                        {
                            {
                                var_34 = var_6;
                                var_35 = var_9;
                                var_36 = ((((var_5 ? 140737488355327 : var_4)) << (((arr_45 [i_13 - 1] [i_14 + 2] [i_14] [i_14 + 2] [i_16 + 1]) - 3268568477))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 0;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            {
                                var_37 = ((!(arr_52 [i_14 - 1])));
                                var_38 = 1852386172;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 15;i_19 += 1)
                    {
                        for (int i_20 = 3; i_20 < 14;i_20 += 1)
                        {
                            {
                                var_39 = (arr_2 [i_12 + 1] [i_12]);
                                var_40 = 1;
                                var_41 = (((arr_44 [i_14 + 1] [i_13 + 3] [i_12 + 1]) ? -var_1 : 7453109685490285026));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 15;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 15;i_22 += 1)
                    {
                        {
                            var_42 = 2442581123;
                            var_43 *= (max(-var_12, (((((!(arr_35 [i_21]))) || 10)))));
                        }
                    }
                }
                var_44 = (max(1, ((((min(16320, var_11))) ? ((var_11 ? var_3 : var_8)) : (max(-1583278247, var_1))))));
            }
        }
    }
    var_45 = (-(((((var_0 ? var_2 : var_7))) ? ((min(1, 131))) : var_8)));
    #pragma endscop
}
