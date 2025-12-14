/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = ((arr_2 [i_0]) + ((16 ? var_0 : var_10)));
        arr_3 [9] = (arr_2 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_14 = 203;
        var_15 -= ((!(((~(arr_5 [i_1]))))));
        var_16 = (min(var_16, (!2857289805)));
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        var_17 ^= ((+(((~var_11) ? var_10 : ((var_10 >> (1437677519 - 1437677518)))))));
        arr_9 [i_2] [i_2] = ((-10427 ? var_6 : (((arr_7 [i_2 + 1] [i_2 + 1]) - (arr_7 [i_2] [i_2 + 1])))));
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    arr_15 [i_2 + 1] [i_2] [i_2] [i_2] = (!var_7);
                    var_18 = ((max(var_8, (((!(arr_10 [i_4])))))));
                    arr_16 [i_2] [i_3] [i_3 + 1] [i_3] = ((~(~var_1)));
                }
            }
        }
    }
    var_19 = (((~(21021 + var_12))));
    var_20 = (((!var_7) & (((!47) ? var_1 : var_3))));
    var_21 = ((var_8 ? (((min((!var_10), -10443)))) : ((var_9 + (((2 ? 44515 : 4294967281)))))));
    #pragma endscop
}
