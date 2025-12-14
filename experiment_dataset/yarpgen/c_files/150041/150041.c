/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 *= ((-1998928025 ? (arr_1 [14]) : (arr_1 [12])));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                arr_7 [i_0] [i_1] = (~(arr_4 [i_1]));
                arr_8 [i_0] [i_2] [i_0] [i_1] = var_10;
                var_15 = (arr_5 [i_0] [i_1] [0]);
                arr_9 [i_0] [i_0] = var_7;
            }
            var_16 = ((var_7 ? -128 : (46 / -47)));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_12 [i_0] = ((var_9 ? ((-8 ? var_12 : var_9)) : (arr_11 [i_0] [i_0] [0] [i_3])));
                arr_13 [i_0] = ((((arr_10 [i_0] [i_0] [i_0] [i_0]) ? var_3 : 0)));
                arr_14 [0] &= (arr_2 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_17 += (arr_3 [8]);
                            var_18 = var_10;
                        }
                    }
                }
                arr_21 [i_0] [i_1] [i_0] = 31;
            }
        }
        arr_22 [i_0] = var_12;
        var_19 = ((6402802134748876818 * (((var_1 ? 65520 : (arr_5 [i_0] [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {

        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            var_20 = (max(var_20, (((!(arr_24 [i_7 + 1]))))));
            arr_28 [i_6] [i_6] = ((var_5 ? (arr_24 [i_7 - 1]) : (arr_24 [i_7 + 1])));
            arr_29 [i_6] [i_6] &= -32586;
            var_21 = (arr_25 [i_7]);
        }
        arr_30 [i_6] = (arr_15 [i_6] [i_6] [i_6]);
        var_22 = -497925156;
        var_23 = (((arr_25 [9]) ? (arr_25 [i_6]) : var_7));
    }
    var_24 |= (max((((((var_3 ? var_10 : var_6)) - var_12))), (((((29052 ? var_11 : var_6))) ? ((max(var_8, var_3))) : 12))));
    #pragma endscop
}
