/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (max(((max(var_3, var_8))), (((((var_7 ? var_7 : var_1))) ? ((var_3 ? 1 : var_2)) : 2))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_14 += (min(var_12, (arr_3 [i_1 + 1] [i_0 + 1] [i_0 - 3])));
                var_15 = (min(((((arr_1 [i_0 - 1]) ? var_5 : (arr_1 [i_0 - 1])))), (((((arr_0 [i_0]) > 1)) ? (((arr_2 [i_0 - 2] [i_1 + 1] [i_0]) ? (arr_0 [i_1]) : var_12)) : -4))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_2] [i_1] [i_1 + 2] = ((1 < (((1 | -23) ? (!2550854914) : ((min((arr_0 [i_2]), var_2)))))));
                            var_16 = ((2550854914 & ((((((var_0 ? var_4 : 0))) ? (((arr_8 [i_0 - 1] [i_0] [i_0] [i_0 - 3] [i_0 - 3] [i_0]) ? (arr_11 [i_0] [i_1] [i_0 + 1] [i_3]) : (arr_10 [i_2] [i_2 + 1] [i_1 + 2] [i_2]))) : (arr_3 [i_2] [i_0 - 3] [i_2 + 1]))))));
                            arr_13 [i_0 - 1] [i_0] [i_0] [i_0 - 2] [i_2] = (arr_0 [i_0 + 1]);
                            arr_14 [i_3] [i_2] [i_1] [i_2] [i_0 - 1] = ((((!(arr_2 [i_0 - 1] [i_0] [i_0])))) | (((!((max(1, 2147483620)))))));
                        }
                    }
                }
            }
        }
    }
    var_17 = (max(var_17, ((min((var_6 * var_8), var_5)))));
    #pragma endscop
}
