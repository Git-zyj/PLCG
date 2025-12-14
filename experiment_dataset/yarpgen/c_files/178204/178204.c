/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = ((var_5 ? (max((arr_5 [i_0] [i_0]), (var_5 + var_14))) : ((max(((var_11 ? 224 : -1825933388)), (max(var_18, var_6)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_20 = ((((-(max((arr_5 [i_3] [i_1]), (arr_11 [3]))))) > ((min(((4294967289 ? -12 : 2561180108)), var_15)))));
                            var_21 = (min((max(var_8, (((!(arr_8 [i_0] [i_2] [i_2])))))), (((1 > (max(-5, 137551976)))))));
                            var_22 = (max(13153, (((((arr_0 [i_0]) + 1014295603)) + (((arr_8 [i_1] [i_2] [i_1]) + var_0))))));
                        }
                    }
                }
                arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((((max((((arr_2 [15]) ^ (arr_7 [i_0] [i_1] [i_0]))), ((max((arr_1 [i_1]), 56714)))))) || (((((((arr_3 [i_0] [i_0]) && (arr_8 [i_1] [i_1] [7])))) | -5953676218606123037)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_23 = var_4;
                            arr_24 [i_6] = ((1014295603 ? (((((1 ? 8 : 135))) ? 16823270332794579932 : (-2147483647 - 1))) : -99));
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_24 = (max((arr_15 [i_4 - 1] [i_4 - 1] [i_4]), (arr_23 [i_4 - 1] [i_4])));
                                var_25 *= ((!(arr_25 [i_4] [0] [0])));
                                var_26 -= 24176;
                                var_27 -= ((((var_18 ? var_15 : (arr_19 [i_4])))));
                            }
                        }
                    }

                    for (int i_11 = 1; i_11 < 21;i_11 += 1)
                    {

                        for (int i_12 = 1; i_12 < 21;i_12 += 1)
                        {
                            arr_38 [i_11] [10] [1] [18] [i_11] = (min(224, 44));
                            arr_39 [i_4] [i_4] [i_11] [i_11] [i_4] = (max((((!(arr_29 [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11 - 1] [i_11 - 1])))), (((arr_31 [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11 - 1]) | (arr_36 [i_11 - 1] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_11 + 1])))));
                        }

                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            var_28 = (max(var_28, ((((min(84, 16823270332794579932)) > (arr_16 [i_4] [i_4] [i_4]))))));
                            var_29 = ((((max((max(var_12, var_17)), 1))) ? (24175 == 8329632067977561452) : ((var_18 % (arr_41 [i_11] [i_4 - 1] [i_11] [i_4 - 1])))));
                        }
                    }
                    /* vectorizable */
                    for (int i_14 = 2; i_14 < 19;i_14 += 1) /* same iter space */
                    {
                        arr_44 [i_4] [i_4] [i_4 - 1] [i_4] [i_4] [i_4 - 1] = ((var_0 ? var_18 : ((var_5 / (arr_41 [i_14] [i_5] [i_8] [i_14])))));
                        arr_45 [i_4] [20] = (((arr_27 [i_14 - 2] [i_5 + 1]) && var_10));
                    }
                    for (int i_15 = 2; i_15 < 19;i_15 += 1) /* same iter space */
                    {
                        arr_49 [i_4] [i_4 - 1] [i_4] [i_4] = 226;
                        var_30 = 8329632067977561479;
                    }
                    for (int i_16 = 2; i_16 < 19;i_16 += 1) /* same iter space */
                    {
                        var_31 = ((!(max((arr_20 [i_16] [i_16]), (arr_20 [i_16] [i_16])))));
                        arr_52 [i_4] [7] [i_4 - 1] [17] [i_4 - 1] = ((((((1 && var_3) % 2835009648))) ? (((var_15 > (!39944238)))) : (((((max((arr_30 [2] [i_5] [i_5] [i_16] [i_5]), (arr_20 [i_16] [i_5 + 1])))) != (!var_11))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
