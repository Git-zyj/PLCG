/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (~(~1536283420));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0] [5]);
        arr_3 [i_0] [i_0] = ((!((((var_4 && (arr_0 [i_0] [i_0]))) || (arr_1 [i_0])))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((((var_14 | var_0) && (arr_5 [i_1]))) ? (((!var_12) / (arr_0 [i_1 + 1] [i_1 + 1]))) : ((0 / ((~(arr_5 [i_1 - 1])))))));
        var_18 = (max((~var_2), ((~(!0)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_11 [i_2] = ((((((arr_7 [i_2] [i_2]) ? var_15 : 9))) && (arr_10 [i_2])));
        var_19 += var_9;
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        arr_18 [i_2] [i_3] [i_3] [23] = -1528085407;
                        arr_19 [i_3 - 1] [i_3] [i_3 - 1] [i_4] [i_4] |= (~var_5);
                    }
                }
            }
        }
    }
    var_20 = (!var_4);
    var_21 = ((~(((var_3 == var_7) << (var_14 && var_11)))));
    #pragma endscop
}
