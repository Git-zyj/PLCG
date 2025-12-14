/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_20 = (min(var_20, ((min((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : var_13)), (((!((min((arr_0 [8]), var_13)))))))))));
        var_21 = (min(var_21, (arr_1 [i_0] [i_0])));
        var_22 &= (((var_2 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))));
        var_23 = (arr_0 [i_0]);
    }
    var_24 |= var_17;

    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_25 -= ((((((arr_1 [i_1] [15]) - var_14))) / ((1 ? ((var_1 ? (arr_4 [i_1] [7]) : var_17)) : (arr_4 [i_1] [i_1])))));
        var_26 = (((((var_2 ? (arr_4 [i_1] [i_1]) : 4294967295))) ? ((var_14 ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1]))) : ((min((arr_1 [i_1] [i_1]), (arr_4 [i_1] [9]))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_27 = ((((3117466207273431404 ? (arr_1 [i_1] [i_1]) : (arr_0 [i_3])))) && ((max(var_19, (arr_0 [i_3])))));
                        arr_15 [i_1] [i_2] [i_3] [i_2] = 116;
                        arr_16 [i_2] [i_2] [i_2] [i_4] [8] = (((((arr_12 [i_1] [i_2] [i_2] [7]) ? (arr_7 [i_2]) : (!var_19))) ^ (max(var_7, (~1)))));
                    }
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                {
                    var_28 = (max(var_28, (((((-(((arr_17 [i_7] [i_5]) ? var_5 : var_16))))) ? ((var_8 ? (((arr_19 [i_5]) * 0)) : (arr_22 [i_5] [i_5 + 2] [i_7 + 1]))) : var_4))));
                    arr_26 [i_7] [i_7] = -var_14;
                }
            }
        }
        var_29 = (max(var_29, 224324420));
        var_30 = ((-((((arr_25 [i_5]) < var_18)))));
    }
    for (int i_8 = 2; i_8 < 20;i_8 += 1)
    {
        arr_30 [i_8 + 2] = arr_27 [i_8 + 1];
        var_31 = min(((((arr_28 [i_8 + 4] [i_8 + 1]) ? (arr_28 [i_8 + 3] [i_8 + 1]) : var_10))), ((-(max(var_5, var_10)))));
        var_32 = (max((max(1, 201326592)), 117));

        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
        {
            var_33 = ((var_18 * (((-(arr_29 [i_8 - 1] [i_8 - 1]))))));
            arr_33 [i_8] [i_8 + 4] [i_8] = var_6;
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
        {
            arr_37 [i_10] [i_8] = (((-(arr_29 [i_8 + 3] [i_8 + 2]))));
            arr_38 [i_10] [i_10] [i_8] = (((~((9223372036854775807 << (((((arr_34 [i_10]) + 4530140297965653139)) - 36)))))));
        }
        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
        {
            arr_43 [i_8] = min((!var_3), (((max(4245493091, (arr_29 [i_8] [i_11]))) + (((min(var_15, 0)))))));
            var_34 |= (arr_36 [i_8] [i_8 + 1]);
            var_35 -= (min((arr_41 [i_8 - 1] [i_8 - 1] [i_8]), ((((arr_41 [i_8] [i_8 + 1] [i_8]) < (arr_41 [i_11] [i_8 + 3] [i_8]))))));
            var_36 ^= ((((((!(arr_32 [i_8]))))) ^ (min(var_0, (arr_39 [i_8 + 4] [i_8 + 3])))));
        }
    }
    #pragma endscop
}
