/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                var_11 = var_1;
                                arr_16 [i_1] [i_2] [i_2] [4] [15] = ((max((arr_11 [i_2 - 2] [i_3] [i_4]), (arr_11 [i_0] [10] [i_0]))));
                                arr_17 [i_2] = (((arr_9 [i_2]) == (min(-1316993266, (arr_15 [i_2 - 1])))));
                            }
                            for (int i_5 = 0; i_5 < 21;i_5 += 1)
                            {
                                var_12 *= ((2284701787 ? 2517865815 : 1));
                                var_13 &= ((((((1777101505 ^ (arr_9 [i_0])))) ? ((1777101514 ? 255 : 2517865781)) : (((2010265512 ? -627017598 : (arr_14 [10] [i_1] [i_1] [i_3] [i_5])))))));
                                arr_20 [i_2] [19] [i_0] [19] [i_2] = ((((max(((((arr_6 [i_1] [i_2] [i_5]) ? var_7 : (arr_10 [i_0] [i_1] [i_2] [i_3] [i_5])))), -var_6))) ? var_1 : (((var_10 / (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_2]))))));
                            }
                            for (int i_6 = 1; i_6 < 19;i_6 += 1)
                            {
                                arr_23 [i_0] [i_2] [9] [i_3] [14] = (max(((max((arr_10 [i_2] [1] [i_2] [i_3 + 2] [i_6]), 103))), (arr_19 [5] [i_1] [i_2 - 1] [i_3 + 2] [i_3] [i_6 - 1] [i_6 - 1])));
                                var_14 -= ((((((arr_13 [i_0] [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_3 + 1] [i_0]) ^ (arr_13 [i_0] [i_6 + 2] [i_6] [16] [i_6 + 1] [i_3 + 2] [i_0])))) ? (~2284701767) : ((((max(2517865805, (arr_11 [i_1] [i_2] [i_1])))) ? (255 / var_3) : (arr_9 [i_0])))));
                                var_15 = 7;
                            }

                            for (int i_7 = 2; i_7 < 18;i_7 += 1)
                            {
                                var_16 = ((~(max(2010265508, (min((arr_24 [i_7] [i_3 + 2] [4] [4] [4]), 2284701767))))));
                                var_17 = 2517865807;
                                var_18 = (min(-1145312018, 0));
                                arr_28 [i_0] [i_1] [i_2] [0] [i_7] [20] &= var_4;
                            }
                            for (int i_8 = 3; i_8 < 18;i_8 += 1)
                            {
                                arr_32 [i_2] = min((((max(var_4, var_9)))), ((((~(arr_22 [i_1] [18] [i_2 - 2] [i_2] [i_2]))) & (arr_5 [4] [i_1] [i_1]))));
                                arr_33 [9] [i_2] = (((-1 && 0) || (((var_0 ? ((6633853078675677095 ? (arr_27 [i_8] [i_8] [i_8] [i_8] [i_8 + 3]) : var_7)) : (((min(var_8, (arr_0 [i_1] [i_8]))))))))));
                            }
                        }
                    }
                }
                var_19 *= (-((((arr_26 [10] [8] [i_0] [0] [i_1] [i_1] [8]) || (((var_10 ? var_0 : (arr_0 [i_0] [i_1]))))))));
            }
        }
    }
    var_20 |= ((((min(-13, 219545390))) && ((min(2517865815, 100)))));
    #pragma endscop
}
