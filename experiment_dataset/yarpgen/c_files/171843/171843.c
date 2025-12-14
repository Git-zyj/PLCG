/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_11 = (max(var_11, ((((arr_0 [i_0 + 4]) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 1]))))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    {
                        var_12 = (min(var_12, ((((arr_9 [i_0] [i_1] [i_1] [i_2] [5] [i_3 + 2]) > 357815563268961973)))));
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((~(arr_7 [7] [i_3 - 1] [i_3 + 2] [i_3])));
                    }
                }
            }
            var_13 *= (((arr_4 [i_0 + 4] [i_1]) || 2923324854151494511));
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {
            var_14 = 3308353323;
            var_15 = (arr_11 [i_0 + 3] [i_4] [i_0]);
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {
            var_16 = (max(var_16, (arr_14 [i_5] [7] [i_5])));
            var_17 = (min(var_17, (((((-2923324854151494512 ? (arr_2 [i_0] [i_0]) : 9114)) / ((var_3 * (arr_5 [i_5]))))))));
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            var_18 += ((((-1481692711 ? 0 : (arr_3 [i_6] [i_6] [i_6])))) || ((((arr_3 [i_6] [i_6] [i_6]) & var_8))));
            var_19 -= (((arr_2 [i_0] [i_6]) / (arr_2 [i_0 + 3] [i_6])));
            var_20 += ((-(arr_11 [i_6] [i_0 - 1] [i_6])));
        }
        arr_18 [i_0] [i_0] = ((~(arr_7 [i_0 + 4] [i_0 - 1] [i_0] [i_0])));
        var_21 = (~8402933370123568859);
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_22 *= ((((((arr_5 [6]) * 1))) ? var_4 : 50312));
        arr_22 [10] [16] = (max((385540832 + -1184518721), ((~(arr_9 [18] [i_7] [i_7] [i_7] [i_7] [i_7])))));
        var_23 = (max(var_23, (((((((arr_16 [i_7] [i_7]) ^ (arr_16 [i_7] [i_7])))) ? (arr_0 [i_7]) : (((~-2923324854151494511) ? (arr_12 [i_7]) : (max((arr_16 [i_7] [5]), 0)))))))));
    }
    var_24 = -var_5;
    var_25 = (~var_10);
    #pragma endscop
}
