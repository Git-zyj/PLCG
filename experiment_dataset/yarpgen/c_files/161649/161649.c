/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_14);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_0 [2] [i_0]) ? (arr_1 [i_0] [i_0]) : ((-(arr_1 [i_0] [i_0])))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_9 [i_0] [i_0] = ((((!(arr_3 [i_0] [i_0])))));
                arr_10 [i_0] [i_0] [i_0] = (arr_8 [8] [i_0] [i_1] [8]);
            }
            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        {
                            arr_19 [i_0] [i_1] [i_0] [i_4] [i_5] = (((!var_8) ? (((!(arr_13 [i_0] [i_1] [i_3] [i_3 + 1])))) : (arr_12 [i_3])));
                            var_16 = var_11;
                        }
                    }
                }
                arr_20 [i_0] [0] [i_0] = (((arr_18 [i_1] [i_1] [i_3 - 1] [0] [i_3 + 2]) ? (arr_18 [i_0] [i_0] [i_3 - 1] [i_3 - 1] [5]) : (arr_18 [i_1] [i_1] [i_3 + 1] [i_3 - 1] [i_1])));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        {
                            arr_25 [i_3 + 2] [1] [i_1] [i_3] [8] [i_3 - 1] [1] &= (arr_11 [i_0] [i_0] [i_0]);
                            arr_26 [i_7] [i_0] [i_0] [i_0] [i_0] = (((arr_17 [i_3] [i_3 + 2] [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3]) ? (arr_16 [i_3 - 1]) : (arr_17 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3] [1])));
                        }
                    }
                }
                var_17 = var_2;
            }
            arr_27 [i_0] [i_0] [i_0] = ((var_2 ? var_9 : (!var_6)));
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            arr_30 [i_0] = var_3;
            arr_31 [i_0] = ((var_1 ? (arr_8 [i_0] [1] [i_8] [1]) : (((arr_23 [i_0] [i_0] [i_0] [6] [i_8] [i_8] [i_8]) ? var_12 : var_2))));
            var_18 = var_4;
            arr_32 [i_0] [i_0] = ((((((arr_15 [8] [9] [i_0] [i_8]) ? (arr_24 [i_0] [6] [0] [7]) : var_9))) ? (arr_28 [i_0] [i_0] [i_0]) : var_4));
        }

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {

            for (int i_10 = 2; i_10 < 8;i_10 += 1)
            {
                arr_37 [i_0] [1] = (~var_6);
                var_19 *= (((((-1 ? -1 : -13))) ? ((-(arr_15 [i_0] [i_0] [0] [i_0]))) : (!var_13)));
            }
            arr_38 [5] [i_0] [5] = ((var_2 ? (arr_33 [4] [i_0] [i_9]) : (arr_29 [i_9] [9])));
            arr_39 [i_0] [i_0] [i_0] = (((((~(arr_13 [1] [5] [1] [i_9])))) ? (~var_6) : (arr_29 [5] [i_0])));
            var_20 |= (((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? ((((arr_6 [3] [3]) ? var_9 : var_14))) : var_5));
            var_21 *= ((var_4 ? (arr_21 [i_0] [i_0] [i_0] [8]) : var_6));
        }
    }
    for (int i_11 = 0; i_11 < 0;i_11 += 1) /* same iter space */
    {
        var_22 = ((((max((min((arr_40 [i_11]), var_1)), (((arr_42 [i_11 + 1]) ? (arr_42 [i_11]) : (arr_42 [10])))))) ? (~var_11) : (((!(arr_40 [i_11]))))));
        arr_43 [i_11 + 1] = ((min((((arr_40 [i_11 + 1]) ? (arr_42 [i_11 + 1]) : var_4)), ((min(var_6, var_7))))));
        var_23 = (max((min(var_1, (arr_42 [i_11 + 1]))), var_9));
    }
    for (int i_12 = 0; i_12 < 0;i_12 += 1) /* same iter space */
    {
        arr_46 [3] = (arr_40 [i_12 + 1]);
        var_24 = (max(((~(min(17532265115497765769, 1)))), var_0));
    }
    #pragma endscop
}
