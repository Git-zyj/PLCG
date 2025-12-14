/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (((((0 - ((min((arr_1 [1] [i_1]), var_1))))) < var_9)))));
                    arr_7 [i_0] [i_0] [i_1 + 1] [i_0] |= 0;

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        arr_10 [i_0] [i_2 + 3] = (arr_9 [i_0] [i_0] [i_1 + 1] [i_2] [i_3 + 1] [i_3]);
                        var_20 = (~15164);
                        var_21 = (max(var_21, ((min((arr_9 [i_2] [i_2 + 2] [i_2] [i_2] [i_2 - 1] [i_3 + 1]), (arr_9 [i_2] [19] [i_2 + 3] [i_2] [i_2 - 1] [i_3 + 1]))))));
                        var_22 -= (arr_6 [i_1 + 1]);
                    }
                    for (int i_4 = 3; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        var_23 = (max(var_23, (arr_5 [i_0] [i_0] [i_0])));
                        var_24 = (arr_8 [i_0] [i_1 + 1] [i_2 - 1] [1] [i_1 + 1] [1]);
                    }
                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        var_25 = ((78 ? (arr_4 [8] [23] [i_2 + 1] [i_5]) : (arr_14 [i_1 - 1])));

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_26 = 890780643;
                            arr_19 [i_0] [i_0] [i_0] [i_0] = (-(arr_3 [i_1 + 1] [i_2 - 1] [i_2 + 3]));
                        }

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_22 [i_0] [4] [i_2] [i_5] [i_7] = ((((arr_11 [i_1] [i_1] [i_1] [i_7]) ? var_10 : (arr_14 [i_0]))) % (arr_12 [i_1 - 1] [i_2 - 1]));
                            arr_23 [i_0] [i_1] [i_0] [i_2 + 2] = (var_14 != (arr_0 [i_1 + 1] [i_5]));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_28 [i_0] [i_1] [i_2 + 1] = (((arr_9 [i_2 + 1] [i_1] [6] [11] [i_2 + 1] [i_2]) ? 4100174232599585098 : (arr_16 [i_2 + 3] [i_1 + 1] [i_2 + 3] [i_1 + 1])));
                            arr_29 [i_5] [i_5] [i_5] [i_5 + 2] [i_5] = ((((78 ? (arr_4 [i_0] [0] [i_2 - 1] [i_2 - 1]) : var_1)) >= (arr_21 [4] [i_1] [1] [4] [i_8])));
                        }

                        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                        {
                            var_27 = ((!(((var_16 ? var_7 : 1804)))));
                            var_28 += (arr_17 [i_0] [i_1] [i_2] [i_5 + 3] [22]);
                            arr_32 [i_0] [i_0] [5] [i_0] [i_0] [i_0] = var_8;
                        }
                        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                        {
                            var_29 -= var_1;
                            var_30 = (max(var_30, (((var_9 ? var_6 : (arr_24 [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_10] [i_10] [i_10]))))));
                            arr_36 [i_0] [i_1] [i_1] [i_5] [5] = (arr_4 [i_1] [i_2 + 1] [i_5 - 3] [i_10]);
                            var_31 = (max(var_31, 79));
                        }
                    }
                    var_32 &= var_13;
                }
            }
        }
    }
    var_33 = ((var_4 > (((!((min(var_6, var_8))))))));
    #pragma endscop
}
