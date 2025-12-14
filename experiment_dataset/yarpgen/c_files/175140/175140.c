/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (!var_9);
        var_11 ^= (((((~12189) + 2147483647)) >> (((arr_1 [i_0]) - 99))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 23;i_3 += 1)
            {
                {
                    var_12 = (max(var_12, ((((-60 ? 215 : 15)) * (((arr_9 [i_1] [i_2 - 1] [20]) / ((min((arr_3 [i_1]), var_4)))))))));
                    var_13 = (min(var_13, (arr_4 [i_1] [4])));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_14 [2] = (!((((arr_4 [i_4] [22]) * var_3))));

        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            var_14 = (2845550027 / 1449417259);
            arr_18 [i_5] = ((var_2 ? (arr_7 [19] [i_4] [i_5]) : var_8));
        }
        var_15 = (max(var_15, var_10));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_16 = (min(var_16, (arr_7 [i_6] [i_6] [i_6])));
        arr_23 [i_6] = ((arr_4 [i_6] [i_6]) / var_10);

        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            var_17 = (max(var_17, (((((((arr_7 [i_6] [i_7] [i_6]) ? (arr_26 [i_7]) : var_5))) && (arr_19 [i_7]))))));
            arr_27 [3] [1] = (((arr_7 [i_6] [i_7] [i_7]) < ((((!(arr_7 [i_6] [i_6] [i_6])))))));
            arr_28 [i_7] [i_6] [i_6] = (arr_24 [14] [i_6] [i_6]);
            var_18 = 2845550027;
            var_19 ^= (((arr_19 [i_6]) + (((arr_3 [i_6]) ? var_3 : var_8))));
        }
    }
    #pragma endscop
}
