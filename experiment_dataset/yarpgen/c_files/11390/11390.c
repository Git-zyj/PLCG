/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = (min(114, (min((((!(arr_1 [i_0] [i_0])))), (var_8 & 2147483647)))));
        var_18 = (((((((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? var_8 : (arr_0 [i_0])))) ? (min((arr_1 [i_0] [i_0]), (min(var_0, var_7)))) : (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = arr_1 [i_1] [i_1];
        var_19 = ((((var_2 ? (arr_4 [i_1]) : ((min((arr_0 [i_1]), (arr_3 [i_1] [i_1])))))) <= (arr_4 [i_1])));
        arr_6 [i_1] [i_1] = (arr_2 [i_1]);
        arr_7 [i_1] = ((((((min((-9223372036854775807 - 1), (arr_4 [i_1])))) ? var_15 : (((arr_3 [i_1] [2]) - (arr_4 [i_1]))))) <= (((((2147483647 >> (((arr_4 [i_1]) - 13069804984636689611)))) % (arr_1 [i_1] [i_1]))))));
        var_20 = (min(var_20, (((((((((arr_3 [i_1] [i_1]) ? var_0 : (arr_4 [i_1])))) ? ((var_2 ? 13779643862813137515 : 4820)) : var_11)) == (((var_15 ? var_9 : var_1))))))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_21 = (arr_4 [i_2]);
        var_22 |= ((((min(1, var_14))) ? ((min(var_13, var_3))) : (max((arr_8 [i_2] [1]), (max(var_5, (-2147483647 - 1)))))));
        var_23 = var_1;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_24 = (((!var_9) ? (arr_10 [i_3]) : var_3));
        var_25 = (max(var_25, (arr_9 [i_3])));

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_26 = ((((((arr_10 [i_4]) + (arr_15 [i_3] [i_4])))) - (arr_4 [i_3])));
            arr_17 [i_3] [i_4] = (arr_10 [i_3]);
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            arr_20 [i_3] [i_5] [i_5] = ((var_13 & (((arr_15 [i_3] [i_5]) ? -2147483638 : var_7))));
            var_27 *= arr_13 [i_3];
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            var_28 = var_3;
            arr_24 [i_3] [i_6] = 60734;
        }

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_29 [5] [i_7] [i_7] = (((((var_4 ? 14839371116753053647 : var_8))) ? var_16 : ((((-9223372036854775807 - 1) ? var_6 : var_2)))));
            var_29 = (arr_25 [i_3] [i_3] [i_3]);
        }
    }
    var_30 = var_2;
    var_31 += (min(var_7, -2525));
    #pragma endscop
}
