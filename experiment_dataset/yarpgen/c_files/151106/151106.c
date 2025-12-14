/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_11 = (max(var_11, 22));
        arr_3 [i_0 + 3] [i_0] = (max((arr_2 [i_0 + 1]), var_9));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        var_12 = ((arr_5 [i_1]) & (max(4145872610156663999, (arr_4 [i_1 - 1]))));
        var_13 = var_1;
        arr_6 [i_1 - 2] = min(18446744073709551602, var_4);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_2] [i_2] = ((var_9 ? (((var_1 + var_3) - (arr_10 [i_1 - 1] [i_2]))) : 18446744073709551595));
                    var_14 = (max(var_14, var_7));
                    var_15 = (((((max(var_0, var_7))) ? (((arr_9 [0] [i_3]) / var_9)) : (((var_5 ? var_2 : 67108863))))) * ((~(min((arr_5 [i_1]), 5222036192737057196)))));
                }
            }
        }
    }
    for (int i_4 = 4; i_4 < 15;i_4 += 1)
    {
        var_16 |= ((var_3 ? ((min((arr_4 [i_4 - 4]), 0))) : var_9));
        arr_16 [i_4] = var_6;
        arr_17 [i_4] = var_7;
        arr_18 [i_4] [i_4] = var_6;
    }

    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        var_17 = (min(var_17, ((((((arr_4 [i_5]) ? (arr_20 [i_5]) : (-3 == var_4))) << (((max((max((arr_7 [i_5] [i_5]), (arr_7 [17] [22]))), 65519)) - 65511)))))));
        var_18 = ((((((var_2 ? var_7 : (arr_11 [i_5 + 1])))) % (max(var_8, var_6)))));
    }
    var_19 = (max(var_19, var_4));
    #pragma endscop
}
