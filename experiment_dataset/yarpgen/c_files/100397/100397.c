/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_19 &= (((((((9223372036854775807 ? 9223372036854775807 : var_3))) ? (max(var_6, (arr_5 [i_1] [i_1]))) : (-9223372036854775807 - 1))) % 9223372036854775798));
                var_20 = -9223372036854775795;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_21 = (min(var_21, (((((((arr_3 [i_0] [i_1 - 1]) ? (arr_3 [i_1 + 1] [i_2]) : var_0))) ? (max((min(9223372036854775798, var_6)), (arr_11 [i_0] [i_1] [i_2] [i_3 + 1]))) : ((((arr_4 [i_0 + 1]) ? (arr_4 [i_0 - 3]) : (arr_4 [i_1 + 1])))))))));
                            arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] &= var_14;
                            var_22 ^= (-9223372036854775807 - 1);
                            var_23 = (min(-2837332105943044188, (((var_7 & (arr_10 [i_3] [i_3] [i_3] [i_3 + 1] [i_3] [i_3]))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 20;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_24 = var_8;
                                var_25 = (min((arr_17 [i_4 - 1]), (min((arr_17 [i_4 + 2]), var_3))));
                                var_26 = (((((arr_20 [i_4 - 1] [i_4] [i_6] [i_6 + 1]) <= var_11)) && (max(var_7, (((arr_17 [i_4]) != var_2))))));
                                arr_23 [i_8] [i_7] [i_6] [i_5] [i_5] [i_4] = (((!var_0) ? (((max((arr_19 [i_8] [i_7] [i_6] [i_5] [i_4]), 43)))) : (max((arr_18 [i_6 - 2] [i_4 + 1] [i_6]), -9223372036854775799))));
                            }
                        }
                    }
                    var_27 = (min(var_27, (((~((-843037105 / (arr_19 [i_6] [i_6 - 2] [i_6] [i_6 + 2] [i_6]))))))));
                }
            }
        }
    }
    var_28 = (min(var_28, var_3));
    #pragma endscop
}
