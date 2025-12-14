/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((min((arr_2 [i_0] [i_0]), var_17)) == ((((var_4 == (arr_2 [i_0] [i_1])))))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_2] = var_10;
                    arr_9 [19] [i_0] [7] = (arr_2 [i_0] [6]);
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    arr_12 [i_0] [i_0] [i_3] = (((!((var_16 == (arr_0 [i_3]))))));
                    arr_13 [i_0] [i_3] = (min(((((var_8 == (arr_2 [i_0] [i_1]))) ? (((min(var_14, (arr_6 [i_3] [i_1] [i_0]))))) : ((536870911 ? 536870920 : -10)))), (((((((arr_7 [19] [19] [i_0] [19]) == var_16))) == ((((arr_6 [i_0] [i_1] [i_3]) == var_10))))))));
                    arr_14 [i_0] [i_1] [i_1] [i_0] = ((((((arr_3 [i_0] [i_1] [i_1]) + var_6))) ? (((arr_3 [i_0] [i_1] [i_1]) + (arr_3 [i_0] [i_0] [i_0]))) : (((arr_3 [i_0] [i_0] [i_3]) + (arr_3 [i_0] [i_1] [i_1])))));
                    var_18 = (min(var_18, (((var_1 || ((((var_1 && (arr_1 [i_1] [i_1]))))))))));
                }

                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_19 = (var_16 == (((min((arr_15 [i_0] [i_1] [i_4]), var_5)))));
                    var_20 = var_1;
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_21 = ((((max((var_6 == var_1), (arr_10 [i_0] [20]))))) == (((((arr_18 [i_0] [i_0] [i_0]) == (arr_0 [i_7]))) ? (((arr_18 [i_0] [i_0] [21]) ? (arr_21 [i_0] [10] [i_1] [8] [i_6] [i_0]) : var_14)) : (~var_5))));
                                arr_28 [i_0] [5] [i_5] [i_0] [i_0] [i_5] = (984448526 == 3758096384);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 22;i_9 += 1)
        {
            {

                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    arr_36 [i_9] [i_9 - 1] [i_9] [i_9] = (min((((arr_32 [i_8] [i_9 + 2]) << (((arr_33 [15] [15] [i_10]) - 12990)))), ((~(arr_29 [i_9 + 1] [i_9 + 1])))));
                    arr_37 [i_9] = min(((((-(arr_30 [i_8]))))), ((~(arr_30 [i_9]))));
                }
                arr_38 [i_9] = (arr_32 [i_9 - 1] [i_9 + 1]);

                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    var_22 += ((((((min((arr_32 [i_8] [i_9]), var_15))) || ((max(var_14, (arr_32 [i_8] [10])))))) && (var_13 || var_2)));
                    var_23 = (min(var_23, ((+(min((arr_32 [i_9 - 1] [i_9 - 1]), 536870911))))));
                    arr_41 [i_8] [i_9] [i_11] [i_9] = ((((((var_1 + 76) ? -var_6 : var_2))) == (max((var_2 | var_9), (((var_10 ? var_2 : (arr_32 [i_8] [i_11]))))))));
                    var_24 = (min(var_24, (((var_16 == ((((arr_32 [i_9 - 1] [i_9]) == (arr_32 [i_9 - 1] [i_9])))))))));
                }
            }
        }
    }
    var_25 = (max(var_25, -77));
    var_26 = (min(var_26, var_16));
    var_27 = ((((((var_15 ? var_15 : var_15)) & (var_7 | var_1)))) ? (2196460352 == var_4) : var_14);
    #pragma endscop
}
