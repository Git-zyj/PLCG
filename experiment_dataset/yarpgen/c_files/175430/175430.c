/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 = (max(var_15, (((!(~var_11))))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_16 = max((((-9223372036854775807 - 1) ? var_11 : 6804143192212265443)), ((((arr_0 [i_0 + 1] [i_0 - 1]) ? -37 : (((arr_0 [i_0] [i_0]) | (arr_0 [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_11 [i_0 + 1] [i_0] [i_0] [10] [i_1] [i_0] = (max((((((max(var_8, var_11))) & ((var_13 ? (arr_6 [i_0] [0] [i_2] [i_3]) : var_6))))), (0 ^ var_13)));
                        var_17 = var_3;
                        var_18 = (((arr_0 [i_0 - 1] [i_2 + 2]) ? (min((arr_6 [i_0 + 1] [i_1 - 1] [i_2 + 1] [i_3 + 1]), (max((arr_10 [i_0] [i_1]), var_9)))) : (((arr_8 [i_0 + 1] [i_2] [i_2 - 3] [i_3 - 3]) ? var_11 : (arr_8 [i_0 + 1] [i_1] [i_2 - 3] [i_3 - 1])))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 21;i_4 += 1) /* same iter space */
    {
        var_19 = (4360903753238411892 & -25);
        arr_14 [i_4] [i_4] = var_8;

        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            arr_17 [0] = var_2;
            var_20 = (min(var_20, (((!(arr_12 [i_4]))))));
            var_21 += (((arr_9 [i_5 - 1] [i_5 - 2] [i_5 + 2] [i_5 + 2]) ? ((var_1 ? -6804143192212265443 : 6804143192212265443)) : var_8));

            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                var_22 = ((arr_1 [i_4 - 1]) ? var_5 : (arr_1 [i_4 + 2]));
                arr_22 [i_4] [i_4] [i_6] = (arr_8 [i_4] [i_4] [1] [i_6]);
                var_23 = (var_3 | ((var_5 / (arr_3 [21]))));
                var_24 = (var_8 || var_4);
            }
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                var_25 = (min(var_25, (((!(((-14 ? -6804143192212265444 : -36))))))));
                var_26 = (var_5 ? (arr_19 [i_4 + 1] [i_5 - 1] [i_5 + 2] [i_7]) : var_9);
                arr_25 [i_4] [10] [18] = ((-(arr_19 [i_4] [i_4] [i_5] [i_7])));
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 21;i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] |= (var_0 ? (arr_16 [i_8 + 1] [i_8]) : (var_13 + var_13));
        var_27 = (min(var_27, (((-((var_2 ? var_3 : var_6)))))));
        var_28 = (min(var_28, (((arr_5 [i_8] [i_8 + 2]) ? var_1 : (arr_5 [19] [i_8 - 2])))));
    }
    #pragma endscop
}
