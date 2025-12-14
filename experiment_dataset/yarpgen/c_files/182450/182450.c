/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((-(!var_8)))), (max(1489562252, 2431767333526781657))));
    var_16 = 4095;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_17 = (min((arr_6 [i_2] [i_2]), (((((min(var_10, (arr_2 [i_0] [i_0])))) / var_6)))));

                            for (int i_4 = 3; i_4 < 19;i_4 += 1)
                            {
                                var_18 = ((((min(((((arr_2 [i_0] [i_2]) != 15844982807986099953))), (max((arr_5 [i_0] [0] [i_0]), (arr_1 [i_0])))))) ? (((arr_12 [i_4 - 3] [i_0] [i_2] [i_0 + 2] [i_4]) << (var_12 != var_6))) : (((~(arr_2 [i_0 + 1] [17]))))));
                                var_19 -= var_6;
                            }
                            /* vectorizable */
                            for (int i_5 = 3; i_5 < 18;i_5 += 1)
                            {
                                arr_15 [i_5] [i_0] [i_0] [i_1] = (((arr_10 [i_0 + 1] [i_0 + 1] [i_3] [i_0] [i_3]) ? 205 : (arr_10 [i_1] [i_3] [i_3] [i_0] [i_5])));
                                arr_16 [i_0 + 1] [i_1] [i_2] [i_0] [4] = var_8;
                                arr_17 [i_0] [0] [0] [i_5] |= (((arr_6 [i_0 - 1] [i_0 - 1]) ? (arr_6 [i_0 - 1] [i_0 - 1]) : var_4));
                                var_20 = ((~(arr_8 [i_0] [i_0 + 2] [i_0 + 2])));
                                arr_18 [i_0] [12] [16] [i_0] [9] = ((~(arr_6 [i_0 + 2] [i_5 + 3])));
                            }

                            for (int i_6 = 0; i_6 < 21;i_6 += 1)
                            {
                                var_21 = (max(var_21, ((max(var_4, ((((var_4 ? 9104783733062480713 : 255)) + ((((arr_11 [i_0] [10] [10] [i_1] [16] [i_2] [i_0]) ? var_9 : var_14))))))))));
                                var_22 = (((16014976740182769959 < (((~(arr_21 [i_2] [8] [i_2] [i_2] [i_0])))))));
                                var_23 |= (~(max(var_6, var_12)));
                            }
                            var_24 = ((((arr_14 [i_0 - 1] [i_0] [i_0] [i_2] [i_3]) ? (arr_4 [i_0 + 2] [i_0]) : (arr_4 [i_1] [i_0]))));
                        }
                    }
                }
                var_25 = (min((((!199) ? 677832829 : (arr_22 [i_0 - 1] [4] [19] [i_0] [18]))), ((max(((((arr_5 [i_0] [i_0] [i_1]) < (arr_19 [i_0] [i_0 + 1] [1] [18] [i_1] [i_1])))), ((var_10 / (arr_8 [9] [16] [i_0]))))))));
                arr_23 [14] [14] [14] |= (((((255 ? 37 : var_6))) ? 49 : var_1));

                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    var_26 = (min(var_26, (((+((var_2 ? (arr_24 [18] [18] [i_0 - 1]) : (arr_8 [i_7] [i_7] [i_0 - 1]))))))));
                    arr_27 [i_0] [i_0] = (-2409169240972138107 - -97271814);
                    arr_28 [i_0] [i_1] [i_0] [i_0] = ((!((((arr_0 [i_0] [i_1]) ? 2147483647 : (arr_7 [i_0] [i_0]))))));
                }
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    var_27 = var_2;
                    var_28 = (arr_21 [i_0] [i_1] [i_1] [i_0] [i_0]);
                    var_29 *= (min(((var_6 ? var_9 : (max(13029651, var_2)))), (arr_2 [i_0] [i_1])));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    var_30 = ((((var_12 ? var_2 : var_9))) & (((arr_0 [i_0] [i_1]) ? (arr_12 [i_0] [i_0] [i_1] [i_9] [i_9]) : (arr_6 [i_1] [16]))));
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_31 = -97271825;
                                var_32 = ((((-2147483647 ^ (arr_9 [i_0] [i_1] [i_0] [i_0] [i_11]))) & (arr_21 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_10 - 2] [i_0])));
                            }
                        }
                    }
                }
                var_33 = (max((max((arr_19 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 2] [i_1]), (arr_19 [20] [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0]))), (206 && 73)));
            }
        }
    }
    #pragma endscop
}
