/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_14);
    var_16 |= (min(var_11, var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 ^= (((arr_0 [i_0]) < (arr_0 [i_0])));
        arr_2 [i_0] = (((arr_0 [i_0]) == (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_18 ^= var_2;
            var_19 += (arr_4 [i_0] [i_1]);
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [1] [i_2] [i_3 - 1] [1] = (((var_11 | var_9) & (arr_5 [i_2 - 3] [i_2 - 1] [i_2 + 2])));
                            arr_15 [i_0] = arr_11 [i_0] [i_0] [i_0] [i_0] [i_4];
                            arr_16 [i_2] [i_4] = var_3;
                        }
                    }
                }
            }
            arr_17 [i_0] [i_1] [i_0] = var_11;
            arr_18 [i_0] [i_0] [i_1] = (arr_9 [i_0] [i_0] [i_1] [i_1]);
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_20 = ((var_6 || (arr_12 [i_0] [i_0] [i_5] [i_0] [i_5])));
            arr_21 [i_0] [i_5] = (11521856653161591990 | 86);
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    {
                        arr_27 [i_6] [i_5] [i_6] [i_0] [i_6] [i_6] = (~11684);
                        arr_28 [i_5] [i_5] [i_6] = (var_0 | var_9);
                    }
                }
            }
            var_21 = (max(var_21, (arr_12 [i_0] [i_0] [i_5] [i_5] [i_5])));
        }
        var_22 += (~7277965612211705997);
    }
    /* LoopNest 3 */
    for (int i_8 = 2; i_8 < 21;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                {
                    var_23 = (((((var_9 ? (arr_31 [i_8] [i_9]) : (arr_29 [i_8])))) ? ((11692 << (((-7277965612211705985 + 7277965612211706016) - 16)))) : 11692));

                    for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                    {
                        var_24 *= var_7;
                        arr_39 [i_8] [i_8] = ((((((arr_34 [i_8]) | 5))) ? (((((min(52561, 1643541277))) ? (arr_32 [i_8 - 1]) : (arr_38 [i_8] [i_9] [i_10] [i_11])))) : -177743993723609217));
                    }
                    for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                    {
                        var_25 = (((~var_3) >= ((min((arr_34 [i_8]), var_11)))));
                        arr_43 [i_8] [13] [i_8] [5] = (min((min(((var_14 ? (arr_30 [i_8] [i_9 - 1]) : var_2)), (arr_37 [i_8] [i_8] [i_8] [i_9 + 3] [i_9 - 2]))), ((1643541277 ? (arr_41 [i_12] [i_12] [i_9 - 2] [i_8 + 1]) : var_14))));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_46 [i_8] [i_8] [i_10] [i_13] = (((arr_44 [i_8 - 1] [i_9] [i_9] [i_9] [i_9] [i_9 - 1]) ? (min((arr_42 [i_9] [i_9] [19]), (arr_42 [i_8] [i_8] [i_8]))) : (((((arr_44 [15] [i_8] [15] [i_9] [i_9] [i_9 - 1]) && (arr_36 [i_9] [i_9] [i_9] [i_9] [i_8] [i_9 - 1])))))));
                        arr_47 [i_10] [i_9] [i_9] [i_10] [1] &= ((53839 % ((((511472111 && (arr_33 [i_9] [i_9])))))));
                    }
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        arr_52 [i_14] [i_8] [i_9 - 1] [i_8] [i_8] = (min((((!var_6) ? (((max(var_8, 12974)))) : var_5)), -991442603));
                        var_26 += (((!(arr_29 [i_14]))) && (((1 ? ((max(1, 52565))) : 991442603))));
                        var_27 = (min(var_27, (((509343231 || (((1 ? 0 : 8205628677934037078))))))));
                    }
                    arr_53 [i_8] = 1;
                    var_28 *= (((((var_3 ? 53873 : 240)))) || var_1);
                    arr_54 [i_8] [i_9] = (max((arr_29 [i_8 + 1]), ((var_0 ? var_2 : (arr_29 [i_8 + 2])))));
                }
            }
        }
    }
    var_29 = (((min(((var_0 >> (var_1 - 7501189841574083250))), var_12)) ^ var_10));
    #pragma endscop
}
