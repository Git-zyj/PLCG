/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 = ((~((~(min(-61, var_15))))));
                                var_20 = (max(var_20, ((max((((~var_12) <= (arr_3 [8]))), (min((arr_0 [i_4 - 1]), (arr_0 [i_4 - 1]))))))));
                                var_21 = (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [3]);
                            }
                        }
                    }
                    var_22 = ((-((~(arr_3 [i_1])))));
                    var_23 = (max((min(var_7, (arr_6 [i_0] [i_0] [i_1] [i_0]))), ((max(var_15, (61 - 45))))));
                    var_24 = max(((((((((-2147483647 - 1) != 1159463149)))) == 1159463149))), var_2);
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_25 = (arr_5 [9]);
        var_26 = var_17;

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_27 = (max(var_27, ((((!(var_0 / var_14)))))));
            var_28 += (min((((var_15 > (((!(arr_0 [11]))))))), ((1 ? (3135504148 + 8302080923570531410) : var_17))));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 0;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 12;i_9 += 1)
                    {
                        {
                            var_29 = (!var_11);
                            var_30 = var_9;
                        }
                    }
                }
            }
            var_31 = (arr_23 [i_5] [i_5] [i_6] [i_6] [10] [i_6]);
        }
        var_32 += (((((~(106 && -26)))) ? -1 : (!-var_4)));
        var_33 = (-13564 % 1);
    }
    for (int i_10 = 3; i_10 < 17;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 18;i_12 += 1)
            {
                {
                    var_34 = var_18;
                    var_35 = var_16;
                    var_36 |= (min((arr_9 [i_10] [i_11]), (((-((~(arr_32 [0] [i_11] [i_11]))))))));
                    var_37 &= (arr_5 [10]);
                }
            }
        }
        var_38 = ((arr_11 [i_10] [i_10] [5]) && (arr_30 [i_10 - 1] [i_10 - 1]));
        var_39 = (((arr_37 [7] [7] [i_10] [i_10]) != (((((arr_28 [i_10 - 1]) || var_9))))));
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 11;i_13 += 1)
    {
        var_40 -= (((var_2 - (arr_8 [i_13] [14] [i_13] [i_13] [i_13]))));
        var_41 = ((-(~9358837609401715065)));
        var_42 = (arr_7 [i_13] [i_13] [i_13 + 2] [i_13]);
    }
    /* LoopNest 2 */
    for (int i_14 = 4; i_14 < 11;i_14 += 1)
    {
        for (int i_15 = 1; i_15 < 11;i_15 += 1)
        {
            {
                var_43 = (min((150994944 + 25), (((arr_1 [i_14] [i_15 + 1]) * (arr_27 [i_15 + 1] [i_15 + 1] [i_14] [i_14 - 3] [i_14])))));
                var_44 = 1;
            }
        }
    }
    #pragma endscop
}
