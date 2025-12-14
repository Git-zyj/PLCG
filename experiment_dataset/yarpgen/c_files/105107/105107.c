/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    var_17 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_18 = var_3;
                        var_19 = ((-(arr_2 [i_0] [i_0])));
                        var_20 += ((~((~(arr_8 [i_3] [i_2] [i_1] [i_0])))));
                    }
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        var_21 = var_0;
                        var_22 = (min(var_22, var_13));
                    }
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        var_23 = (max(var_23, ((((((arr_0 [i_5]) > (arr_11 [i_0] [i_0] [21] [i_5]))) ? (4222315710122523294 | 1358307153) : var_3)))));
                        var_24 += 158;
                        arr_17 [i_0] [i_0] [i_2] [i_5] = 38257;
                        arr_18 [i_0] [i_5] [i_2] [i_0] = var_13;
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_25 = (((arr_20 [i_0] [i_1] [i_2]) <= (arr_20 [i_1] [i_1] [i_1])));
                        var_26 = var_8;
                        var_27 = (var_13 ^ -49);
                        var_28 = var_1;
                    }
                    arr_21 [i_0] [i_0] = (arr_6 [i_0] [i_1] [i_0]);
                    var_29 = ((var_2 > (1858828002 + var_13)));
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                arr_26 [i_0] [i_0] = (((arr_7 [i_2] [i_0] [i_2]) | var_14));
                                var_30 = -var_5;
                            }
                        }
                    }
                }
            }
        }
        var_31 = ((((((-75 + 2147483647) >> (88 - 57)))) ? (var_4 > var_7) : (arr_20 [i_0] [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 4; i_10 < 22;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 22;i_12 += 1)
                        {
                            {
                                arr_37 [i_0] = (((arr_15 [i_10 + 1] [i_10 - 4] [i_10 - 1] [i_0]) != ((var_9 ? 38257 : 50))));
                                var_32 = ((1 >= (arr_25 [i_10] [i_0] [i_10 - 3] [i_10 - 2] [i_10 - 1])));
                                var_33 *= arr_1 [i_10];
                                var_34 = (((arr_22 [i_9 + 1] [i_10 - 2] [i_11] [i_10]) ? var_9 : (arr_22 [i_9] [i_10 - 2] [i_12] [i_11])));
                                var_35 = (arr_23 [i_12 - 1] [i_9] [i_10 - 4] [i_0]);
                            }
                        }
                    }
                    var_36 *= (36415 && 167);
                    var_37 = (arr_31 [i_0]);
                    var_38 = (var_0 ^ (arr_34 [i_9 - 1]));
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
    {
        var_39 &= ((!(2557049148079256171 / var_13)));
        arr_41 [i_13] = -4061669803;
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
    {
        var_40 = var_6;
        arr_44 [13] = (((arr_7 [i_14] [6] [i_14]) <= 22));

        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            var_41 = ((-(arr_0 [i_15])));
            arr_47 [i_15] = (((arr_22 [i_15] [i_14] [i_14] [i_15]) > (arr_12 [i_14] [i_15] [12] [i_14])));
            var_42 *= var_1;
        }
        var_43 -= (((arr_45 [i_14] [i_14] [i_14]) ? -81 : 1));
    }
    #pragma endscop
}
