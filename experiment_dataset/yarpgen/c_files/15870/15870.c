/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [6] = (arr_3 [i_1]);
                arr_8 [i_0] [i_0] [i_1] = (!var_10);
                var_17 = (min(var_17, (~-601864565)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_19 [i_2] [i_3] [i_4 + 4] [11] = (((((-(arr_18 [i_2] [i_3] [i_4] [i_2] [i_5])))) ? var_3 : (min(((min(25306, (arr_11 [16] [16])))), (arr_17 [i_2] [i_3] [i_4] [i_4] [i_5])))));
                            var_18 = max((!var_2), (arr_9 [i_5]));
                            arr_20 [i_2] [i_2] = (max(((min(601864569, (arr_12 [i_3] [i_2])))), ((((min(0, (arr_15 [4] [i_3] [4]))) > (arr_9 [i_3]))))));
                            arr_21 [5] [5] [10] [i_4 + 1] [i_4 + 1] = (min(((((((arr_15 [i_4 + 4] [i_4 + 3] [i_4 + 1]) + 2147483647)) << (((((arr_17 [16] [i_4] [i_4 + 4] [i_4 + 3] [i_4 - 1]) + 205310523264027512)) - 1))))), (((arr_17 [10] [i_4] [i_4 + 2] [i_4 + 4] [i_4 + 4]) ^ (arr_17 [5] [i_4] [i_4 + 1] [i_4 + 2] [i_4 + 1])))));
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    arr_24 [i_2] [i_2] = (-(max((arr_14 [i_2] [i_6]), (arr_22 [i_2] [i_3] [i_6]))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_19 = (arr_11 [i_6] [4]);
                                var_20 = ((~((((arr_25 [8] [i_3] [7]) <= var_1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (~((~((1 ? -601864575 : var_12)))));
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_22 = (min(var_22, (((((((!((!(arr_37 [i_9]))))))) < ((-(~var_2))))))));

                            /* vectorizable */
                            for (int i_13 = 0; i_13 < 20;i_13 += 1)
                            {
                                var_23 = -var_16;
                                var_24 += -237;
                            }
                            for (int i_14 = 3; i_14 < 18;i_14 += 1)
                            {
                                arr_48 [i_9] [i_10] [i_11] [9] [i_10] = var_14;
                                var_25 ^= (max(((min((arr_38 [i_14 - 1] [i_9] [i_14 + 1] [0]), (arr_38 [i_14 - 3] [i_11] [i_14 + 2] [18])))), (min(8311621851728281963, (((arr_37 [i_11]) / (arr_46 [i_14] [i_12] [i_9] [i_10] [6])))))));
                            }
                        }
                    }
                }
                arr_49 [i_9] [i_10] [i_10] = 3584;
                arr_50 [i_10] [i_10] = (max((~var_13), ((var_2 ? (arr_35 [15] [4] [19]) : (arr_40 [i_9] [i_10])))));
                arr_51 [i_9] [i_10] = (~((~(arr_35 [4] [i_10] [11]))));
                /* LoopNest 3 */
                for (int i_15 = 0; i_15 < 0;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 18;i_17 += 1)
                        {
                            {
                                arr_59 [i_9] [i_9] [i_15] [i_16] [i_10] = var_16;
                                arr_60 [7] [i_10] [i_15] [i_10] [2] = (((((~((((arr_58 [i_9] [i_9] [i_9] [i_9]) < var_6)))))) ? ((((((arr_34 [i_17 - 1]) >> (var_5 - 760256922))) >= ((var_9 >> (5642483427634380236 - 5642483427634380223)))))) : (((((((arr_52 [i_10] [i_10] [i_10] [i_17]) ? var_14 : (arr_57 [i_9] [i_10] [i_9] [i_16] [i_17 + 1])))) || ((min((arr_53 [19] [i_15 + 1]), var_13))))))));
                                arr_61 [i_10] [i_10] = ((max(((var_14 ? (arr_41 [i_9] [i_10] [i_16] [i_17]) : (arr_56 [i_9] [i_10] [i_10] [i_15]))), var_5)) * (((((min(165210434, 5597116879637697319))) ? (arr_57 [i_15 + 1] [i_15 + 1] [i_17 + 1] [i_17 + 1] [15]) : (arr_47 [9] [i_16] [i_15] [i_16] [i_15])))));
                                arr_62 [i_16] [i_16] [i_16] [i_10] [16] [i_16] [i_16] = (((arr_40 [i_15 + 1] [i_17 - 1]) <= ((~(arr_40 [i_15 + 1] [i_17 + 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
