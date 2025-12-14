/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_11 = (max(((min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1])))), (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 + 1]) : 11774))));
                                var_12 = ((((((((var_3 ? var_8 : 750363348))) > ((-2048 ? 9079256848778919936 : -18722))))) < (~65534)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_13 = (arr_17 [i_0 - 1] [i_1] [14] [13] [i_1] [i_6]);
                                arr_20 [i_1] [1] [7] [8] [i_1] = min(var_1, (((arr_13 [i_5 - 1] [i_0 + 1] [i_2] [i_5 + 1]) ? (arr_7 [i_1]) : (arr_2 [i_5 - 1]))));
                                var_14 = var_7;
                            }
                        }
                    }
                    var_15 = min((arr_13 [i_0 - 1] [i_0 - 1] [i_0 + 1] [0]), (min((arr_13 [9] [i_1] [1] [0]), var_7)));
                    var_16 = (((((min((arr_18 [i_0] [9] [i_0 + 1] [13] [1] [i_2] [9]), 39382)))) >= var_9));
                    var_17 *= (min((~-18722), -39382));
                }
            }
        }
    }
    var_18 = (1 <= var_9);
    var_19 = -31;
    var_20 -= var_1;
    #pragma endscop
}
