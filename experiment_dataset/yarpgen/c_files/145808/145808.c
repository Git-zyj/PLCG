/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 = (var_10 | 47);
        var_12 = (var_6 & (23 * var_5));
        arr_4 [i_0] [i_0] = (arr_2 [i_0]);
        arr_5 [i_0] = (~var_10);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] = (arr_3 [i_1]);
        arr_9 [i_1] = min(((((arr_1 [i_1] [i_1]) ? (arr_1 [i_1] [i_1]) : var_8))), (max(1956317477783339715, (arr_2 [i_1]))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            arr_16 [i_2] [6] [i_2] |= arr_1 [i_2] [i_2];
            var_13 = (((arr_6 [i_3]) != -14176921396104441830));

            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                var_14 = (min(var_14, (arr_19 [i_2])));
                arr_20 [i_2] [7] [i_3] = 59;
            }
        }
        var_15 = (max(var_15, ((((arr_13 [i_2]) && (arr_13 [i_2]))))));
        var_16 = (14176921396104441840 - 112);
        var_17 = (var_10 ? (((~(arr_10 [1])))) : var_10);
    }
    var_18 = ((((120 ? 2065506654469042440 : -39)) >= ((((!(~var_1)))))));

    /* vectorizable */
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        arr_24 [i_5] = arr_7 [i_5];
        arr_25 [i_5] = 103;
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        arr_30 [3] = max(((min((var_1 && var_8), ((!(arr_0 [1])))))), (min((arr_28 [1]), (max(var_4, (arr_15 [i_6] [5] [1]))))));
        arr_31 [i_6] [i_6] = (((((arr_23 [i_6]) > (arr_23 [i_6]))) ? (((arr_19 [i_6]) ? (arr_19 [i_6]) : 22)) : (((arr_23 [i_6]) ? (arr_19 [1]) : (arr_23 [i_6])))));
        var_19 = (max(((((-53 + 2147483647) << (6777677382435040087 - 6777677382435040087)))), ((-44 | (max(7489523370560899855, (arr_11 [i_6] [i_6])))))));
        var_20 = ((+(max((arr_14 [i_6] [i_6]), (arr_14 [i_6] [8])))));
    }
    #pragma endscop
}
