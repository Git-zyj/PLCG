/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            arr_13 [i_2] [i_1] [i_2] [i_3] [i_4] [i_3] [i_1] = 0;
                            arr_14 [i_4] [1] [i_2] [i_2] [i_1] [i_0] = -1;
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_17 [7] [i_1] [i_1] [1] [i_1] [i_1] [i_1] = ((max((arr_7 [i_0] [i_1] [i_1] [15]), var_1)));
                            arr_18 [i_0] [i_1] [i_2] [i_2] [i_5] [i_2] = (min((((~((1 << (arr_15 [i_3])))))), (-4293776130 % var_8)));
                            var_18 |= 0;
                            arr_19 [i_0] [i_0] = (((~(arr_7 [i_0] [i_2] [i_3] [i_5]))));
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            var_19 = ((var_13 ? (arr_3 [i_6 - 1]) : (arr_1 [i_2] [i_6 - 1])));
                            var_20 = (arr_11 [i_6 - 1] [i_6 - 1] [i_1] [i_3] [i_0]);
                        }
                        var_21 = (((((~(arr_3 [i_2])))) ? var_2 : ((((arr_2 [i_0]) < (arr_2 [i_0]))))));
                        arr_23 [i_3] [i_1] [i_1] [i_0] = min(((907569293 ? 1 : ((min(-20087, 203))))), (((((var_10 ? var_6 : (arr_1 [i_0] [i_2])))) ? ((min(25606, 1))) : ((min(29, var_3))))));
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_0] = (((~((3826157193 ? (arr_15 [i_7]) : -32760)))));
                        var_22 = (~((~(arr_10 [i_0]))));
                        arr_28 [i_7] [i_1] [6] [i_7] [i_1] [i_7] = (((arr_6 [i_0] [i_1] [3] [i_7]) ? (((min((arr_4 [i_1] [i_2] [i_7]), 1)))) : (((arr_4 [i_0] [i_1] [i_2]) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : 11662830384207199493))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                    {
                        arr_32 [i_8] [i_2] [i_1] [i_0] = (arr_9 [i_0] [i_2] [i_2] [i_8]);
                        var_23 = ((arr_30 [i_8] [i_2] [i_1] [i_0]) ? (arr_31 [i_1]) : (1 != 1));

                        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                        {
                            arr_35 [i_0] [i_1] [i_2] [i_9] = ((var_13 ? (arr_20 [i_0] [i_1] [i_2] [6] [i_9]) : 29));
                            var_24 = (max(var_24, var_9));
                            arr_36 [i_0] [0] [i_2] [i_8] [0] [i_2] = -723828525;
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            arr_41 [i_0] [i_2] [i_8] [i_10] = ((var_15 ? (arr_25 [i_0] [i_0]) : 907569286));
                            arr_42 [i_0] [i_0] [13] = ((4888966754895306418 ? (arr_12 [2] [2] [11] [i_2] [i_2] [i_8] [i_10]) : (arr_12 [3] [i_1] [i_2] [i_8] [i_8] [i_8] [i_8])));
                            arr_43 [i_0] [i_1] [15] [1] [1] = 35;
                            var_25 = (((arr_24 [i_0] [i_1] [i_1] [15] [i_10] [i_2]) ? -20 : var_2));
                        }
                        for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                        {
                            arr_47 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (((arr_44 [i_0] [5] [i_0] [9] [9] [i_0]) ? var_7 : (arr_44 [i_0] [i_0] [i_0] [i_0] [6] [i_0])));
                            arr_48 [i_0] [i_1] [i_0] [i_8] [i_8] [i_11] = (907569293 || -var_6);
                            var_26 = (max(var_26, (((907569297 ? var_13 : (arr_10 [i_0]))))));
                            arr_49 [1] [i_8] [i_2] [0] [0] = (((arr_3 [i_0]) ? (arr_44 [i_0] [i_0] [i_2] [i_8] [i_0] [i_2]) : 1));
                        }
                    }
                    var_27 = (arr_31 [i_1]);
                }
            }
        }
    }
    var_28 = var_16;
    var_29 = var_2;
    var_30 = var_15;
    var_31 = (~var_1);
    #pragma endscop
}
