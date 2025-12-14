/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((((var_6 >= var_7) ? 3139223910 : ((((var_3 >= var_14) << (((max(2400770693, var_2)) - 1541624186217234517))))))))));
    var_21 = (((((var_4 ? var_11 : var_18))) ? var_4 : var_19));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 14;i_4 += 1)
                            {
                                var_22 = ((((max(1, (1 / var_1)))) ? ((max((arr_11 [i_0] [i_1] [i_0] [i_3] [i_4 - 1] [i_1 + 2] [i_0]), (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4 + 3] [i_3] [i_4])))) : (max(-28, -131308580))));
                                arr_14 [i_0] [i_1] [i_4] = 2147483647;
                                var_23 = var_4;
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                arr_18 [i_0] [i_0] [i_3] [i_1] = (~-83);
                                var_24 = (min(var_24, ((((48753 / var_4) / var_18)))));
                                var_25 = ((((((arr_8 [i_0] [i_1]) ? var_0 : 1))) / (((arr_1 [i_0]) ? 4294967276 : 7752943668471310008))));
                            }
                            arr_19 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] = (((((((max(var_4, 4294967295))) | ((7752943668471310008 ? 117 : 7752943668471310023))))) < (max((max((arr_15 [0] [i_1] [i_2] [i_1] [i_0]), 65513)), (((var_14 ? (arr_8 [i_1] [i_3]) : var_17)))))));

                            for (int i_6 = 1; i_6 < 1;i_6 += 1)
                            {
                                var_26 += (max((max(((-1451871519 ? 14 : 20)), (!142))), ((max(var_13, var_5)))));
                                arr_23 [i_0] [i_6] [1] [i_6] [i_1] = (((((-(!9357881088827083071)))) ? var_19 : 217));
                                var_27 = (min(var_27, (max((max((((arr_7 [i_3] [i_1] [i_6]) % var_5)), var_4)), (max((arr_9 [i_1 - 2] [i_6] [i_6] [i_6]), (arr_13 [i_1 - 1] [i_6] [i_6] [i_6] [3] [i_6 - 1])))))));
                                arr_24 [i_0] [6] [i_0] [i_1] = (((((+(max((arr_3 [i_0] [i_1]), 127))))) ? (max(138, 7382990909801943135)) : (((((max(var_14, var_16))) ? ((~(arr_21 [i_0] [5] [i_0] [i_2] [i_2] [i_3] [i_6 - 1]))) : (max(var_5, var_15)))))));
                            }
                        }
                    }
                }
                arr_25 [i_1] [i_1] [i_1] = (((((arr_17 [i_0] [i_0] [i_0] [i_1] [i_1]) ? (max(var_9, (arr_12 [i_0] [i_0] [i_0] [2] [i_0]))) : (!7382990909801943115)))) ? ((max((arr_17 [i_0] [i_1 + 3] [i_0] [i_1] [i_0]), (arr_11 [i_1 - 1] [i_1] [i_1 - 1] [11] [i_1 - 1] [i_1 + 2] [i_1 - 1])))) : (((arr_9 [9] [i_1 + 3] [i_1 - 4] [i_1 - 2]) ? 0 : (arr_16 [i_1] [i_1 + 2] [i_1] [i_1 + 3] [i_1 + 2] [i_1 - 3]))));
                var_28 = (max((((arr_20 [i_0] [1] [i_1] [0] [i_1 + 3]) ? ((var_18 ? 11747 : (arr_20 [1] [i_0] [i_0] [i_1 - 1] [i_1 - 1]))) : var_4)), ((((~2249019790) ^ -1)))));
            }
        }
    }
    #pragma endscop
}
