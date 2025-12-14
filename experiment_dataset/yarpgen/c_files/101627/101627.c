/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (((((max((arr_0 [i_0]), (arr_1 [i_0]))) >> (((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))) - 1969111964)))) * ((((min((arr_0 [i_0]), var_1)) > (!56))))));
        var_14 = (min((min(var_13, (min(var_12, var_12)))), ((((((var_13 && (arr_0 [i_0])))) > 1)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_15 = (((arr_0 [i_1]) ? (arr_1 [i_1]) : (arr_0 [i_1])));
        arr_5 [i_1] [i_1] = ((51 ? 51 : (arr_4 [i_1] [i_1])));
        var_16 = 51;
        arr_6 [i_1] = arr_0 [i_1];
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = 63;

        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            arr_14 [i_2] [i_2] [1] = (arr_12 [i_3 + 1] [i_3 - 1] [i_3]);
            arr_15 [i_2] [i_2] = (((arr_13 [9] [1]) ? (arr_7 [i_2]) : (arr_10 [i_3 + 1])));
            arr_16 [i_2] [i_3] = var_1;
            var_17 = (((arr_0 [i_3 - 1]) % (arr_13 [i_2] [i_2])));
        }
        var_18 = (((arr_1 [15]) | (arr_9 [i_2] [i_2])));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_19 &= (arr_17 [i_4] [i_4]);
        arr_21 [i_4] = (min(1, ((-((min((arr_18 [i_4] [4]), var_13)))))));
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_31 [i_8 - 1] [i_5] [i_5] [14] = ((!(((var_1 ? (arr_24 [i_5 + 4] [i_6 + 1]) : (arr_27 [i_5 + 1] [i_6 - 1]))))));

                            for (int i_9 = 1; i_9 < 1;i_9 += 1)
                            {
                                var_20 = (min(-24, (((((-33 ? 126 : 0))) ? ((min(-51, 72))) : 0))));
                                var_21 = (((((!((!(arr_26 [i_9])))))) + (arr_32 [i_5] [i_8] [i_8] [i_7 - 3] [i_6] [i_5])));
                                arr_35 [i_5 - 1] [8] [i_6 - 1] [i_5] [i_7] [i_6 - 1] [3] = (153 | 1);
                            }
                            arr_36 [i_5] [i_5] [i_6] [i_7 - 1] [i_8] [i_8 - 1] = (max(((((arr_33 [i_5 - 1] [i_6 + 2] [i_5] [i_8] [i_8 - 1]) ? (arr_28 [i_6] [i_6 + 2] [i_8 - 1]) : (arr_28 [i_5] [i_6 + 1] [i_8 - 1])))), (arr_26 [3])));
                        }
                    }
                }
                arr_37 [i_5] [i_5] [i_5] = (-46 % 1);
                arr_38 [i_5] = (31081 >= 3);
            }
        }
    }
    var_22 = 1;
    var_23 = (min(((min(((68 ? var_2 : var_8)), ((min(var_6, var_7)))))), ((((min(var_10, var_8))) ? (((var_3 ? var_9 : var_4))) : (max(var_12, var_3))))));
    #pragma endscop
}
