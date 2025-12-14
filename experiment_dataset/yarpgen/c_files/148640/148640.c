/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((((((((-28026 ? -9147 : 43))) / ((var_10 ? var_1 : 1086971103))))) ? var_4 : (min(((var_5 ? var_18 : var_12)), ((min(var_2, var_13))))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 = (arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_22 = ((var_10 | ((-(!var_18)))));
                                arr_14 [i_0] [i_0] [i_3] [i_3] [i_4] [i_0 + 2] = (min(var_11, ((((((arr_3 [i_3 - 1]) ? var_19 : var_12))) ? (((arr_12 [i_3]) ? (arr_10 [i_4]) : var_17)) : (((arr_12 [i_3]) ? var_11 : var_5))))));
                                var_23 = (arr_1 [i_0]);
                                arr_15 [i_0 + 1] [i_3] [i_2] [i_3 - 1] [i_4] = ((((min((max(-26407, 1279)), (arr_12 [i_3])))) ? (((arr_5 [i_0 - 1] [i_0 + 2] [i_0 + 1]) ? (arr_5 [i_0 + 1] [i_0] [i_0 + 2]) : (arr_7 [15] [i_0 + 2] [i_0 + 1] [i_0]))) : ((((((arr_0 [i_0]) ? (arr_8 [i_0] [i_1] [i_0] [i_3 - 1] [13]) : 0)) <= (arr_11 [i_0] [i_3 - 1] [i_4 + 2] [i_4] [i_4 + 2]))))));
                                arr_16 [i_0 + 2] [i_1] [i_2] [i_3] [i_4 + 1] = (((((arr_7 [i_0] [i_0] [2] [i_4]) ? ((0 ? -287931095 : -1311478097)) : var_3))) + (max(var_14, (((arr_12 [i_3]) ? var_12 : 1311478097)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (max(var_24, ((((((var_0 ? (var_8 * var_13) : var_10))) ? 4050880766 : ((var_7 ? (var_12 + 246) : (((var_9 ? var_18 : var_15))))))))));
    #pragma endscop
}
