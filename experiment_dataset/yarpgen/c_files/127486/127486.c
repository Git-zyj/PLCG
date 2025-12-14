/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_11 [i_2] = (~2142361143554356593);
                    arr_12 [i_0] [i_2] = (((arr_5 [i_2 + 3] [i_1 + 1] [i_0]) ? (arr_5 [i_0] [i_1 + 1] [1]) : (arr_5 [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    var_19 = ((var_5 ? var_1 : (max(17988408239112568304, var_12))));
    var_20 = (min(var_20, var_6));

    for (int i_3 = 2; i_3 < 20;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_21 &= ((458335834596983313 << (((min((arr_14 [i_3 + 2]), -9)) - 5042448453342455635))));
            var_22 = (min((((-(-78 <= 3229388410)))), (arr_17 [i_3] [i_3])));
            arr_19 [i_3] [i_4] = ((((1 ? ((1443267723 ? (arr_15 [i_3]) : 458335834596983312)) : (arr_13 [i_3 + 1])))) ? 1 : (((arr_14 [i_4]) ? (((!(arr_15 [i_3 - 1])))) : (arr_18 [i_3 + 1] [i_3 + 3] [i_3]))));
            var_23 = (max(var_23, (max(-2434018809, 458335834596983328))));
        }
        arr_20 [i_3] = max(var_5, (248 & var_15));
        arr_21 [i_3] = (arr_14 [15]);
        arr_22 [i_3] = ((~((~((18446744073709551615 ? (arr_18 [i_3] [i_3] [i_3]) : (arr_18 [15] [i_3] [i_3])))))));
    }
    for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
    {
        arr_25 [9] = (((arr_14 [i_5 + 3]) >= ((min((min(28806, var_18)), 0)))));
        var_24 |= ((((max((arr_17 [i_5 - 2] [i_5 + 1]), var_7))) ? (max(78, 1501771509)) : (((var_6 >= (arr_16 [18]))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        arr_28 [i_6] = (((1 >> (((arr_14 [i_6]) - 5042448453342455657)))));
        var_25 += (arr_27 [i_6] [i_6]);
    }
    #pragma endscop
}
