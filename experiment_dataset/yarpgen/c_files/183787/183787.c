/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_20 += ((min((arr_4 [9]), (var_2 - var_2))));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = ((((max(var_16, (arr_1 [i_0])))) ? (min(-var_17, (arr_1 [i_0]))) : (((((-(arr_5 [i_0] [i_1] [i_1] [i_2])))) ? (min(var_19, 0)) : var_8))));
                }
            }
        }
    }
    var_21 &= ((((((var_10 ? var_8 : var_6)))) ? 30440 : ((min(var_7, var_18)))));
    var_22 = (!var_14);
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                {

                    for (int i_6 = 3; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_23 *= (arr_4 [i_5 + 1]);
                        var_24 = ((((min((min((arr_11 [i_6 - 3]), (arr_14 [i_3 - 2] [i_4] [i_5]))), (arr_16 [15] [15] [i_3] [15] [i_4])))) ? (arr_13 [i_3 - 1]) : 35096));
                    }
                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        var_25 = (arr_5 [i_3] [i_4] [i_4] [6]);

                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            arr_22 [i_7] [i_5] [i_5] [i_3 + 3] = (arr_4 [i_3 + 2]);
                            var_26 = (((arr_5 [i_4] [i_5] [i_5 + 1] [10]) ? (arr_5 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_8]) : var_19));
                            arr_23 [i_8] &= (arr_14 [i_8] [i_7] [i_8]);
                            var_27 = (~(arr_11 [i_3 - 3]));
                        }
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            var_28 = 584603018;
                            var_29 = (arr_11 [i_3 + 1]);
                            arr_26 [i_3 + 1] [i_3] [i_5] [i_5] [i_7 - 3] [i_7 - 3] [8] = -var_16;
                            var_30 = (min(var_30, var_7));
                        }
                        for (int i_10 = 1; i_10 < 15;i_10 += 1) /* same iter space */
                        {
                            var_31 = (min(var_31, ((((arr_19 [i_3 - 1]) ? ((((arr_15 [i_3] [i_3] [i_3]) ? var_15 : var_16))) : (arr_7 [i_5 - 1] [i_7 - 2] [i_10 - 1]))))));
                            var_32 |= (((((var_0 ? (arr_0 [i_7]) : (arr_4 [i_4])))) ? (arr_0 [i_7 - 2]) : (((arr_0 [1]) ? var_16 : (arr_19 [9])))));
                        }
                        for (int i_11 = 1; i_11 < 15;i_11 += 1) /* same iter space */
                        {
                            var_33 = (max(var_33, ((((((arr_19 [14]) ? var_17 : (arr_28 [i_3] [i_3] [i_3] [2] [i_3 - 3] [i_3] [i_3 - 3]))) <= (((((arr_24 [i_3] [i_3] [i_7] [i_11 + 3]) >= (arr_24 [i_3] [i_4] [i_5 - 1] [i_7 - 2]))))))))));
                            var_34 = (~var_2);
                            arr_34 [i_3] [i_4] [i_4] [i_5] = ((var_7 ? var_18 : (arr_21 [i_3 + 1] [i_3 + 2] [i_3 + 2] [i_3] [i_5 + 1] [i_11 + 1])));
                        }
                        var_35 *= (arr_11 [14]);
                        var_36 = ((~(arr_12 [i_3 + 1] [i_3 + 1])));
                    }

                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        arr_38 [i_5] = ((((min((arr_21 [i_3 - 1] [i_3 - 3] [i_4] [14] [i_12] [i_12]), (arr_21 [9] [9] [i_4] [i_4] [i_4] [i_4])))) ? (arr_25 [i_3 + 1] [i_3] [i_3] [i_3] [i_12]) : var_12));
                        var_37 = (((((var_13 ? ((min(var_1, var_2))) : (((arr_32 [i_3] [i_3] [i_3] [i_5] [i_12] [i_12]) ? (arr_9 [i_4]) : (arr_5 [i_3] [i_3] [i_3 - 1] [i_3])))))) ? var_17 : 36583));
                        arr_39 [2] [i_5] [i_4] [2] &= (arr_0 [i_3 - 1]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
