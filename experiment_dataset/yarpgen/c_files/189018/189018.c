/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_2] = var_15;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_4] [i_2] [i_3] [i_4] = ((-((-(arr_9 [i_0] [i_1] [5] [i_2] [i_4])))));
                                arr_16 [i_4] [i_3] [i_3] [i_2] [i_4] [i_4] = (((((1048575 ? -25192 : -25206))) ? ((389451057 ? (~1) : ((var_3 ? 25207 : (arr_13 [0] [i_1] [i_2] [i_3] [i_4]))))) : (((~(262140 == -3152099589472725257))))));
                            }
                        }
                    }
                    arr_17 [0] [i_0] [i_2] [i_2] = (((((arr_13 [i_2] [i_1] [i_2] [6] [i_1]) ? (arr_13 [i_0] [i_0] [i_0] [7] [9]) : (~var_10))) < (((-275523152 ? 812670746312742471 : 1)))));
                }
            }
        }
    }
    var_16 = (((((var_13 ^ ((2115519520 ? var_0 : var_9))))) ? var_14 : ((~((var_6 ? -1775279400 : var_12))))));
    var_17 = (max(var_17, (((-var_11 ? (((((var_4 ? var_0 : var_3))) ? ((var_1 ? 2770 : var_4)) : var_5)) : var_0)))));
    var_18 = (min(var_18, (((((((827575935 != var_1) ? ((389451053 ? 827575951 : -85895803)) : -var_2))) ? var_3 : ((((max(-1387903358, 43797676))) ? var_11 : var_4)))))));
    var_19 = (((((var_1 ^ (!var_15)))) ? -87 : ((((~1680751462) <= (598387974 <= var_15))))));
    #pragma endscop
}
