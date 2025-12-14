/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (((((var_11 << (((var_8 + 2202) - 60))))) ? var_10 : var_0));
    var_15 += (max((max(var_12, (!var_6))), (!var_2)));
    var_16 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 += (((((~(min(var_4, 99))))) | ((~((2584962473 ? (arr_4 [i_1] [i_0]) : 2584962473))))));
                var_18 = 2584962473;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_2] [1] [i_1] [i_2] &= 0;
                                var_19 = (arr_1 [i_0] [i_0]);
                                arr_15 [i_2] = ((-var_1 ? (((var_6 << (32767 - 32747)))) : (arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0])));
                                var_20 = (min(var_20, ((((max((arr_12 [i_0 - 1] [i_3] [i_3] [i_3] [i_4 + 1] [i_4]), ((min((arr_13 [i_4] [i_3] [i_2] [i_1] [i_0]), -3210634631190848966))))) % ((((arr_5 [i_0 - 1]) ? (arr_5 [i_0 - 1]) : 3210634631190848969))))))));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    arr_18 [i_0] [i_0] [i_0] = 167;
                    var_21 |= ((-((((arr_3 [i_0 + 1] [i_1] [i_0 + 1]) >= ((239 ? 1 : var_7)))))));
                    arr_19 [i_0] [i_5] [i_0] = (max(((max(var_1, (arr_17 [i_0 + 1])))), ((var_7 ? var_7 : (arr_17 [i_0 - 1])))));
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_22 = (max(var_22, ((((((4322 ? (((arr_13 [i_0] [i_0] [i_0] [i_0 - 1] [i_0]) ^ 5420)) : var_6))) + ((~(max((arr_20 [i_0 + 1] [i_0] [i_0 + 1]), 1710004823)))))))));
                            arr_26 [i_0] [i_0] [i_1] [i_6] [i_6] [i_7 + 3] = 2046;

                            /* vectorizable */
                            for (int i_8 = 4; i_8 < 23;i_8 += 1)
                            {
                                var_23 = (max(var_23, (arr_27 [i_7] [i_1])));
                                arr_29 [i_1] [i_6] [i_7] = ((74 ? (65535 + var_10) : ((var_1 ? 1141950926 : var_3))));
                                var_24 = (((((arr_13 [i_0] [i_1] [i_6] [i_6] [i_8]) ? var_4 : (arr_13 [i_0] [i_1] [i_6] [i_7] [i_8]))) - (1141950918 + -1141950926)));
                                arr_30 [i_0] [i_6] [i_6] [i_7 + 3] [i_8] = ((var_11 >= (((var_9 ? 182 : (arr_28 [i_0] [i_0 + 1] [i_0]))))));
                            }
                            arr_31 [1] [i_1] [i_6] [i_6] &= (min((arr_8 [i_0] [i_1] [i_6] [i_7]), (arr_10 [i_7] [i_7 + 2] [i_0] [i_0 + 1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
