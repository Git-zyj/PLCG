/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_13 = ((2053981412 ? (arr_5 [i_3 + 2] [i_0] [i_0] [i_1 - 1]) : (arr_5 [i_3 + 2] [i_0] [i_0] [i_1 + 1])));
                            var_14 = ((~(arr_4 [i_0] [3])));
                            var_15 = ((2240985884 ? (arr_1 [i_0]) : 91289168));
                            var_16 = (((arr_3 [i_1 - 1] [i_0] [i_3 + 2]) ? var_4 : (arr_8 [i_3 - 1] [i_1 + 1] [i_2] [i_0])));
                        }
                        arr_13 [i_0] = -3907450450781508179;
                        var_17 -= (arr_10 [i_0] [i_1 - 1] [2] [i_3]);
                    }
                    var_18 = ((((min((arr_1 [i_0]), (max((arr_0 [i_0] [i_0]), 2240985884))))) ? (min(2240985884, (arr_7 [i_1 + 1] [i_0]))) : (arr_10 [i_0] [i_0] [i_1] [i_2])));
                }
            }
        }
        var_19 = ((2147483647 == 4613) / (~var_10));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        var_20 = (min(var_20, (((~(arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        var_21 = (min((arr_22 [i_5] [i_8 + 1] [i_8] [i_6]), (max(7, (arr_22 [i_7] [i_8 + 1] [i_8] [i_6])))));
                        var_22 = (min((((36052 ^ ((~(arr_23 [i_6] [i_6] [i_6] [i_6])))))), 10799008539755467619));
                    }
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        var_23 = ((((min((min((arr_4 [i_6] [i_6]), 2053981436)), (((!(arr_23 [i_6] [i_6] [i_6] [i_9]))))))) ? ((max((var_5 && var_6), (arr_9 [i_9] [i_6] [i_6] [i_5])))) : (!-11)));
                        var_24 = (max(var_24, ((max(117, 2240985902)))));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                var_25 = ((8388607 ? (((~(((!(arr_23 [i_6] [i_6] [3] [i_6]))))))) : ((((min(var_10, (arr_20 [i_5] [i_5])))) ? (max(var_10, -1)) : 13))));
                                var_26 = ((+(max((arr_20 [i_6] [i_6]), ((max((arr_17 [i_5] [i_6] [i_7]), 31528)))))));
                            }
                        }
                    }
                    arr_33 [i_6] = ((var_2 ? ((((!(((1 ? var_10 : (arr_8 [i_5] [i_6] [4] [i_6])))))))) : (((arr_14 [i_5]) ? (arr_7 [i_6] [i_6]) : 117))));
                    var_27 = (min(var_27, (((((min((min(var_3, (arr_12 [i_7]))), (arr_1 [i_7])))) != (~var_11))))));
                }
            }
        }
        var_28 = (max(var_28, ((min(12278753740133744594, var_4)))));
        arr_34 [i_5] = (arr_23 [0] [i_5] [i_5] [0]);
        var_29 = ((((min((arr_30 [i_5] [i_5] [i_5] [14] [i_5]), (arr_30 [i_5] [i_5] [i_5] [i_5] [i_5])))) || 13));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
    {
        var_30 = ((((arr_19 [i_12]) ^ 60945)));
        var_31 = ((2053981423 ? (arr_11 [i_12] [7] [i_12] [i_12] [i_12]) : (arr_11 [i_12] [i_12] [i_12] [i_12] [i_12])));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        var_32 = (var_5 ? -1715354514 : (!var_5));
        var_33 = ((var_11 ^ var_3) ? (((!(-9223372036854775807 - 1)))) : ((var_6 ? var_6 : var_0)));
    }
    var_34 = var_6;
    #pragma endscop
}
