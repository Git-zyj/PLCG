/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_11 [24] [24] [i_1] [i_1] [i_1] [i_1] = ((63430 ? 2722187322 : -89));
                                arr_12 [i_0] [i_0] [i_1] [i_0] [10] [10] [i_0] = ((((((!0) > ((var_4 ? 1572779979 : var_5))))) & ((((((arr_10 [i_0] [23] [23] [i_2] [5] [5]) + var_4))) ? (-2132829973 & 70) : (arr_10 [i_0] [i_0] [i_1] [21] [9] [i_4])))));
                            }
                        }
                    }
                    var_15 = (((max(4562433861582548137, ((min(2722187322, 4096))))) + (((((arr_7 [i_0] [i_0] [i_0] [i_1]) > 2145386496))))));
                    var_16 = ((!((var_9 && (arr_2 [i_2 - 1] [i_1] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((min((arr_13 [i_2 - 1]), (min((arr_16 [i_2 + 1] [12] [i_2 + 1] [i_2 - 2] [8] [i_2] [i_2 + 1]), 1572779973)))))));
                                arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] = 188;
                                var_18 = (min(var_18, (((~var_3) ? ((((arr_13 [i_0]) ? (arr_0 [i_0]) : 65529))) : (max(var_14, (arr_13 [i_0])))))));
                            }
                        }
                    }
                    var_19 = (min(var_19, (((var_1 < ((16171301372785355317 ? (65529 - 70) : (arr_16 [i_2] [16] [10] [i_0] [2] [16] [i_0]))))))));
                }
            }
        }
    }
    var_20 = (40 & 65518);
    var_21 = var_11;
    #pragma endscop
}
