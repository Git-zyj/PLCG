/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((~(min(64512, var_11)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_11 [12] [19] [i_1 + 3] [i_0] [i_2] = ((((~var_6) & (var_3 | var_3))));
                            var_16 = (arr_3 [i_2]);
                        }
                    }
                }
                var_17 = (min((min(var_9, var_15)), var_8));
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_18 = var_13;
                                var_19 = (max(var_19, (var_6 % -64513)));
                                var_20 = ((~(((((var_7 ^ (arr_9 [i_5] [i_5])))) ? (((-64536 || (arr_0 [i_0] [i_0])))) : var_7))));
                                var_21 = (max(((~((var_8 << (((arr_17 [1]) - 182)))))), ((-32758 ? var_4 : ((var_5 - (arr_13 [i_4] [i_4] [i_4] [9])))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 21;i_8 += 1)
                    {
                        {
                            arr_24 [i_7] [i_7] = ((((arr_22 [i_8 - 2]) ? var_2 : (arr_17 [i_1 + 1]))));
                            var_22 = var_4;
                            var_23 = (((((((max(var_4, (arr_20 [i_7] [i_7])))) ? var_14 : (arr_1 [0])))) ? -64509 : ((max(12405, 3107829437)))));
                        }
                    }
                }
            }
        }
    }
    var_24 = (-64499 && 197527850);
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 11;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 10;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 2; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 8;i_13 += 1)
                        {
                            {
                                var_25 = arr_36 [i_9] [i_11] [i_9] [i_10];
                                var_26 -= var_11;
                                var_27 = min(16777215, 64519);
                                arr_38 [i_10] = 28793;
                            }
                        }
                    }
                }
                var_28 = (max(var_28, (((((((arr_12 [i_9 + 1]) / var_6))) * var_14)))));
                arr_39 [i_9 - 1] [i_10] = (min((arr_3 [i_10 + 2]), (max(var_6, 64503))));
                arr_40 [i_10] [6] [4] = var_8;
                var_29 ^= ((~(((1 ? (arr_21 [i_10] [9] [i_9 - 1] [i_9 - 1]) : (arr_18 [i_10 + 1]))))));
            }
        }
    }
    var_30 = (max((min((var_11 - -1707817991), (min(var_14, var_13)))), ((((min(var_11, var_9))) ? (((min(23, var_9)))) : var_10))));
    #pragma endscop
}
