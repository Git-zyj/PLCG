/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = var_3;
                var_16 = (((((~(arr_2 [i_0] [i_0])))) && ((((arr_3 [i_0 + 1]) ? ((((arr_0 [i_0 + 1]) || 0))) : (arr_3 [i_1]))))));
                var_17 *= (((((((max((arr_2 [i_0] [i_1]), 28365))) ? (((((arr_2 [i_1] [i_1]) < (arr_2 [13] [i_0]))))) : var_14))) * (((((arr_0 [i_1]) ? (arr_2 [16] [16]) : var_2)) * ((((arr_1 [i_1]) * (arr_2 [i_0 - 2] [i_0 - 2]))))))));
                var_18 = (max((((arr_0 [i_0 + 1]) + (arr_0 [i_0 + 1]))), (max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))));
            }
        }
    }
    var_19 = ((max((((var_12 ? var_12 : var_14))), var_15)));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_20 = ((min((((arr_9 [10] [10]) & 4294967295)), var_13)));
                var_21 = (((arr_0 [i_2]) ? var_13 : (((var_15 + var_4) ? ((var_2 / (arr_5 [i_3]))) : ((max((arr_0 [i_3]), 2726102798)))))));
            }
        }
    }
    var_22 = var_7;
    var_23 = (min(((var_15 ? (min(17758158189885695325, 42384)) : var_10)), var_0));
    #pragma endscop
}
