/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((17928 + ((-32754 ? var_2 : var_10)))), var_11));

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        arr_2 [i_0] = (max(-32754, (arr_1 [i_0] [i_0 + 1])));
        arr_3 [i_0] [i_0 - 3] = ((((!((max(32754, 32750))))) ? ((max((arr_0 [i_0 - 2]), (!var_2)))) : ((var_3 ? (!473834904) : -32758))));
        var_14 = var_1;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_15 = (((((((!(arr_4 [i_1] [i_1]))) ? (((arr_5 [i_1]) - 473834875)) : (arr_4 [i_1] [i_1])))) ? (arr_5 [i_1]) : (((((3821132376 ? (arr_5 [i_1]) : 21766))) / -32759))));

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_16 |= ((!(arr_6 [i_2] [2])));
            var_17 = (max((((var_4 | var_1) ? (((arr_8 [i_1]) ? (arr_7 [i_1] [1]) : var_4)) : var_4)), ((((arr_8 [i_1]) ? (arr_8 [i_2]) : (arr_8 [i_1]))))));
        }
        for (int i_3 = 3; i_3 < 21;i_3 += 1)
        {
            var_18 = (max(var_18, (((max((arr_7 [i_3 + 1] [i_3 + 1]), (max(2985785626, var_11))))))));
            var_19 |= (((arr_10 [i_1] [i_1]) * (((var_9 > (arr_5 [i_3 - 1]))))));
            var_20 = ((var_11 * ((((!(((3821132376 ? var_10 : var_11)))))))));
        }
    }

    /* vectorizable */
    for (int i_4 = 4; i_4 < 19;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] = (!32754);
        var_21 = (min(var_21, (((4294967295 ? 473834919 : -32733)))));
        var_22 = (arr_13 [i_4]);
        var_23 = ((1023 ? (arr_10 [i_4] [i_4 + 2]) : (!2985785611)));
    }
    for (int i_5 = 4; i_5 < 19;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] = 2962112524;
        var_24 = ((-(((arr_13 [i_5 + 2]) ? (arr_13 [i_5 - 4]) : (arr_13 [i_5 - 4])))));
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_25 = (max(((min(28462, 26449))), var_4));
        var_26 = (((!13464) ? (((arr_15 [i_6]) ? var_6 : var_12)) : 473834900));
        arr_22 [i_6] = min((min((arr_17 [i_6] [i_6]), (arr_7 [i_6] [i_6]))), (((arr_7 [i_6] [i_6]) ? (arr_17 [i_6] [i_6]) : (arr_17 [i_6] [i_6]))));
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        var_27 *= ((((((max((arr_10 [3] [i_7]), 3388237342)) * 473834919))) ? 26449 : -4453));
        var_28 &= var_9;
    }
    var_29 |= (min((((!4294967295) | ((473834875 ? 4294967283 : var_10)))), (min(var_8, ((var_8 ? var_2 : var_2))))));
    var_30 = (max(var_0, 3807));
    #pragma endscop
}
