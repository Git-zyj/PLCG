/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 47657;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [1] [i_2] [i_3] [i_3 + 1] [i_3 - 1] [i_2] &= (var_14 ? (min(((min((arr_0 [i_1] [i_1]), (arr_0 [i_0] [i_1])))), ((47651 ? (arr_6 [i_0] [1] [i_0] [1]) : var_16)))) : ((max(((var_14 ? (arr_7 [i_1] [i_4]) : 0)), 47685))));
                                var_18 = ((~((min((arr_5 [i_0]), 17860)))));
                                var_19 -= var_10;
                                var_20 = ((((arr_8 [3] [i_3 - 1] [i_3 + 2] [i_3 + 2]) ? 17906 : 127)));
                                var_21 &= ((17885 ? ((1 ? var_10 : (min(var_9, (arr_3 [i_1]))))) : 6285519427898313058));
                            }
                        }
                    }
                    var_22 = (min(var_22, 17888230096274838075));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_23 = ((17885 ? (max((arr_17 [i_0] [i_1] [i_2] [i_5] [i_6]), 33)) : 171));
                                arr_18 [i_0] [i_1] [i_1] [i_2] [14] [17] [i_0] = (((((1 | 17879) ? (arr_9 [i_0] [i_6]) : 1))) ? ((((var_7 >= (~0))))) : ((var_13 ? (9041787530399498993 && var_10) : (min(var_9, (arr_2 [i_0] [5] [i_0]))))));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_24 *= 17860;
                        var_25 *= (((min((((34 ? var_5 : (arr_5 [i_0])))), ((16936 ? var_4 : 13740776128553458533))))) ? (min(var_1, 142288452381307742)) : (arr_11 [i_2] [i_0] [i_2] [14] [i_7]));
                    }
                }
            }
        }
        var_26 = (min(var_26, var_12));
    }
    for (int i_8 = 1; i_8 < 22;i_8 += 1)
    {
        var_27 *= ((!(arr_23 [i_8])));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 20;i_11 += 1)
                {
                    {
                        var_28 = (max(var_28, (((-((((32768 ? 17900 : var_3)))))))));
                        arr_32 [i_8] [1] [i_8] [2] = 12222289348182016300;
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        arr_37 [i_12] [i_12] = 65521;
        var_29 = (max(var_29, (arr_16 [i_12] [16] [i_12] [i_12] [i_12] [14] [16])));
        var_30 = (max(var_30, (min(65507, (arr_0 [i_12] [i_12])))));
        var_31 = (min((((!(arr_27 [i_12])))), 9390871986769730454));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 25;i_13 += 1)
    {
        var_32 -= (var_6 ? (((arr_39 [i_13]) ? 8869364444358835649 : (arr_39 [4]))) : -1274693285);
        var_33 &= (var_16 ? (arr_41 [i_13]) : (((!(arr_39 [i_13])))));
    }

    for (int i_14 = 0; i_14 < 12;i_14 += 1)
    {
        arr_45 [i_14] [i_14] = 33550;
        var_34 *= min(13576813573348545161, 17878);
    }

    for (int i_15 = 0; i_15 < 18;i_15 += 1)
    {
        arr_50 [i_15] = ((var_10 ? 16939 : (arr_1 [i_15])));
        arr_51 [i_15] = 0;
    }
    for (int i_16 = 0; i_16 < 24;i_16 += 1)
    {
        arr_56 [i_16] = ((~((max((min((arr_38 [1]), 224)), var_8)))));
        arr_57 [i_16] [i_16] = ((~((var_6 ? (arr_39 [i_16]) : (arr_38 [i_16])))));
    }
    var_35 = (!242);
    #pragma endscop
}
