/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_2] = 245;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = min(6, 241);
                                arr_17 [i_0] [i_0] [3] = ((1 ? var_0 : (((((234 ? 1099377410048 : var_9))) ? 2938308205 : (((max(114, 1))))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_5] [i_1] [5] [i_2] [i_5] = var_13;
                        var_21 = (arr_16 [i_2] [i_2] [i_2] [i_2] [i_2]);
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_0] [i_1] [i_2] [i_6] = (min((min((!1), (arr_12 [i_0] [i_6] [i_2] [i_6] [i_1]))), (((arr_4 [9] [i_2]) != (~1)))));
                        var_22 = (var_0 ^ var_19);
                        var_23 = ((((-(((250 < (arr_8 [i_0])))))) & (((arr_15 [10] [i_1] [1] [10]) ? (!var_0) : ((~(arr_18 [i_0] [10] [i_2] [i_1] [i_0] [i_0])))))));
                        var_24 = ((((min(0, 22777))) ? (((var_5 >> ((min((arr_16 [i_2] [1] [i_2] [1] [i_2]), var_0)))))) : ((1705330011 | (arr_3 [i_1])))));
                        var_25 = (((~var_13) ? (max(var_5, var_12)) : (arr_6 [i_6] [i_2] [i_1] [i_0])));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_26 = (arr_20 [i_0] [i_0] [2] [i_7] [i_8]);
                                arr_32 [i_0] [16] [i_0] [16] [i_8] = var_4;
                                arr_33 [i_8] = 255;
                                var_27 |= ((min(-1, ((var_18 ? (arr_31 [i_0] [i_1] [i_2] [i_7] [i_8]) : (arr_14 [i_0] [i_1] [12] [i_2] [i_7] [i_8] [i_8]))))));
                            }
                        }
                    }
                    arr_34 [16] [16] [15] = -var_9;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            {

                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    var_28 -= (min(((-(arr_36 [i_9]))), ((((arr_42 [i_11]) <= (!var_12))))));
                    var_29 = ((var_16 ? var_10 : (arr_42 [i_9])));
                }
                var_30 = (min((((arr_40 [i_9] [11] [i_10]) & var_14)), (((arr_40 [i_9] [i_9] [i_9]) ? (arr_40 [i_9] [i_10] [i_10]) : (arr_40 [i_10] [i_9] [i_9])))));
                arr_43 [i_9] [22] [i_9] = 1;
            }
        }
    }
    var_31 = (var_2 << (var_7 - 758988499));
    var_32 = (min(var_32, var_4));
    #pragma endscop
}
