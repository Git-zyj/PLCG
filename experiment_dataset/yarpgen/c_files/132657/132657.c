/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((13423 % 120) == (min(var_11, var_15)))) ? (min(29470, 10158283449427786550)) : (!-122));
    var_20 = ((((var_16 + -4) <= (var_7 == var_13))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_21 = 117;
                                arr_14 [i_2] [i_2] [i_2] [i_1] [i_2] = 29477;
                                var_22 ^= (1519421254 / 121);
                                var_23 = ((-(arr_1 [i_0])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_20 [i_1] [i_2] = (((arr_9 [i_0] [i_1]) && ((((arr_3 [i_0] [i_0]) ? var_2 : var_3)))));
                                var_24 = 122;
                                var_25 = ((((122 ? -13069 : 8)) != (arr_17 [2] [i_1] [i_2] [i_2] [i_5] [2])));
                                arr_21 [i_2] [i_5] [i_2] [3] [i_2] [i_2] = (((arr_13 [i_0] [i_5] [i_2] [i_2] [i_5]) & (arr_7 [i_6] [i_2] [i_1] [i_0])));
                            }
                        }
                    }
                    var_26 |= var_6;
                    arr_22 [i_2] [i_2] [i_2] = (((arr_5 [i_0]) - ((((arr_19 [i_2] [i_1] [i_2]) ? var_0 : var_13)))));
                    var_27 *= (arr_6 [16] [16]);
                }
                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    arr_26 [i_0] = ((((((arr_6 [i_0] [8]) ? ((~(arr_23 [i_0] [i_7]))) : (((881305020 ? var_6 : (arr_10 [i_7 - 1] [i_7] [i_7 - 1] [i_1] [i_1] [i_0] [i_0]))))))) ? (arr_0 [i_7]) : ((((-(arr_17 [i_0] [i_0] [i_7] [i_1] [i_0] [i_7]))) ^ (((121 == (arr_17 [i_0] [i_1] [i_0] [i_1] [i_1] [i_0]))))))));
                    var_28 = (max(120, (arr_9 [i_0] [i_1])));
                    arr_27 [i_0] [i_0] [i_0] = 8589672448;
                }
                arr_28 [i_0] [i_0] [i_1] = ((!(((-(arr_15 [i_1]))))));
                var_29 = (-3413662275 ? ((max((min(var_4, (arr_9 [i_0] [i_1]))), var_13))) : (max((arr_8 [i_0] [i_0] [i_0] [i_0]), (max(3332, (arr_18 [i_0] [i_1] [i_1] [i_1] [19] [i_1]))))));
                var_30 += (((arr_15 [3]) << ((((arr_10 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0] [i_0]) != (((arr_12 [6] [i_1]) ? (arr_16 [2] [2] [i_0] [2]) : (arr_25 [i_1] [i_0] [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
