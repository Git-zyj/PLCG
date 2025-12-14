/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_1] = (15092 ? ((-(arr_0 [11] [i_1]))) : var_19);
                var_20 &= ((-((var_1 ? (arr_1 [i_0]) : (arr_1 [18])))));
                var_21 = (arr_3 [i_0] [i_0]);
                var_22 = (max(var_22, 15104));
                var_23 = (max(var_23, -var_14));
            }
        }
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (min((((arr_4 [i_2]) ? var_12 : 5808313424473928653)), (((var_1 ? var_11 : var_18)))));
        arr_10 [i_2] [i_2] = (-(max(553522588989112436, -347913185548851427)));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {

                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        var_24 = ((+((var_2 ? (arr_15 [i_6]) : (arr_20 [i_6] [i_6 - 1] [i_6 + 1] [i_6] [i_6] [i_6])))));
                        var_25 = var_13;
                        var_26 += var_6;
                    }
                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        var_27 = (min(1241102524571732892, 8954567193793509978));
                        arr_28 [i_3] = (((((var_19 ? 21718 : var_9))) ? ((~(((arr_19 [i_5]) ? var_1 : var_10)))) : (((-15093 ? (arr_13 [i_7 + 2]) : (arr_13 [i_4]))))));
                        var_28 = (((arr_6 [i_7 + 1] [i_7 + 1]) ? ((~((min((arr_24 [i_3] [i_4] [i_5] [i_7]), var_1))))) : var_8));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        arr_31 [8] [i_3] [i_3] [i_3] = ((var_18 ? 9427 : var_15));
                        arr_32 [i_3] [i_3] [i_3] [i_3] = (arr_13 [i_4]);
                        arr_33 [i_3] [i_3] [i_3] [i_3] [i_8] = (~2225);
                    }
                    var_29 = ((var_6 ? var_2 : (arr_2 [i_5] [i_5] [i_5])));
                    arr_34 [i_4] [i_4] [i_3] [i_3] = (var_4 ? var_17 : (!-15093));
                }
            }
        }
        var_30 = ((!(((736771676 ? var_2 : 2706614022397594753)))));
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        var_31 = (max(var_31, (arr_14 [i_9] [i_9])));
        var_32 = ((((~(arr_15 [i_9])))) ? ((var_10 ? (arr_30 [i_9] [i_9] [i_9] [i_9] [i_9]) : var_9)) : (((arr_7 [2]) ? var_1 : (arr_30 [i_9] [i_9] [i_9] [i_9] [i_9]))));
        arr_38 [15] = 738612761048608422;
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 19;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 19;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 19;i_13 += 1)
                        {
                            {
                                var_33 = var_4;
                                var_34 = ((~((var_7 ? (arr_37 [i_11 - 3]) : (arr_37 [i_13 - 2])))));
                                var_35 = var_3;
                                var_36 = var_19;
                            }
                        }
                    }
                    var_37 = ((var_6 ? ((((2270820015902234023 ? 3299769332 : 110)) ^ (-21006 <= var_4))) : var_12));
                }
            }
        }
    }
    #pragma endscop
}
