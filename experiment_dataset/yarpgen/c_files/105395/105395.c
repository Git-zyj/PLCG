/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 ^= ((-57816 + ((~(min((arr_1 [i_0]), (arr_3 [12])))))));
        arr_4 [6] |= ((!(((-(((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_8)))))));
        arr_5 [i_0] = (((-(arr_2 [i_0] [i_0]))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_17 = (~var_14);

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_18 [i_1] [i_2] [i_3] [i_2] [i_2] [i_2] = ((((min((((arr_10 [i_2] [i_3] [i_3]) ? (arr_7 [i_1]) : (arr_6 [i_1]))), (arr_17 [i_1 - 1] [i_1 - 1] [19] [i_2])))) ? (((min((arr_17 [i_1] [i_2] [i_3] [i_4]), (arr_6 [i_1]))))) : ((min((arr_8 [i_1 - 1]), (53800 || 17149903091297586887))))));
                        var_18 = (min((((arr_10 [i_2] [i_2] [i_3]) + ((min((arr_13 [i_1] [i_2] [i_3]), (arr_14 [i_3] [i_4])))))), ((1 ? ((max((arr_10 [i_2] [i_2] [i_2]), 1))) : -1))));
                    }
                }
            }
            arr_19 [i_2] = (max((min((arr_16 [i_2] [i_1 - 1] [i_1 - 1] [i_2]), (arr_16 [i_2] [20] [1] [i_1 - 1]))), (arr_14 [i_1 - 1] [i_1 - 1])));
            var_19 = (arr_17 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_20 += (((arr_15 [i_5] [i_5] [i_5] [i_1 - 1]) && (var_11 && var_12)));
            arr_24 [i_1] [i_1 - 1] [i_5] = ((~(arr_9 [i_1 - 1])));
        }
        arr_25 [i_1 - 1] = 27993;
    }
    var_21 *= (((((((var_11 ? var_5 : var_10))) ? var_4 : (((var_1 ? var_11 : var_9))))) != var_12));
    #pragma endscop
}
