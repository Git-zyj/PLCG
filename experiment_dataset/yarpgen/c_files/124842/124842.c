/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = (((arr_2 [i_0]) | ((14216 ? ((~(arr_2 [i_0]))) : var_11))));
        arr_4 [i_0] = var_7;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, (((!((!(((~(arr_5 [i_0])))))))))));
                    arr_10 [i_0] [i_0] [i_0] = (min(var_1, var_2));
                    var_14 = ((((max(var_9, (arr_1 [i_1 + 2])))) ? (arr_1 [i_1 - 1]) : (max((arr_1 [i_1 + 1]), (arr_1 [i_1 + 1])))));
                }
            }
        }
        var_15 = (arr_6 [i_0] [i_0]);

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {

            for (int i_4 = 3; i_4 < 16;i_4 += 1)
            {
                arr_16 [i_3] [i_3] [i_0] = (!(!112));
                var_16 &= (arr_5 [1]);
            }
            arr_17 [i_0] [1] &= ((var_1 ? (arr_1 [i_3]) : (arr_2 [8])));
            var_17 = ((((arr_6 [i_0] [i_0]) + (arr_11 [i_0] [i_0] [i_0]))) - 72);
        }
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            var_18 = arr_12 [0] [i_0];
            var_19 = ((((arr_13 [i_5 - 1] [i_5 - 1] [1]) && (arr_13 [i_5 - 1] [i_5 - 1] [i_5 - 1]))));
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] = (((!((!(arr_7 [i_6]))))));
        var_20 = ((-((-((183 ? 184 : 184))))));
        var_21 |= ((12719 ? 181 : (-9223372036854775807 - 1)));
        var_22 |= (min(((min(((-5280 ? 72 : 214)), 340026309077091584))), (max((max(var_7, var_5)), ((((arr_18 [i_6] [10] [i_6]) - (arr_7 [i_6]))))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] = ((24 ? (arr_0 [i_7]) : (((236 << (236 - 231))))));
        arr_28 [i_7] = (arr_18 [i_7] [i_7] [i_7]);

        for (int i_8 = 2; i_8 < 15;i_8 += 1)
        {

            for (int i_9 = 1; i_9 < 13;i_9 += 1)
            {
                var_23 = (min(var_23, -78));
                var_24 = ((-(arr_20 [i_7])));
                arr_35 [i_7] [i_8] [i_7] = 0;
                var_25 = (min(var_25, var_4));
                var_26 *= ((-(((var_1 && (arr_30 [i_8]))))));
            }
            var_27 += (arr_24 [13] [i_8]);
        }
        var_28 -= (((arr_0 [i_7]) * (arr_0 [i_7])));
        var_29 = ((var_0 >= (((arr_33 [10] [i_7] [11]) ? (arr_6 [i_7] [6]) : var_0))));
    }
    var_30 = (max(var_30, var_0));
    var_31 = (var_7 | ((-(var_10 + var_0))));
    var_32 = (min(var_32, ((((((var_6 & var_10) + 9223372036854775807)) << (((var_6 + 17414) - 14)))))));
    var_33 = (min(var_4, var_6));
    #pragma endscop
}
