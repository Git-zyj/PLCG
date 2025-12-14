/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_11 = (max((((((max(var_8, (arr_5 [i_1] [i_2] [i_3] [i_4])))) && 63141))), -1));
                                var_12 -= (((max(var_6, (arr_7 [i_3] [i_4 + 1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 7;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_13 = ((~((((max(var_7, (arr_8 [i_0] [i_1] [i_5] [i_6])))) ? 0 : ((var_6 ? 3515222129 : var_8))))));
                                var_14 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_15 = var_3;
                            var_16 = (min(var_16, (((((~(arr_20 [19]))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        {
                            arr_34 [i_7] [i_8] [i_7] [i_12] = var_4;
                            arr_35 [i_11] [i_11] [i_11] [i_12] [i_7] = var_5;
                            var_17 = (min(var_17, (arr_33 [i_11] [i_11] [i_11 + 1] [i_11 + 1] [i_11])));
                            var_18 = (min(var_18, ((((173 != 4294967295) ? 855250039 : (((-(~0)))))))));
                            var_19 = ((max((arr_23 [i_11 + 1] [i_11] [i_7]), (arr_23 [i_11 + 1] [i_11 + 1] [i_7]))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 19;i_15 += 1)
                        {
                            {
                                var_20 = -var_4;
                                var_21 = -2652323032761025293;
                                var_22 = (min(((var_7 - (min(var_9, 32767)))), ((max(61076, 0)))));
                                arr_45 [i_13] [1] [i_13] [1] [1] [i_7] [i_13] = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 21;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 21;i_17 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 21;i_19 += 1)
                    {
                        {
                            var_23 = ((((((arr_47 [i_16]) + (arr_47 [i_16])))) ? ((max((max(768, -22852)), 56))) : ((100 >> (106335606 != var_8)))));
                            var_24 = (min(var_24, ((-(((arr_49 [i_17] [i_18] [i_19]) ? -1383610661 : var_7))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 21;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 21;i_21 += 1)
                    {
                        {
                            arr_60 [i_16] = ((var_10 ? (((4 != (arr_51 [i_16] [16] [i_16] [i_16])))) : -28));
                            var_25 = (((arr_58 [i_16] [i_17] [i_20] [i_20] [i_16]) << (((((-1667885254 ? 152 : 2147483623))) - 152))));
                            var_26 = ((((((!(arr_59 [i_21]))))) >= (min((arr_53 [i_20]), (max(var_8, var_0))))));
                            var_27 = 738553919;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
