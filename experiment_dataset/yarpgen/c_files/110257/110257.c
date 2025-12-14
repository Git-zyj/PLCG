/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 = var_3;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = ((+(((arr_0 [i_0] [i_0]) ? 10 : ((var_0 ? 1 : var_6))))));
                                arr_11 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] = var_3;
                            }
                        }
                    }
                    arr_12 [i_0] [i_0 + 1] [i_1 + 2] [i_2 - 4] = ((-75 ? var_7 : var_7));
                    arr_13 [i_2 - 4] = -52;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    var_14 &= (((((arr_4 [i_6]) ? (min(54236, -9197977569349853676)) : var_10)) >= 0));
                    arr_21 [i_0 + 1] [i_5] [i_6] &= var_6;

                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        var_15 = 10392;
                        var_16 = 4611123068473966592;
                        var_17 = 4;
                    }
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        var_18 ^= (max(var_6, (min(var_4, -var_3))));
                        arr_26 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] = var_8;
                        arr_27 [i_8] [i_8] [i_6] [i_8] [i_8] [i_6] &= ((((!(((2855163382 >> (1491617404 - 1491617389)))))) ? (max(-1, ((var_6 ? (arr_25 [i_0] [i_0] [i_6] [i_8]) : var_1)))) : var_7));
                    }
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_19 &= 380792145;
                        arr_30 [i_0] [i_5] [i_6] [i_9] = (~136902082560);
                    }
                    for (int i_10 = 2; i_10 < 19;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            var_20 = var_2;
                            var_21 ^= (arr_7 [i_11]);
                            arr_35 [i_0] [i_0] [i_5] [i_10] [i_0] [i_10] [i_11] = (arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                        }
                        arr_36 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_6] [i_6] [i_10] = (arr_29 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0]);

                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            var_22 ^= ((((max(1, var_2))) ? var_4 : ((((arr_8 [i_10 + 2] [i_10 - 2] [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (arr_2 [i_0 + 1] [i_0 + 1]) : var_8)))));
                            var_23 = (max(var_23, (arr_18 [i_10 + 1])));
                        }
                        var_24 = (max(-var_9, -5845262088417062304));
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 21;i_14 += 1)
                        {
                            {
                                arr_46 [i_14] [i_13] [i_0] [i_0] [i_14] = (((arr_1 [i_0 + 1]) ? (((var_6 - (arr_1 [i_0 + 1])))) : (((arr_1 [i_0 + 1]) ? var_4 : 2855163387))));
                                arr_47 [i_0 + 1] [i_0 + 1] [i_14] [i_0 + 1] [i_0] [i_0] = 2048;
                                var_25 ^= 0;
                                var_26 = (min(((var_4 ? var_9 : (arr_9 [i_0 + 1] [i_0 + 1] [i_0] [i_0]))), (-var_0 || 2)));
                                var_27 = (max(var_27, (((max((arr_41 [i_0] [i_5] [i_5] [i_13] [i_14]), -1))))));
                            }
                        }
                    }
                }
            }
        }
        var_28 = (max(var_1, 15316));
    }
    for (int i_15 = 2; i_15 < 22;i_15 += 1)
    {
        arr_51 [i_15] = (((var_5 | (-7469667787264036591 - 74))));
        var_29 = -1491617386;
        var_30 = (arr_48 [i_15 + 1]);
        arr_52 [i_15 - 2] = ((var_7 / (arr_48 [i_15 - 1])));
    }
    var_31 = -255;
    #pragma endscop
}
