/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_12 -= (((var_0 ? (arr_8 [i_1] [i_1] [13] [13]) : ((((!(arr_3 [i_0] [i_0]))))))) << var_3);
                                arr_13 [i_4] [i_1] [i_2] [i_1] [i_2] [19] [0] = (arr_9 [i_2] [i_3] [i_3 + 1] [i_3] [i_3]);
                                arr_14 [i_0] [i_2] [i_4] = ((-((var_8 % (min(24, 3135942065))))));
                            }
                        }
                    }
                }
                var_13 = (arr_8 [i_0] [i_0] [i_1] [i_1]);
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_23 [i_1] [i_1] [i_1] [i_1] [16] [11] [i_5] = (min(3135942065, (max(1159025231, ((min(-1, (arr_16 [i_1] [9]))))))));
                                var_14 = var_4;
                                var_15 = (~65535);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        {
                            var_16 = var_4;
                            var_17 = ((((min(-var_10, ((max((arr_22 [12] [i_1] [i_1] [6] [i_1]), 42451)))))) + 1159025249));
                            var_18 ^= (((((-(arr_2 [i_0] [i_0] [i_8])))) ? var_5 : (((arr_6 [i_9]) - (((arr_9 [i_0] [12] [i_1] [i_1] [i_1]) ? (arr_12 [i_0] [i_0]) : var_2))))));
                            arr_28 [i_9 + 3] [i_8] [i_8] [i_0] = (((arr_15 [i_8]) ? (max(var_0, (arr_22 [i_9 + 1] [i_9 + 2] [11] [i_9 + 2] [i_9 - 1]))) : ((-(arr_22 [i_9 - 1] [i_9] [i_9] [i_9 - 1] [i_9 + 3])))));
                            var_19 = (~var_3);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        {
                            arr_36 [i_10] [i_1] [i_1] [i_10] = (max(((max(-6324561275485943777, 192666936))), (arr_31 [i_0] [i_0] [i_0])));
                            var_20 = (max(var_20, (arr_16 [i_11] [i_0])));
                            arr_37 [i_10] [i_0] [i_0] [i_10] = (arr_27 [i_0] [i_0] [i_10] [i_0] [i_0] [i_10]);
                        }
                    }
                }
            }
        }
    }
    var_21 = ((var_7 ? var_2 : var_6));
    var_22 = (var_4 != var_10);
    #pragma endscop
}
