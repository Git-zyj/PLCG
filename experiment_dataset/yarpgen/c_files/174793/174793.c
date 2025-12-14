/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((((-28 != var_0) ? var_6 : (-28 != var_2)))), (((!-64) ? var_10 : (var_1 & var_7)))));
    var_13 = -var_10;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0 - 1] [i_0 - 1] = ((-(arr_1 [i_0 - 2] [i_0 + 2])));
        arr_4 [i_0] [7] |= (((var_4 ? ((28 ? -45 : var_1) : (arr_2 [i_0 + 1])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = ((((var_9 ? var_5 : -28))) ? (arr_6 [i_1]) : ((min((arr_6 [1]), 28))));
        arr_7 [i_1] = (max((arr_6 [20]), (!1)));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_15 = -11;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        arr_19 [i_2] [i_2] [i_4] [3] = ((((!(arr_9 [i_2 - 1] [i_2 - 1])))));
                        var_16 = (min(var_16, (arr_6 [i_3])));
                        arr_20 [i_2 - 1] [1] [i_4] [1] = ((((min((arr_11 [i_2] [i_4] [3]), 1))) ? (max(var_9, (((arr_12 [i_2] [i_3]) ? (arr_9 [i_4] [1]) : 127)))) : -128));
                        var_17 = -1;
                    }
                }
            }
        }
        var_18 += ((var_10 ? ((((arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 - 1]) ? (arr_9 [14] [4]) : 42))) : (((arr_9 [i_2] [i_2]) ? (arr_9 [i_2] [i_2]) : -10))));
    }
    #pragma endscop
}
