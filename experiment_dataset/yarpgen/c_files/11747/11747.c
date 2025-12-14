/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_2);

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_16 -= (!((max(595283663, (arr_1 [i_0 - 2] [i_0 + 2])))));
        var_17 *= ((961895844 < (((arr_0 [22]) ? (arr_0 [20]) : 1))));
        var_18 ^= ((arr_1 [i_0 + 1] [i_0 - 2]) ? (arr_1 [i_0 - 1] [i_0 + 3]) : (arr_0 [0]));
        var_19 = (((((23014 ? (arr_1 [i_0] [i_0 + 3]) : (arr_1 [i_0 - 1] [i_0 - 1])))) ? ((((!(((var_14 ? (arr_1 [i_0] [i_0]) : -961895844))))))) : (((((595283663 ? 1 : -69))) + 6015248008438571473))));
        var_20 = (((!595283663) * (((!(arr_1 [i_0 - 2] [i_0 + 2]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_21 = (((arr_0 [i_1]) | (arr_0 [i_1])));
        var_22 ^= (!(arr_3 [i_1]));
        var_23 = 1393424535;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = (max((max(0, (arr_2 [i_2]))), 1));
        var_24 = ((!(arr_0 [i_2])));

        for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
        {
            arr_11 [i_2] [1] = ((-(arr_10 [1] [i_3] [0])));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                var_25 = (arr_12 [i_3 + 1] [i_3 + 1]);
                arr_15 [i_2] [1] [1] = ((!(arr_9 [2] [i_3 + 1] [12])));
                var_26 = (max(var_26, var_11));
                var_27 &= var_10;
                var_28 += (((arr_14 [i_3 + 1]) | 0));
            }
            var_29 = (min(var_29, (((((((max(2017439185, (arr_7 [i_3] [i_2])))) ? var_6 : ((((arr_10 [i_2] [i_3] [11]) * var_3))))) * (arr_7 [i_2] [i_3]))))));
            var_30 = (min((arr_10 [i_3] [i_3] [i_2]), (max((arr_12 [i_2] [5]), 1))));
        }
        for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
        {
            var_31 -= ((((((arr_0 [i_2]) ? (-17344 / -21) : (max((arr_7 [i_2] [i_5]), var_6))))) * (((((1393424535 ? 1 : (arr_4 [i_2])))) ? (((-595283663 / (arr_0 [i_2])))) : 12431496065270980143))));

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {

                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {

                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {
                        var_32 = -3;
                        var_33 = var_0;
                        arr_27 [i_2] [6] [i_6] [i_7] [i_8] = ((arr_0 [i_2]) & (arr_26 [i_7] [i_7 + 1] [i_5 + 1] [i_7] [i_5 + 1] [i_6]));
                        var_34 = ((((var_13 ? var_7 : (arr_17 [i_2] [i_5] [i_2]))) < 0));
                    }
                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        var_35 ^= ((!(arr_31 [i_6] [i_5 + 1])));
                        var_36 |= ((36 ? (arr_14 [i_2]) : 17343));
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        arr_35 [5] [5] [i_6] [5] [5] &= (((arr_30 [3]) || (!-17344)));
                        var_37 = (max(var_37, var_13));
                        arr_36 [i_10] [i_7] [i_6] [i_6] [i_2] [i_2] = (arr_2 [1]);
                        arr_37 [i_2] [i_5] [i_5] = (arr_12 [i_5] [i_5]);
                    }
                    arr_38 [i_2] [i_2] [i_2] [i_6] [1] = (((!(arr_34 [i_2] [i_7 - 1] [i_6] [i_7]))) ? (max((arr_34 [i_2] [i_7 + 1] [i_6] [i_7]), 2849697496)) : ((((arr_34 [i_2] [i_7 - 1] [i_6] [1]) | (arr_34 [i_2] [i_7 - 1] [i_7 - 1] [i_6])))));
                    var_38 = 134152192;
                    arr_39 [i_5] = 0;
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_39 = (!0);
                    arr_43 [i_2] [i_6] [i_5 + 1] [i_5 + 1] [i_2] [i_11] |= (((4160815103 >= 0) ? (arr_33 [i_11] [i_6] [i_2] [i_2] [i_2]) : var_4));
                }
                var_40 = (((~((max(var_11, 56))))));
            }
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 0;i_12 += 1) /* same iter space */
        {
            var_41 = (min(var_41, ((((arr_20 [i_2] [i_2] [i_2]) || 134152192)))));

            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                arr_48 [i_2] [i_12] [i_13] [i_12] = var_6;
                arr_49 [i_12] [3] [i_13] [i_13] = var_8;
                var_42 = (((arr_12 [i_2] [i_2]) ^ (arr_32 [i_2] [i_12 + 1] [i_13] [9] [i_13])));
            }
            var_43 = (min(var_43, 4160815103));
        }
        var_44 = ((((!((930737020 >= (arr_46 [i_2]))))) ? (((var_9 << 0) ? (!1) : (arr_12 [i_2] [i_2]))) : (((((32768 ? var_5 : (arr_47 [i_2] [i_2])))) ? (arr_20 [i_2] [i_2] [i_2]) : ((((arr_28 [i_2] [i_2] [i_2]) >= var_0)))))));
    }
    var_45 = var_11;
    var_46 += (((var_10 >= 12431496065270980143) >= var_10));
    #pragma endscop
}
