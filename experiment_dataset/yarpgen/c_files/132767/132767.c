/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (!1)));
                var_12 -= (max((((1 + 1827983819) ? (arr_2 [10] [10]) : (arr_4 [i_0] [1] [22]))), 240));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_13 -= (arr_8 [0] [i_1] [5] [i_1] [15]);
                            var_14 = (arr_3 [22] [4] [21]);
                            var_15 = (((arr_2 [i_0] [4]) ? ((((arr_6 [6] [6] [1]) <= (arr_7 [7] [18] [14] [1] [3] [i_2])))) : (~16)));

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                var_16 = var_3;
                                var_17 *= (arr_2 [i_0] [0]);
                                var_18 = (arr_11 [8] [i_3] [i_2] [8]);
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 25;i_5 += 1)
                            {
                                var_19 = (max(var_19, ((((arr_10 [i_2] [i_0 - 1] [i_1] [i_3 + 1]) && var_3)))));
                                var_20 = var_1;
                                var_21 = (arr_3 [i_5] [16] [12]);
                                var_22 = 30833;
                            }
                            for (int i_6 = 0; i_6 < 25;i_6 += 1)
                            {
                                var_23 = 30833;
                                var_24 = var_0;
                                var_25 = -1827983820;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_26 = (0 != var_0);
                                var_27 = (max(var_27, (arr_7 [21] [21] [13] [9] [3] [2])));
                            }
                        }
                    }
                }
                var_28 = 30833;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 17;i_11 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        {
                            var_29 += (((arr_9 [i_12] [3]) * ((-((((arr_9 [i_11] [i_11]) > (arr_33 [i_11] [i_12] [8]))))))));
                            var_30 = ((((min(((((-9223372036854775807 - 1) > 34726))), (min(1827983820, 4253488398639236977))))) ? ((max((arr_15 [i_10] [i_10] [1] [i_11 + 2] [9]), (((arr_15 [i_10] [14] [4] [1] [i_13]) ? -1827983832 : -2833))))) : (((((arr_22 [9] [9] [9] [6]) ? (arr_16 [i_10] [15] [15] [13] [18]) : (arr_22 [i_10] [10] [0] [i_10]))) << (var_6 <= 240)))));
                        }
                    }
                }
                var_31 = ((!(arr_2 [15] [i_11])));
                var_32 = (min(((var_1 ? (arr_34 [i_10] [7]) : (arr_6 [22] [5] [5]))), ((((arr_17 [16] [16] [19] [i_10] [16] [1] [i_10]) && (-67 & -1827983838))))));
            }
        }
    }
    #pragma endscop
}
