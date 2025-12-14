/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_13 = 1;
        arr_2 [i_0] [i_0] = ((((((var_1 ? 29041 : var_8)))) ? 1 : var_6));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_14 = ((16368 ? 1 : 1));
        arr_5 [i_1] = -var_2;
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_9 [i_2] = ((((((arr_7 [i_2]) ? (min(var_0, var_5)) : (arr_8 [i_2])))) ? var_2 : (((arr_6 [i_2]) ? (var_2 <= var_5) : (((arr_6 [i_2]) ? var_4 : (arr_3 [i_2])))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_6 = 4; i_6 < 17;i_6 += 1)
                        {
                            arr_20 [i_2] [i_2] [i_3] [i_4] [i_5] [i_5] [i_6] = (((((var_7 ? 59342 : var_11))) ? (arr_18 [i_6] [i_5] [i_5] [i_4 + 1] [i_4]) : 1));
                            arr_21 [i_3] [i_5] [i_4] [i_3] [i_3] = (!60061);
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_15 = var_6;
                            arr_25 [i_7] [i_3] [i_4] [i_3] [i_2] = (var_1 ? (((min((arr_23 [i_5] [i_3] [i_4] [i_4 - 2] [i_7] [i_5] [i_3]), var_8)))) : (((arr_23 [i_2] [i_3] [i_4] [i_4 + 2] [i_7] [i_4] [i_7]) ? (arr_24 [i_2] [i_3] [i_4] [i_3] [i_7] [i_4]) : var_10)));
                        }
                        var_16 = (arr_16 [i_3] [i_4] [i_3] [i_3]);
                    }
                }
            }
        }
    }
    for (int i_8 = 2; i_8 < 18;i_8 += 1)
    {
        arr_29 [i_8] [i_8] = (arr_3 [i_8]);
        arr_30 [i_8] = ((var_8 ? (arr_26 [i_8 - 2]) : (min((arr_27 [i_8]), 4294967295))));
        var_17 = (((~var_2) ? var_8 : var_5));
    }
    var_18 = (((((((27129 ? var_9 : var_6)) << ((((min(var_12, 255))) - 247))))) ? var_4 : var_0));
    #pragma endscop
}
