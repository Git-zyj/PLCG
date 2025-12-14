/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!((min(((var_0 << (65535 - 65495))), var_10)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_14 = ((var_10 ? (arr_0 [i_0]) : (arr_0 [i_0])));
                        arr_9 [i_0] [i_0] [i_2] [i_3] = (arr_3 [i_1] [8]);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_15 = (((arr_4 [i_6 + 3] [i_5] [i_0]) ^ var_7));
                            arr_20 [i_0] [i_1] [i_4] [i_1] [12] = ((arr_4 [i_0] [i_1] [0]) ? (arr_4 [i_0] [i_1] [i_5]) : (arr_7 [1] [i_1] [i_1] [i_1] [i_1]));
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            var_16 = (min(var_16, (((var_3 > (arr_7 [i_0] [i_0] [i_0] [i_7] [i_7]))))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {
                        arr_29 [i_9] [i_7] [i_7] [i_7] [i_9] [i_7] = (arr_19 [i_0] [11] [i_7] [i_8] [1] [i_8] [i_0]);
                        var_17 = (max(var_17, (((~((var_11 ? (arr_18 [11] [2] [i_7] [6] [i_9]) : (arr_18 [i_9] [i_9] [i_8] [i_7] [i_0]))))))));
                        var_18 = ((((var_11 ? var_5 : (arr_2 [i_0] [i_9]))) - (var_3 / var_6)));
                    }
                }
            }
        }
        arr_30 [i_0] = (arr_5 [i_0] [11] [6]);
        arr_31 [i_0] = ((((!(arr_28 [i_0] [i_0] [i_0] [7]))) || 1073741823));
        var_19 *= (((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((arr_12 [8] [i_0]) ? (arr_22 [i_0]) : 2147483392)) : (arr_13 [i_0] [i_0])));
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        var_20 = (arr_4 [i_10] [i_10] [i_10]);
        arr_34 [i_10] [i_10] = (((((((((arr_32 [i_10] [i_10]) ? (arr_15 [i_10] [i_10] [i_10] [8]) : -759932250))) ? (arr_25 [i_10] [i_10]) : (arr_16 [i_10] [i_10] [10] [i_10])))) ? ((((((~(arr_18 [1] [i_10] [i_10] [i_10] [1])))) ? (arr_33 [i_10]) : 65521))) : var_11));
        arr_35 [i_10] = ((((((((arr_0 [i_10]) ? var_0 : var_0)) % var_3))) ? (max((~var_5), (((arr_13 [i_10] [i_10]) ? (arr_15 [i_10] [i_10] [i_10] [i_10]) : var_2)))) : (((((arr_22 [i_10]) != (arr_2 [i_10] [i_10])))))));
    }
    var_21 = var_3;
    #pragma endscop
}
