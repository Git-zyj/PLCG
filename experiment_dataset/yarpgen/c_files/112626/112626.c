/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += 168;
    var_19 = (+(max((3654699458 - 2476343041), (var_14 - 193))));
    var_20 = (var_13 == ((((var_1 == (var_8 + var_14))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 204;
        var_21 = (((arr_1 [i_0] [i_0]) / var_1));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_22 += var_11;
        arr_6 [i_1] [i_1] = ((~(arr_2 [9])));
        var_23 = (~(((var_4 > (arr_0 [20])))));
        var_24 = ((var_5 ? (arr_0 [20]) : var_10));
    }
    for (int i_2 = 3; i_2 < 14;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = 4584;
        var_25 = (arr_8 [i_2 - 3]);
        arr_12 [i_2] = ((-3225 + (max(var_13, (((arr_0 [0]) ? var_1 : var_3))))));
    }
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        arr_15 [i_3] = (max((arr_0 [i_3]), (arr_0 [i_3])));

        /* vectorizable */
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            arr_19 [i_3] = var_14;
            arr_20 [i_3] [i_3] = (((arr_16 [i_4 + 1]) / 63));
            arr_21 [i_3] = 245760;
            arr_22 [i_3] = (arr_18 [i_3]);
            var_26 = (min(var_26, (((!(arr_17 [i_4 - 1] [i_4] [i_3]))))));
        }
        for (int i_5 = 3; i_5 < 18;i_5 += 1)
        {
            arr_25 [i_3] = ((~(15009 < 1)));
            var_27 = arr_14 [i_5] [0];
            arr_26 [i_3] = var_14;
        }
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            arr_30 [i_3] [i_6] = (((max(((var_6 ? var_9 : var_14)), (arr_24 [i_6 + 2] [i_3] [i_3 + 1]))) != ((min((var_9 < var_9), ((var_6 / (arr_17 [i_3] [i_6 + 2] [i_6 - 1]))))))));

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    var_28 = ((~((~(max(-120, 4005909804))))));
                    arr_37 [i_3] [i_6] [i_3] [i_7] [i_3] [i_6] = ((~(min(1073741823, 8191))));
                    arr_38 [i_3] [i_6] [i_3] [i_3] = (arr_16 [i_7]);
                }
                arr_39 [i_3] [i_3] [i_3] [i_3] = var_17;
                arr_40 [i_3] [i_6] [i_7] = ((-(min((16383 - 3488490735), (4256929146 / 806476581)))));
            }
        }
        arr_41 [i_3] = 134;
        arr_42 [i_3] [i_3] = var_15;
    }
    #pragma endscop
}
