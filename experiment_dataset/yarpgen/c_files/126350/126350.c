/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_1] [i_2] = (max((((!((min(var_3, (arr_2 [i_0]))))))), ((-(arr_5 [i_3])))));
                            arr_12 [i_1] [i_2] = (arr_5 [i_2]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_11 = ((!0) && (((arr_15 [i_0 - 1] [i_0 + 2] [i_0 + 2]) && 65526)));
                            var_12 = (max(var_12, ((max((arr_5 [i_0 - 1]), var_9)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_13 = (min((((((arr_24 [i_0] [19] [i_0] [i_1] [i_0 + 2] [i_0]) || (arr_17 [9] [18] [i_6] [15]))) ? (var_10 % var_7) : (arr_20 [11]))), 536870911));
                            arr_25 [18] [i_6] [i_6] [i_0] = ((!(+-1)));
                            var_14 = 0;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 21;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            var_15 = (((arr_30 [i_9]) ? 65535 : (((var_7 >= ((12 ? (-32767 - 1) : var_8)))))));
                            var_16 ^= -0;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        {
                            var_17 = (min(((max((arr_28 [i_8] [12]), (arr_40 [i_9 - 1] [i_9] [i_9] [i_9])))), (max(4611686018427387903, (arr_27 [i_9 + 1] [11])))));
                            var_18 = (arr_30 [i_9 + 1]);
                            var_19 *= max(((-(arr_43 [i_9 - 2] [i_9] [i_9 + 2] [i_9 - 2]))), var_5);
                            arr_44 [i_8] [i_9] [10] [i_9] = (arr_33 [6] [i_9 - 1] [i_9 - 2]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 3; i_14 < 8;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 10;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 10;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 10;i_18 += 1)
                        {
                            {
                                var_20 = (max((arr_19 [i_15] [i_17] [i_18]), (((max(2147483647, 32767)) >> (var_10 - 17452)))));
                                var_21 = 1;
                                var_22 = (max(var_22, 4064));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_19 = 1; i_19 < 9;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 10;i_20 += 1)
                        {
                            {
                                var_23 = (i_14 % 2 == 0) ? ((((max((arr_38 [i_19 - 1] [5] [i_19] [i_14] [i_20] [i_19]), (((arr_42 [i_14] [i_14] [i_14] [i_14]) ^ 127)))) * (arr_37 [i_14] [16] [i_16] [i_19])))) : ((((max((arr_38 [i_19 - 1] [5] [i_19] [i_14] [i_20] [i_19]), (((arr_42 [i_14] [i_14] [i_14] [i_14]) ^ 127)))) / (arr_37 [i_14] [16] [i_16] [i_19]))));
                                arr_64 [6] [2] [i_14] [i_16] [i_14] [i_15] [5] = (!var_8);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_21 = 2; i_21 < 9;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 10;i_22 += 1)
                        {
                            {
                                var_24 = (((((-(arr_55 [i_21] [i_21 + 1] [i_21 - 2] [8])))) ? ((-(arr_55 [i_21] [i_21 - 1] [i_21 - 2] [i_21]))) : (12 != 31)));
                                var_25 = (arr_15 [8] [i_16] [i_22]);
                                var_26 |= (max(((((max(var_5, -536870893)) / (2047 || -1)))), (max(2147483642, (min(18446744073709551615, (arr_51 [2] [7] [i_16])))))));
                                var_27 = (max(var_27, (arr_46 [i_21])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_23 = 2; i_23 < 9;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 10;i_24 += 1)
                        {
                            {
                                var_28 = 1;
                                arr_77 [i_15] [6] [0] [0] [i_24] &= 65527;
                                var_29 = 32767;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
