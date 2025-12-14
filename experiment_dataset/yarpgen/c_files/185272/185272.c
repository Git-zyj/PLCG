/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_3] [i_1] [1] [i_3] = (~1012746500);
                            var_19 &= (max(((184903872 >> (((arr_7 [i_1 + 1] [i_2 + 1] [i_2 + 1] [i_2]) - 3163262655)))), (max((((arr_4 [i_2] [i_2]) ? (arr_8 [i_0] [i_1 + 1] [i_1] [i_2] [4] [i_3]) : 184903848)), ((max(var_3, 185228571)))))));
                            arr_10 [i_3] = (~1496703575);
                            arr_11 [i_3] = (min((min(-184903873, (arr_7 [i_0] [i_2 + 1] [i_1 - 1] [i_0]))), (!var_4)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_1 - 1] [i_0] [i_5] [i_0] [i_5] = (max(0, ((((~0) ? ((var_12 ? 18024 : 18040)) : (((arr_14 [i_0] [i_4 + 2] [i_5]) + var_2)))))));
                            var_20 = (max((((arr_0 [i_4 + 2] [i_4 + 1]) * var_1)), (((((4611963704830907673 ? 193 : 47507))) ? (arr_15 [i_1 - 1] [i_1 + 1] [i_4 - 1] [i_4 + 1]) : ((min(25, 230)))))));
                        }
                    }
                }
                var_21 = ((+(max((var_15 * 21963), (((arr_3 [i_0]) / var_16))))));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                arr_29 [i_0] [i_0] [i_6] [i_6] [i_8] = (((~(((arr_5 [i_0] [i_1] [i_6]) ? (arr_19 [i_8] [i_1] [i_0]) : 4294967295)))) <= -16462);
                                var_22 = (((arr_13 [i_1 - 2] [i_1 - 1] [i_7 + 1] [i_7 + 1]) != (min(var_6, (~var_11)))));
                            }
                        }
                    }
                }
                var_23 = ((~((~(min((arr_24 [10] [i_0] [i_0] [8]), var_16))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            {
                arr_36 [i_9] = ((~(((var_15 == (arr_30 [i_9]))))));
                var_24 *= (max((((((((arr_31 [i_9]) / (arr_30 [2])))) ? 12242 : (max((arr_32 [i_10]), 1012746500))))), (((max((arr_34 [i_9]), var_14)) + (var_3 + 127)))));
            }
        }
    }
    #pragma endscop
}
