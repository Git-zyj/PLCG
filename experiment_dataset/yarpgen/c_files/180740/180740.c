/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] [i_2] = (var_9 ^ var_1);

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_13 [i_3] [1] [1] [i_3] = (max(var_2, -253));
                        arr_14 [i_0] [i_3] [1] |= (((((max(0, var_1)) ? var_9 : var_4)) <= ((-((max(var_1, var_9)))))));
                        arr_15 [i_0] [8] [i_2] [i_3] = -var_0;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_20 [i_0] = 3584;
                        arr_21 [i_0] [i_2] [i_0] = 1;

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_24 [i_0] [i_0] [i_2] [i_4] [i_2] = ((var_4 ? var_4 : var_4));
                            arr_25 [i_0] [i_2] [1] [i_5] = var_1;
                            arr_26 [i_0] = (max(-5218896217667804903, var_1));
                        }
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_31 [i_0] [i_0] = (4836 << 1);
                            arr_32 [i_7] [i_6] [i_1] [i_1] [i_0] [i_0] = (max((((((1766606146 ? 121732626 : 0))) ? 1 : 27219983)), (((-(var_7 != var_5))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                        {
                            arr_35 [i_0] [i_1] [i_1] [i_1] [i_2] [24] [i_8] = (-121732627 % 12536412657458968187);
                            arr_36 [i_8] [i_0] [i_6] [2] [i_8] = ((var_9 >> (((var_5 + 1) - 2185459116))));
                            arr_37 [i_0] = ((-121732654 + 2147483647) >> (-121732629 + 121732631));
                        }
                        for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                        {
                            arr_40 [i_0] [i_1] [i_2] [i_2] [i_6] [i_9] |= ((var_4 + 1) - (max(var_0, var_5)));
                            arr_41 [i_9] [i_9] = ((((var_1 && (1 < 1))) ? 1 : (var_7 | var_7)));
                            arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] = (max((((((max(var_6, var_9))) ? 37205 : (~var_9)))), (max(var_0, var_5))));
                            arr_43 [i_0] [i_1] [20] [i_6] [23] = (((max(1, 14523))) >> (((var_5 || (var_1 != 0)))));
                        }
                        arr_44 [i_2] [7] = (((234 / 3233808191558182307) ? (-18 / 1) : var_4));
                    }
                }
            }
        }
        arr_45 [12] = var_3;
        arr_46 [i_0] = (((max(2147483647, var_0))) || (var_0 >= var_7));
        arr_47 [i_0] = var_0;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        arr_50 [i_10] = 1;
        arr_51 [i_10] [i_10] = (~var_2);
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 17;i_15 += 1)
                        {
                            {
                                arr_68 [i_11] [i_12] [i_13] [i_12] [8] = 0;
                                arr_69 [i_11] [i_12] [i_13] [i_11] [i_15] [i_14] [1] = (max((~var_1), -var_0));
                                arr_70 [i_11] [3] [i_15] [3] [i_15] [i_12] = var_2;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 17;i_17 += 1)
                        {
                            {
                                arr_75 [i_11] [i_17] [i_17] [i_16] [i_17] [i_16] [i_12] = (max(0, 1));
                                arr_76 [i_11] [i_12] [i_11] [i_16] [i_17] = var_3;
                            }
                        }
                    }
                    arr_77 [8] = (~((121732638 ? 14 : 1133167807)));
                }
            }
        }
    }
    var_10 = ((var_4 ? var_6 : (max((((var_0 ? var_4 : var_2))), (max((-9223372036854775807 - 1), 121732626))))));
    #pragma endscop
}
