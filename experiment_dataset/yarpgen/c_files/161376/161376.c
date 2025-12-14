/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (arr_0 [i_0] [4]);
        arr_5 [i_0] [i_0] = ((((((597470493 && (arr_2 [i_0 - 1]))))) | 1148623985));
        arr_6 [12] [i_0 - 2] = ((2147483647 ? (arr_2 [i_0 + 2]) : ((~(arr_1 [i_0])))));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_19 = (max(var_19, (arr_1 [i_1 + 3])));
        var_20 = (arr_7 [1] [i_1 + 3]);
        var_21 = (max(var_21, (((!(((var_5 - (arr_7 [i_1] [i_1 + 3])))))))));
        arr_9 [3] [i_1 + 1] = 8038093485431555096;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_12 [4] = (((arr_8 [i_2]) & ((10804131066081134938 ? 60061 : (arr_8 [i_2])))));
        arr_13 [1] = ((~(((arr_8 [i_2]) ? ((-19226 ? var_0 : 122)) : var_5))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_16 [i_3] = (var_3 ? ((5858048132097189825 ? ((min(43, (-127 - 1)))) : ((3512 ? 199 : (-2147483647 - 1))))) : (((!((((arr_0 [i_3] [i_3]) ? 30 : 789802254)))))));
        arr_17 [7] [1] = (!15025751533324296987);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 10;i_5 += 1)
            {
                {
                    arr_23 [i_3] [3] [i_5] = var_14;
                    arr_24 [i_5] = ((var_9 / ((-(arr_18 [i_5 - 3] [i_5 - 3])))));
                    var_22 = (min(var_22, 1151795604700004352));
                }
            }
        }
    }
    var_23 *= (((var_16 + var_8) ? (-9223372036854775807 - 1) : (var_9 > var_18)));
    #pragma endscop
}
