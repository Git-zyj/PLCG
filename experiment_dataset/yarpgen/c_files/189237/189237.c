/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((max(var_6, var_5))) ^ (min((((var_8 ? var_6 : var_8))), var_8))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_12 = (min(var_12, (((((var_1 ? var_5 : var_9)) * var_5)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_1] [i_0] [i_0] = var_4;
                        arr_10 [i_0] [i_1] [i_0] [i_3] = ((var_4 / (arr_5 [i_0 - 1] [i_2 + 1])));
                        var_13 = (min(var_13, ((((arr_4 [i_3] [16] [16] [i_0]) > (arr_4 [i_0 - 1] [i_0 - 1] [12] [i_1]))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_14 *= var_10;
        arr_15 [i_4] [i_4] = (min(251, (-9223372036854775807 - 1)));
        arr_16 [i_4] = ((((max(((var_4 ? (arr_1 [i_4]) : var_10)), ((var_4 ? (arr_6 [i_4] [i_4] [i_4]) : var_1))))) ? (((min(var_6, var_7)) / (arr_6 [i_4 - 1] [i_4] [20]))) : (min(((var_4 + (arr_12 [i_4] [i_4]))), ((min((arr_12 [i_4] [i_4]), var_8)))))));
        var_15 = ((min(var_10, var_4)));
    }
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        var_16 = (min(var_16, (((((((arr_11 [i_5] [i_5]) ? -15 : var_7))) ? ((max(var_6, (max(var_6, var_1))))) : (((arr_17 [i_5]) ? (max(var_7, var_1)) : (arr_2 [i_5 + 1] [8] [i_5]))))))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {
                        arr_27 [i_5] [i_5 + 1] = ((var_8 ? ((((arr_6 [i_5 + 1] [i_6] [i_6]) < (arr_0 [i_5] [i_5 + 1])))) : ((((((var_9 ? var_5 : (arr_23 [i_5] [i_7] [i_5])))) > var_0)))));
                        var_17 -= 229;
                        arr_28 [i_5 + 1] [i_6] [i_6] [i_6] [i_8] = var_10;
                    }
                }
            }
        }
        arr_29 [i_5] = (((arr_24 [9] [i_5 + 1] [i_5]) * (((((arr_1 [i_5]) <= ((var_0 ? (arr_26 [i_5] [i_5] [9] [i_5] [i_5] [i_5]) : (arr_18 [i_5] [i_5])))))))));
    }
    var_18 = (var_6 - var_1);
    #pragma endscop
}
