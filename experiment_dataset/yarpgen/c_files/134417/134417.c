/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_15 = ((+(((min((arr_5 [i_3] [i_2] [i_1] [i_0]), (arr_6 [i_3] [i_2 + 1] [i_1])))))));
                            var_16 = (max(-8439, 55822));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_17 = ((max((arr_13 [i_5] [i_4] [i_1] [i_5]), var_7)));
                            arr_15 [i_0] [i_0] [i_5] [i_0] = (((arr_3 [i_5]) % (((~46724) ? (arr_7 [i_0 - 1] [i_1] [i_4 + 1] [i_5 + 2] [i_4]) : (arr_1 [i_4] [i_0])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 4; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_18 *= (arr_16 [i_0 + 1] [i_1] [i_6] [i_6]);
                            var_19 = (((((arr_19 [i_0] [i_0] [i_0 - 1] [i_1] [i_6 - 1] [i_0 - 1]) ? (((arr_14 [i_0] [i_0 + 1] [i_7] [4]) ? (arr_13 [i_6] [i_1] [i_6] [i_1]) : var_8)) : (arr_18 [i_0] [i_0 - 1] [i_1] [i_6] [i_0 - 1] [i_0 - 1]))) | 375889007));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 3; i_8 < 21;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 4; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 20;i_11 += 1)
                    {
                        {
                            arr_29 [i_8] [i_8] [2] [i_11] = (!var_0);
                            var_20 = 67108862;
                            var_21 = (min(var_21, ((min((arr_14 [i_8] [i_9] [i_9] [i_8 + 1]), (arr_14 [i_9] [i_9] [i_9] [i_8 - 1]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 4; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 0;i_13 += 1)
                    {
                        {
                            var_22 = (max(var_22, (arr_9 [i_8 - 1] [i_9] [i_12 + 2])));
                            var_23 = var_7;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        {
                            arr_43 [i_8] [i_8 - 3] [17] [i_8] = 8438;
                            var_24 = (min(var_24, ((((((arr_30 [i_8] [1] [i_14] [i_15]) | var_10)) >> (var_7 + 1834755551470837570))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
