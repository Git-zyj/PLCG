/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!((!((max(1629220592, 8828))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = 1;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_17 -= (-127 - 1);
                                var_18 += (((!94) ? 34954 : var_7));
                                var_19 = var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {

                /* vectorizable */
                for (int i_7 = 2; i_7 < 23;i_7 += 1)
                {
                    arr_22 [i_5 - 1] [i_5 + 1] [i_5] [i_5] = ((!(arr_21 [4] [i_6] [i_6] [i_5])));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                arr_27 [i_5 - 1] [i_5 + 1] [i_6] [i_7 + 1] [i_8] [i_8] = ((!(arr_24 [i_5] [i_6] [i_8] [i_8] [i_9] [i_9])));
                                var_20 |= ((var_13 ? (arr_20 [i_5] [i_5] [i_5 - 1]) : (arr_20 [i_5 + 1] [i_5] [i_5 - 1])));
                                arr_28 [i_5 - 1] [i_6] [i_8] [i_8] [i_9] = var_0;
                                arr_29 [i_8] [i_6] [i_6] [i_6] [i_9] = var_9;
                            }
                        }
                    }
                }
                for (int i_10 = 1; i_10 < 24;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 22;i_12 += 1)
                        {
                            {
                                var_21 = (arr_23 [i_5 - 1] [i_5 + 1] [i_5] [i_5] [i_5] [i_5 + 1]);
                                var_22 = (min(var_22, ((((var_10 ? (max((arr_37 [i_5] [i_5 + 1] [i_5 - 1] [i_6] [i_5] [1] [i_5]), var_8)) : ((((var_8 >= (arr_16 [i_5 - 1] [i_10 + 1]))))))) ^ var_8))));
                            }
                        }
                    }
                    var_23 = (max((arr_37 [i_5] [i_5] [i_5 + 1] [i_6] [i_5 + 1] [i_5] [i_5 + 1]), (min((min((arr_18 [i_5] [3]), (arr_24 [24] [i_6] [i_6] [i_6] [i_6] [i_6]))), (arr_31 [i_5 - 1] [i_5 - 1])))));

                    for (int i_13 = 0; i_13 < 0;i_13 += 1) /* same iter space */
                    {
                        arr_41 [i_5 - 1] [i_6] [i_5 - 1] [i_5 - 1] = var_12;
                        var_24 = ((var_4 ? ((((arr_32 [i_5] [i_5] [i_5]) ? var_0 : (!var_3)))) : (((arr_32 [i_10] [i_6] [i_10]) ? -84 : 57087))));
                        var_25 = (max(var_14, (!1)));
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 0;i_14 += 1) /* same iter space */
                    {
                        var_26 = var_4;
                        arr_46 [i_5] [i_5] [0] [i_5] [11] = var_4;
                        arr_47 [i_5 - 1] [i_10] [18] [i_14 + 1] = (~411043100);
                    }
                    var_27 = (min(var_27, (arr_26 [i_6])));
                    arr_48 [i_5] = var_12;
                }
                for (int i_15 = 3; i_15 < 23;i_15 += 1)
                {
                    var_28 = (((((var_14 * (arr_26 [i_6])) / (arr_18 [20] [i_6])))));
                    var_29 |= (var_9 >= 47397);
                }
                var_30 += min(4, ((10823 ? var_7 : (arr_16 [i_6] [i_5 - 1]))));
            }
        }
    }
    var_31 = var_0;
    var_32 = (min(var_32, (((1008 ? var_3 : var_1)))));
    #pragma endscop
}
