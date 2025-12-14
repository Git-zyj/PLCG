/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = (max((((~((var_2 ? var_0 : var_9))))), (max(var_8, var_9))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        var_12 = var_7;
                        arr_10 [i_0] [i_0] [i_2] [i_3] = ((var_9 ? (((-7579553687424470200 ? (arr_7 [i_0] [i_1 + 2] [i_2] [i_3 + 1]) : var_0))) : (min(var_1, (arr_3 [i_1 + 1] [i_1 - 1] [i_3 + 2])))));
                        var_13 = (25153 ? ((-25157 ? ((~(arr_9 [i_3] [i_2] [i_1] [i_0] [i_0]))) : 25157)) : (arr_9 [i_1 - 2] [i_3 - 2] [i_3 + 2] [i_3 - 2] [i_3]));
                        var_14 *= var_4;
                        var_15 &= 25179;
                    }
                    var_16 = (((max((arr_4 [i_2]), var_4)) * ((((arr_5 [i_1 - 1] [i_1 - 2] [i_1 - 1]) / (arr_1 [i_1 - 1] [i_1 - 1]))))));
                    var_17 = (max((((((((arr_2 [i_1]) >= var_3)))) + (max(var_6, (arr_5 [i_0] [i_1] [i_0]))))), var_2));
                }
            }
        }
        var_18 = (max(var_18, (((((((var_3 ? (arr_5 [i_0] [i_0] [i_0]) : (arr_4 [i_0]))))) ? (var_9 || var_5) : (((((max(25153, 40))) > ((((arr_4 [i_0]) > var_5)))))))))));
        arr_11 [i_0] = ((~(arr_4 [i_0])));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        arr_14 [i_4] [i_4] = ((var_1 < (((((max(var_6, var_1))) ? (max((arr_13 [i_4]), -615513294)) : ((((arr_5 [i_4] [i_4] [i_4]) || (arr_1 [i_4] [i_4])))))))));
        arr_15 [i_4] [i_4] = var_9;
    }
    #pragma endscop
}
