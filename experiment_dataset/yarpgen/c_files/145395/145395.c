/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [17] [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] [i_0] = (arr_2 [i_0]);
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_19 = (arr_1 [i_1 + 1]);
        arr_7 [0] |= (((((min((arr_2 [13]), (72 < -58))))) <= (arr_1 [i_1 - 1])));
        var_20 += ((!((((arr_1 [i_1 + 1]) ? (arr_1 [i_1 + 1]) : (arr_1 [i_1 - 1]))))));
        var_21 |= var_4;
        arr_8 [i_1] = ((10890934519893848407 ? -58 : var_8));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        var_22 = var_2;
        var_23 = (!2612320878543659510);
        var_24 *= ((!(arr_10 [i_2])));
    }
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        var_25 += (~(max((arr_1 [i_3 + 1]), var_15)));
        var_26 = (min(var_26, ((((((arr_1 [i_3]) ? (arr_5 [i_3] [6]) : ((1 / (arr_5 [1] [i_3]))))) != (arr_10 [i_3]))))));
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                {
                    var_27 = (min((arr_19 [i_4] [i_5] [i_6 + 1] [i_4]), (arr_19 [i_4] [i_6] [i_6 + 1] [i_6])));
                    arr_22 [i_4] [i_5] [i_6] [i_4] = (min((!13), ((((!(arr_14 [i_4] [i_6]))) ? ((min(var_11, var_7))) : (arr_1 [2])))));
                    var_28 = (((min(var_0, 6)) >= (((max((var_0 != 67), ((-40 != (arr_20 [13])))))))));
                }
            }
        }
    }
    #pragma endscop
}
