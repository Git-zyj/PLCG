/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (((-((var_10 ? var_10 : var_1)))) >> (((((var_11 ^ var_1) ? (var_3 & 35030) : var_3)) - 34836)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_13 &= ((var_0 ? (((arr_2 [i_3 - 1]) | (var_10 ^ var_1))) : (((arr_9 [i_3 - 1] [i_3 - 1] [6] [i_3] [i_3]) << (((max((arr_4 [i_0] [i_0] [i_2] [17]), (arr_4 [i_2] [i_2] [i_1] [i_0]))) - 926246509))))));
                            var_14 ^= ((-802453148 ? (((arr_8 [i_0 - 2] [i_3] [i_3] [i_3 - 1]) ^ (arr_8 [i_0 - 1] [i_2] [i_2] [i_3 + 1]))) : ((-802453148 / (12 ^ -802453148)))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_15 += ((((((var_6 ? 1 : var_10)))) ^ (arr_14 [4])));
                                var_16 = (((((arr_3 [i_0 - 1] [i_0 - 1]) == 12226679568130723688)) ? (max((35029 ^ 18446744073709551615), (arr_9 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1]))) : (((min(18446744073709551615, (arr_9 [i_0] [i_0] [i_4] [i_5] [i_6]))) & (((var_11 ? 55416 : 57)))))));
                                arr_16 [11] = 65519;
                            }
                        }
                    }
                    var_17 &= var_2;
                    var_18 = (-(var_4 ^ 802453147));
                    var_19 = ((!((min(((7680 >> (var_2 - 194))), ((((arr_7 [i_0]) < (arr_13 [i_0] [i_1] [0] [i_1])))))))));
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                {
                    arr_19 [i_7] = (min((((arr_1 [6] [i_1]) - var_2)), ((var_11 & (0 >> 1)))));
                    arr_20 [i_7] [5] [i_7] = ((((((max(7680, var_0)) < ((7680 ? 59418 : 12285))))) >= (max(var_6, -var_4))));
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 19;i_10 += 1)
                        {
                            {
                                var_20 = ((var_3 - (((((((arr_13 [i_10] [i_10 + 1] [i_10] [i_10]) == (arr_24 [i_0 + 1] [i_9] [i_8] [i_1] [i_8])))) < var_7)))));
                                arr_29 [1] |= (((arr_1 [i_0] [11]) == (((29882 >= (arr_23 [i_0] [i_0 - 2] [i_0] [1]))))));
                                var_21 |= ((-((((((arr_15 [i_8] [i_1] [i_8] [i_9] [i_10]) ? var_5 : 29254)) == var_3)))));
                                var_22 = (min(var_10, (((((16516 ? 1 : 4794))) ^ var_11))));
                            }
                        }
                    }
                    arr_30 [i_8] [i_1] [i_8] = ((-(max((((var_2 ? var_5 : (arr_15 [i_0] [i_0] [i_1] [i_1] [i_8])))), (max((arr_10 [i_8] [i_8] [i_1] [i_0]), (arr_0 [i_1])))))));
                    var_23 = var_2;
                }
            }
        }
    }
    var_24 = ((((min(var_10, var_1))) ? (((((var_1 ? var_2 : 11213229603929130131))) ? var_10 : 127)) : (((max(var_10, 57855)) / -var_5))));
    #pragma endscop
}
