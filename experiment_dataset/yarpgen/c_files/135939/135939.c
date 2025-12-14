/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((var_1 ? var_4 : ((14651306135662965051 ? var_1 : var_11)))), (((((var_6 >> (3795437938046586564 - 3795437938046586542)))) & var_8))));
    var_16 = (max(var_16, (((18 ? ((-(!var_12))) : (min(var_6, ((65535 ? var_6 : 928123667)))))))));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_17 = ((((((arr_1 [i_0 - 1] [i_0 + 1]) ? var_3 : 7438055337610554310))) ? var_11 : (((var_7 ? (arr_1 [i_0 + 1] [i_0 + 1]) : (arr_2 [i_0 + 1]))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_2] [i_1] [i_0] = ((((4294967277 && (arr_1 [10] [i_1]))) ? ((((4294967277 && (arr_0 [i_3]))))) : ((var_5 ? var_1 : 16580663988688137979))));
                        var_18 = ((var_8 >> (((arr_0 [i_0 - 1]) + 141))));
                    }
                }
            }
            arr_11 [i_0] [i_1] [i_1] = (((-928123668 ? var_6 : var_10)));
            arr_12 [i_0] = ((var_3 ? (((arr_2 [i_1]) ? -24131 : 7394848924963531621)) : (((var_11 ? -17639 : (arr_2 [i_0 - 1]))))));
            var_19 = ((3795437938046586564 ? (~3795437938046586564) : var_7));
        }
        var_20 = (max(var_20, ((((~(arr_7 [i_0 - 1] [2] [i_0 - 1])))))));
    }
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        var_21 ^= var_1;
        arr_15 [i_4] [11] = (arr_13 [i_4 - 1]);
        arr_16 [11] = (max((((var_8 == (arr_1 [i_4] [i_4])))), (((arr_6 [8] [i_4] [i_4 - 1] [i_4]) + 1352330343930907237))));
    }
    var_22 = (min(var_22, var_2));
    #pragma endscop
}
