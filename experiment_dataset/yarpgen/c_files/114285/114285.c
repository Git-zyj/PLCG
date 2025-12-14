/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_11 = ((var_6 != ((min(255, 170)))));
                            var_12 = (max((((var_4 == var_2) & ((var_8 ? var_6 : var_2)))), ((~((var_1 ? var_2 : var_0))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_13 |= ((((max((var_5 | 43), var_4))) ? ((((max(20, 1))))) : ((((min(1, var_8))) + 4398046248960))));
                            var_14 ^= (((((((var_5 ? var_2 : var_3))) ? (var_0 | 1) : (1 & var_7)))) >= -948490214);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 18;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        {
                            arr_24 [i_7] [i_7] = (max((((var_5 | var_0) + ((var_4 ? var_10 : var_9)))), ((((((var_9 ? var_6 : var_6))) ? var_9 : ((1 << (var_6 - 104))))))));
                            var_15 = (max(var_15, (((1 ? 63866 : 13)))));
                            var_16 ^= var_1;
                            var_17 = ((var_10 ? ((-(max(var_2, var_7)))) : (((((1 && -841717149) && var_6))))));
                            var_18 = ((((~((var_9 ? var_4 : var_4)))) == (-28679 >= 8)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        {
                            arr_31 [i_11] [i_7] [1] [i_7] [i_7] [1] = var_6;
                            var_19 = (max(var_19, ((((1 & 562400197607424) ? var_8 : (((!22783994177586977) ? ((var_5 ? var_7 : var_2)) : -28680)))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 13;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_14 = 2; i_14 < 12;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        for (int i_16 = 4; i_16 < 11;i_16 += 1)
                        {
                            {
                                var_20 = (((var_3 ? var_5 : var_9)));
                                var_21 = (max(((var_9 ? ((var_9 << (var_10 - 355205416))) : (min(var_4, 948490214)))), ((((var_0 ? var_9 : var_10)) | var_5))));
                                var_22 ^= (min((((var_1 >= ((var_6 ? var_4 : var_6))))), (((var_10 < 28679) ? (((58 ? 50 : -113))) : (max(8955386195722971913, 255))))));
                                var_23 = ((((max(((var_0 >> (8191 - 8190))), (!var_1)))) || var_3));
                                arr_45 [i_12] [i_12] [i_12] [i_15] [5] [i_15] [i_16] = (18446744073709551600 / 180);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 13;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 12;i_18 += 1)
                    {
                        {
                            arr_53 [i_12] [i_12] = min((max(65154, 203)), (!18450));
                            var_24 = (max(var_24, (((var_1 > (((var_4 && var_4) >> (var_6 - 119))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_19 = 2; i_19 < 11;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 13;i_20 += 1)
                    {
                        {
                            var_25 = (min(var_25, var_8));
                            arr_61 [i_20] [i_13] [i_19] [9] [i_20] [i_12] = ((((((((min(var_7, var_0)))) != ((var_0 ? var_7 : var_8))))) >> (164 - 160)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 13;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 13;i_22 += 1)
                    {
                        {
                            var_26 = var_1;
                            arr_68 [i_22] [i_22] [10] [5] = ((var_8 / (max((max(var_6, var_9)), (!-28680)))));
                            var_27 = ((-92 > (max(var_9, var_10))));
                            arr_69 [i_12] [i_12] [i_12] [i_12] = (max(var_9, var_0));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
