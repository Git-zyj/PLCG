/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_10 = (((((((arr_5 [i_0] [9] [i_0]) - (arr_7 [i_0]))) + (min((arr_4 [i_0]), (arr_7 [i_0]))))) * (((~((126 ? (arr_8 [i_0] [i_1] [i_0]) : 65504)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_11 = 8192;
                                arr_15 [i_0] [i_0] [18] [i_4] [i_0] [17] [i_2] = 12139179095152498219;
                                arr_16 [2] [i_1] [i_2] [i_3] [19] [i_0] = ((((((((3736711163 ? 36469 : 1247931585))) / (min(558256116, 1966080))))) ? (((((arr_0 [i_0]) || 6040427249766178014)))) : (((arr_6 [i_2 + 1]) ? (((arr_14 [i_0] [11] [i_1] [i_0] [7] [i_1] [i_4]) ? (arr_4 [i_0]) : (arr_2 [i_1] [i_1]))) : (arr_14 [7] [i_1] [i_1] [i_0] [i_1] [i_1] [i_1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = var_9;
    #pragma endscop
}
