/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_5 ? (min(var_1, var_3)) : var_1))) == var_7));
    var_13 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 *= (-17297 ? 18051 : 4294967295);
                                arr_11 [i_0 + 2] [i_1] [i_1] [i_0] [i_3] [i_0 + 2] = (arr_7 [i_4] [i_0] [i_3] [i_3]);
                            }
                        }
                    }
                    var_15 = (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (arr_10 [i_0] [8] [i_0 + 2] [13] [i_0] [i_0 - 1] [i_0 + 3]) : (arr_8 [i_0] [i_0] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_17 [i_0] [18] [5] [i_0] [i_6] [i_0] = (((arr_16 [i_0 + 2] [i_5 - 2] [i_5] [i_5 + 4] [i_0]) || (arr_16 [i_0 + 3] [i_5 + 4] [i_5 + 4] [i_5 + 4] [i_0])));
                                arr_18 [i_0] [i_1] [i_2] [i_5] [i_0] = var_4;
                            }
                        }
                    }
                    var_16 = (((arr_2 [i_0]) ? var_8 : (((arr_2 [i_0]) ? (arr_0 [i_0]) : (((((arr_14 [i_0 + 1] [i_0 + 4] [i_1] [i_1] [i_2] [i_2]) == -1))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_17 = (min((((arr_7 [5] [i_0] [i_0] [5]) ? (arr_24 [15] [i_2] [18] [18] [i_7 + 1]) : var_9)), (arr_10 [i_0] [i_0] [i_2] [i_2] [i_2] [i_0] [2])));
                                var_18 = (min(var_18, (((~(arr_14 [i_0] [i_0] [i_0] [12] [i_7] [i_0]))))));
                                var_19 = ((((((arr_16 [i_0] [i_7 - 1] [i_2] [i_2] [i_0]) ? (arr_16 [i_0] [i_7 - 1] [18] [7] [i_0]) : (arr_16 [i_0] [i_7 + 1] [i_0 + 2] [i_0 + 2] [i_0])))) ? (((arr_16 [i_0] [i_7 + 1] [i_0 + 3] [i_0] [i_0]) ? (arr_16 [i_0] [i_7 - 1] [i_2] [i_2] [i_0]) : (arr_16 [i_0] [i_7 + 1] [i_2] [i_1] [i_0]))) : (arr_16 [i_0] [i_7 + 1] [i_0] [i_0 + 4] [i_0])));
                                var_20 = var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
