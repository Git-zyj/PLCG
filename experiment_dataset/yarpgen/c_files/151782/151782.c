/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(((((var_19 / var_8) != ((1 ? var_12 : 18446744073709551613))))), ((~(~4284888194))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] = (0 << 2);
        var_21 = ((var_5 ? var_19 : var_11));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_22 = (max(var_22, 114));
                    arr_11 [i_0] [12] [i_2] = ((((1 ? var_19 : (arr_6 [0] [i_1]))) >> (((arr_7 [i_0] [1] [i_2]) - 21623))));
                }
            }
        }
        var_23 = (min(var_23, (!1405400214567104152)));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_24 = ((-(arr_6 [i_3] [2])));
        arr_14 [i_3] = 1125899906842623;
        arr_15 [i_3] = (-32767 - 1);
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        var_25 = (((arr_13 [i_4 - 1]) ? (arr_13 [i_4 - 1]) : (arr_13 [i_4 + 1])));
                        arr_24 [i_6] &= 1125899906842623;
                        var_26 = (arr_7 [i_3] [i_4 + 1] [i_5]);
                    }
                }
            }
        }
        var_27 = ((~(arr_1 [i_3])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
    {
        var_28 = (min(var_28, 0));

        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            arr_30 [i_7] = var_5;
            var_29 = ((arr_0 [i_7]) ? (arr_12 [i_8]) : (arr_28 [i_8]));
        }
    }
    #pragma endscop
}
