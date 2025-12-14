/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = ((((((arr_14 [i_0] [i_2 + 1] [i_4] [i_0 - 2] [i_0 - 2] [i_1] [i_4]) ? (arr_14 [i_3] [i_2 + 2] [i_2 + 2] [i_0 - 2] [i_4] [i_2] [i_0]) : 13613375502102191730))) ? ((3658696618 ? 4833368571607359878 : 13613375502102191730)) : var_0));
                                var_21 = ((((max(var_13, (arr_0 [i_2 + 3] [i_0 - 1])))) * (((arr_0 [i_2 + 3] [i_0 - 1]) ? (arr_0 [i_2 + 3] [i_0 - 1]) : (arr_0 [i_2 + 3] [i_0 - 1])))));
                            }
                        }
                    }
                    var_22 = (max((((var_7 >> (((arr_5 [i_0 + 1] [i_0 - 2]) - 160))))), (min(4833368571607359869, (arr_5 [i_0 - 2] [i_0 - 1])))));
                    var_23 = (--53808);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_24 = ((((112 & ((min((arr_3 [i_0] [i_0]), 0))))) >> (((max(-2515909003586904446, (arr_3 [i_0 - 2] [i_5 + 1]))) - 14249))));
                                var_25 *= (((arr_20 [i_6] [i_0] [i_2] [i_0] [i_0]) == (arr_5 [i_1] [i_6])));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 12;i_7 += 1)
                    {
                        var_26 = (max(var_26, ((((((var_16 ? 1 : (arr_1 [i_2])))) ? (arr_22 [i_0] [i_1] [i_2] [i_0]) : var_15)))));
                        arr_26 [i_0] [i_1] [i_0] [i_7] = ((((-(arr_8 [i_1] [i_2] [i_1] [i_0]))) | (!var_0)));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
                    {
                        arr_29 [i_0] [i_0] = 46343;
                        var_27 = (~8254209900374401670);
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 0;i_9 += 1) /* same iter space */
                    {
                        var_28 ^= 141;
                        var_29 = (max(var_29, (arr_1 [i_0 - 1])));
                        arr_33 [i_9] [i_0] [i_0] [i_0] [i_0] [i_9] = -51;
                    }
                }
            }
        }
        arr_34 [i_0] = var_7;
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 1;i_12 += 1)
                {
                    {
                        var_30 = 1098930839;
                        var_31 *= (~var_15);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        var_32 = ((-(arr_10 [i_13] [10] [i_13] [i_13])));
        var_33 &= (4833368571607359883 ? 2504 : 0);
        var_34 = ((20881 ? (arr_4 [i_13]) : 15603689011023267864));
        var_35 = -var_10;
    }
    var_36 = (min((((((11700 << (var_16 - 24775))) / ((var_2 << (var_14 - 29253)))))), 13613375502102191747));
    var_37 &= ((var_2 - (max((max(-5, var_3)), (((1 ? 0 : var_4)))))));
    /* LoopNest 2 */
    for (int i_14 = 4; i_14 < 9;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            {
                var_38 *= ((max(31401, 1856366974)) | -1);
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 11;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 11;i_17 += 1)
                    {
                        {
                            var_39 = (min(var_39, ((min(var_5, (max((arr_53 [i_14 - 2] [i_14 - 2] [i_17] [i_17] [2]), 1)))))));
                            arr_55 [i_16] = (34702 / 9223372036854775807);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
