/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_1 < (((((0 ? var_3 : 8))) ? var_1 : -var_7))));
    var_11 = min(var_1, (max(-var_0, var_3)));
    var_12 = (max(var_12, (min((!2063982565), (max(var_4, ((var_1 ? 18446744073709551606 : var_5))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [17] [i_1] [i_0] = (arr_3 [i_0] [i_1] [13]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                    {
                        var_13 *= ((11743613139859937138 < -75040751) + ((var_3 ? (arr_6 [i_0] [i_0] [i_2 + 1] [i_0]) : (arr_11 [i_0] [i_1] [20] [20] [i_0]))));
                        var_14 = ((var_6 ? (arr_9 [i_2 + 1] [i_2 + 1] [i_2 - 1]) : (!var_1)));
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_1] [i_1] [5] = ((-(!var_8)));
                        arr_16 [i_0] [i_1] [i_1] [i_4] [11] [i_1] = (min((((arr_1 [i_4]) ? -537834847 : 2631677632)), 3));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 2; i_6 < 24;i_6 += 1)
                        {
                            arr_23 [i_0] [i_1] [i_1] [i_2] [i_5] [i_1] [i_6] = var_0;
                            var_15 = var_8;
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_16 = ((+(((arr_17 [i_1] [i_1] [i_5] [23]) / var_1))));
                            var_17 = (arr_21 [i_2] [i_2] [i_2 + 1] [i_2 + 2] [i_2 - 1]);
                            var_18 = (((((var_1 ? (arr_14 [i_0] [i_1] [i_0] [i_0] [i_0]) : var_1))) ? var_2 : -540323566));
                            arr_28 [i_1] [i_1] = var_2;
                        }
                        arr_29 [16] [i_5] [i_2 + 1] |= (((((-(arr_20 [i_0] [i_0])))) < 9578685661783823784));
                        var_19 = (((var_9 | 4764614525386363167) << (((((arr_13 [i_5] [i_2] [i_0] [i_0]) ? 13681290359089667809 : 413543883)) - 13681290359089667791))));
                        var_20 = ((!(arr_13 [i_2 - 1] [5] [i_2] [5])));
                        arr_30 [i_0] [i_1] [i_1] [i_5] = ((~(arr_17 [i_0] [i_1] [i_2 + 2] [21])));
                    }
                    arr_31 [i_1] [i_0] [14] [i_0] = (((arr_12 [16] [i_0]) ? (((!(((5321257548967211869 ? var_9 : 0)))))) : (arr_24 [i_0] [i_0] [i_1] [i_2] [i_1] [9] [i_2])));
                }
            }
        }
    }

    for (int i_8 = 1; i_8 < 21;i_8 += 1)
    {
        var_21 = 1145490695;
        var_22 *= ((-((-((var_8 ? 9223372036854775807 : (arr_17 [i_8] [20] [i_8] [2])))))));
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        var_23 = ((((max(((4765453714619883821 << (((arr_9 [i_9] [i_9] [i_9]) - 45654)))), var_4))) ? ((-427010258 ? (arr_17 [i_9] [i_9] [i_9] [14]) : ((-(arr_27 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))) : (arr_5 [i_9])));

        for (int i_10 = 1; i_10 < 23;i_10 += 1)
        {
            var_24 = (max((((arr_3 [i_9] [1] [1]) ? (arr_3 [i_9] [i_10 - 1] [i_10]) : 13681290359089667794)), (!35)));
            var_25 |= var_9;
            arr_42 [i_10] [i_10] [i_10] = (((37 ? 34 : (((var_7 != (-127 - 1)))))));
            var_26 &= -15367;
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            var_27 = var_5;
            var_28 = ((((arr_5 [i_9]) ? 4294967282 : var_1)));
            var_29 = 12450506765876386030;
            var_30 *= 1663289663;
        }
        arr_45 [i_9] = (var_2 & var_8);
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        arr_48 [i_12] [12] = ((1663289692 || (--5555791127599712658)));
        arr_49 [i_12] = (((15344 & (arr_19 [i_12] [i_12] [i_12] [i_12] [i_12]))));
    }
    #pragma endscop
}
