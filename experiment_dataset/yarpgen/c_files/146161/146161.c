/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 += (min(30266, ((-var_2 ? var_1 : (min(18446744073709551615, var_11))))));
    var_16 = (max(((max(var_13, var_0))), (max(var_3, var_9))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] = (arr_3 [i_0 + 1] [i_0 - 1]);
                arr_6 [i_0] [i_1] = 31808;
                var_17 = (((((((arr_1 [i_0] [i_0 + 1]) ? var_5 : var_13))) ? (min(var_4, var_0)) : 15)));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 *= (((((((var_9 > (arr_13 [i_1 + 1] [1] [i_1 + 1] [i_4]))) ? ((min(var_1, 15718))) : (arr_15 [i_0] [i_1 - 1] [i_0 + 2] [i_0 - 1])))) ? (1004004994 || -1) : ((~(arr_11 [i_1 - 3] [i_0 - 1])))));
                                arr_16 [i_1] [3] = ((-((((max((arr_12 [i_4] [i_3] [i_2 - 1] [i_1 - 4] [17] [i_0]), (arr_8 [i_0 + 3] [i_3] [i_2 - 1] [i_0 + 3])))) ? (min(var_8, (arr_12 [i_0] [18] [i_0 + 3] [i_0] [i_0] [i_0]))) : (max(37160, 5918931536776315508))))));
                                arr_17 [3] [8] [i_1] [6] [i_3] [i_4] = (((((arr_15 [i_4] [i_2] [i_1] [i_0 - 1]) >> ((((var_4 ? 5331115571170531185 : (arr_1 [i_2 - 3] [i_1]))) - 5331115571170531185)))) > ((max((((1 || (arr_1 [i_3] [i_3])))), (min((arr_0 [i_0]), 2)))))));
                                var_19 = (arr_15 [i_2 - 2] [i_1 + 1] [i_0] [i_0 + 3]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
