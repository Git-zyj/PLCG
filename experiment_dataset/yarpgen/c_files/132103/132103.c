/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(((var_13 ? 138 : var_5)))));
    var_17 = ((!(0 / 1)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_18 = (1 ? 1 : 1);
        var_19 = var_12;
        var_20 = (min(var_20, var_14));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            arr_8 [0] [i_1] = ((!(arr_6 [i_1] [i_2])));
            arr_9 [i_1] &= ((!(arr_5 [i_2])));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
        {
            var_21 += -var_15;
            var_22 += -var_14;
            var_23 = (((arr_3 [i_1]) ? (arr_3 [i_3]) : (arr_12 [i_1])));
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_24 = (min(var_24, (!0)));
            var_25 = (max(((((((-7029990131578552062 + 9223372036854775807) >> var_10))) ? 9064681128279593398 : ((var_0 ? (arr_2 [i_1]) : 1491158616347253659)))), (((!((max((arr_11 [i_1] [i_4] [6]), (arr_4 [i_1])))))))));
            var_26 = var_10;
            arr_15 [i_1] [1] |= var_15;
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_27 = (~1);
            var_28 = (((((!(arr_12 [i_5])))) ^ var_12));
            var_29 = (1 ? 18290819056002572804 : 2516569713771342491);
            var_30 = (((14398071326885936670 ? (arr_0 [i_1]) : var_2)));
        }
        var_31 = (max(var_31, 0));
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_32 -= 1;
        arr_20 [i_6] = (min((max(-var_1, ((-(arr_17 [i_6] [i_6]))))), ((((arr_16 [i_6] [i_6]) || var_1)))));
        arr_21 [i_6] = (!var_10);
    }
    var_33 = ((((-978249308 ? 1 : 1)) * ((((min(0, 0))) / var_5))));

    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        arr_26 [i_7] = ((1 * (max(57, 18290819056002572804))));
        var_34 = (max(var_34, ((((arr_4 [i_7 - 1]) & 17)))));
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        var_35 ^= (arr_6 [15] [i_8]);
        var_36 = (((((((var_15 + (arr_16 [i_8] [i_8])))) ? (min(var_6, var_3)) : (max((arr_14 [i_8]), 1)))) + (((((arr_13 [i_8] [i_8] [i_8]) > var_11)) ? var_9 : (max(var_6, (arr_14 [15])))))));
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        arr_33 [i_9] [6] = ((0 ? 1 : -395613834));
        var_37 = ((+(((var_2 - var_12) ? var_6 : (arr_25 [1])))));
    }
    #pragma endscop
}
