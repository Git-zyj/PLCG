/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((32767 ? -32759 : 32767))));
    var_17 = (min(var_17, (((!((((var_0 ? var_7 : var_2)))))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (((!32760) ? (((!((max(var_4, var_9)))))) : (((!(!var_9))))));
        var_18 = ((((var_1 ? var_6 : (arr_1 [i_0]))) >> (arr_2 [i_0])));
        var_19 = ((!((((!var_6) ? (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : var_6)) : (!var_2))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_20 = ((((((arr_2 [i_1]) ? var_0 : 1))) ? 32767 : (arr_0 [i_1] [i_1])));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_21 = (arr_7 [i_2]);
            arr_10 [i_1] [i_1] = (((((-32760 ? (arr_2 [i_2]) : 16368))) ? ((0 ? var_5 : 0)) : (-32767 - 1)));
            var_22 -= (((arr_0 [i_2] [i_2]) ? (arr_0 [i_2] [i_1]) : var_10));
            var_23 -= (arr_1 [i_2]);
        }
        var_24 = ((var_4 >> (((arr_7 [i_1]) ? var_1 : var_15))));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        var_25 |= (((var_8 ? (arr_9 [i_3]) : (arr_9 [i_3]))));
        var_26 += (min(((!(arr_7 [i_3]))), (min(var_10, (arr_13 [i_3] [i_3])))));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_27 |= (((((arr_0 [i_4] [i_4]) && (arr_0 [i_4] [1]))) ? (((!((((var_12 + 2147483647) >> (var_4 + 6900824574976901005))))))) : (((min(63, 0))))));
        var_28 -= (1 >> (((!((max(var_9, var_3)))))));
        var_29 = ((!((min(((min((-32767 - 1), var_15))), ((247 ? var_8 : (arr_2 [i_4]))))))));
    }

    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 0;i_8 += 1)
                {
                    {
                        var_30 = (((arr_11 [1]) >> (((!(min(var_14, var_10)))))));
                        var_31 |= var_4;
                    }
                }
            }
        }
        var_32 += ((!((((arr_26 [i_5]) ? var_10 : var_0)))));
    }
    for (int i_9 = 2; i_9 < 17;i_9 += 1)
    {
        arr_29 [i_9] [i_9] = ((((max((arr_27 [i_9 - 2]), (arr_27 [i_9 + 2])))) ? (-32753 && -16381) : ((32749 ? 12 : 448))));
        arr_30 [i_9 - 1] [i_9 - 1] = (-32767 - 1);
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        arr_34 [i_10] = (min(31744, 0));
        arr_35 [i_10] = (((max(((!(arr_28 [i_10]))), (9223372036854775807 || 66060288))) ? var_10 : ((((min(var_9, var_8)))))));
        var_33 += var_14;
    }
    #pragma endscop
}
