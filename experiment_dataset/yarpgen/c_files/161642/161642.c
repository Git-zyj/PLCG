/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (((((-((min(var_18, var_1)))))) ? ((var_17 ? (var_4 - var_10) : var_9)) : var_5));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0 + 1] = (((!var_9) <= ((var_16 ? var_1 : (arr_0 [i_0] [i_0])))));
        arr_4 [i_0 + 1] = var_6;
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        arr_9 [i_1] = ((((max((min(-2683622516797709309, (arr_7 [i_1]))), ((min((arr_7 [i_1]), (arr_7 [i_1]))))))) ? (arr_6 [i_1]) : (((~4821) ? (arr_7 [i_1 - 1]) : ((var_15 ? (arr_1 [i_1]) : 0))))));
        arr_10 [6] [i_1] &= ((((min((arr_2 [i_1 + 1]), (arr_6 [6])))) ? (((((-394589819 ? 1 : 4821))) ? (((arr_8 [8]) ? 8628499586498728948 : var_9)) : var_2)) : -var_11));
    }
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        var_20 += ((((((((28 ? (arr_1 [i_2]) : (arr_0 [i_2 - 1] [i_2 - 2])))) ? (min(10, -8754141335774012453)) : ((((var_1 < (arr_12 [i_2])))))))) ? ((var_3 ? ((((arr_1 [i_2 + 1]) ? var_14 : var_18))) : var_7)) : ((var_14 + (max(11990726171221418232, -1))))));
        arr_14 [8] &= ((((((((var_7 ? var_6 : var_6))) ? ((((arr_13 [i_2] [i_2]) && var_12))) : (!1)))) ? ((((((arr_2 [i_2]) || (arr_0 [i_2] [i_2 + 2])))))) : (((arr_13 [i_2 + 1] [i_2 + 1]) ? ((((arr_0 [i_2] [i_2 + 2]) ? var_16 : var_6))) : ((var_3 ? var_11 : -8628499586498728948))))));

        for (int i_3 = 4; i_3 < 16;i_3 += 1)
        {
            var_21 *= ((((((arr_16 [i_3 - 4] [i_3 + 1] [i_3]) ? (arr_16 [i_3 - 4] [i_3 + 1] [i_3]) : (arr_16 [i_3 - 4] [i_3 + 1] [i_3])))) - (max((max(var_14, var_17)), (min(var_3, var_14))))));
            var_22 = (max(var_22, ((((arr_15 [i_2] [i_3] [i_3 - 2]) ? ((var_5 ? 12708531731963773903 : ((((arr_15 [i_2] [i_2] [i_2]) ? var_15 : var_3))))) : (((((((arr_13 [i_2] [i_3]) ? (arr_13 [i_2 - 1] [i_3]) : (arr_16 [i_3 + 1] [i_3] [i_3 - 1])))) ? (arr_2 [i_3 + 1]) : (!var_6)))))))));
            var_23 &= (((((((((arr_12 [i_3]) - (arr_15 [i_3] [i_2 + 2] [i_2])))) ? ((var_4 ? var_16 : 245)) : var_12))) ? ((((var_5 ? (arr_11 [i_3]) : (arr_15 [i_2] [i_2] [i_2]))))) : (min((((arr_2 [i_3]) * var_10)), (arr_1 [i_3 - 3])))));
            arr_17 [i_2] [i_2] [i_2] = (arr_12 [i_2]);
        }
    }
    var_24 = var_9;
    var_25 += ((var_0 ? ((((var_5 <= (~var_10))))) : ((var_1 ? var_14 : (((max(var_4, var_13))))))));
    #pragma endscop
}
