/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = ((var_3 ? 32766 : (((32372 - 32372) & (arr_5 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] = ((((min(32372, (arr_0 [i_0 + 1])))) - 1));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                            {
                                arr_14 [i_2] [i_4] = ((((((var_15 ? (arr_9 [1] [i_0] [i_0]) : 54)) + 2147483647)) >> (((var_9 & var_7) - 258))));
                                var_19 = (max(var_19, ((((arr_10 [i_0] [i_0 + 1] [i_2 - 2] [i_3] [i_4]) ? ((((arr_1 [i_2]) ? var_14 : 33163))) : ((24 | (arr_10 [i_0] [1] [i_2] [i_3] [i_4]))))))));
                                arr_15 [i_4] [i_1] [i_1] [i_1] [i_1] = var_17;
                            }
                            for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                            {
                                var_20 = ((+(min(((((arr_7 [i_0] [i_2] [i_5]) || var_2))), (min(9804, (arr_6 [i_0] [i_1] [i_5])))))));
                                var_21 = (var_1 ? (((((62695 & (arr_8 [i_0] [i_0] [i_0])))) ? var_5 : var_7)) : -9811);
                            }
                            for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                            {
                                arr_21 [i_0 - 1] [i_0] [i_1] [i_1] [i_6] [0] [2] = min(var_17, ((((arr_9 [i_3] [6] [i_0 + 1]) <= var_7))));
                                arr_22 [i_0] [i_1] [i_2] [i_0] [i_6] = ((((min((min((arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] [i_6]), 4891756161347609014)), (arr_12 [i_1] [2] [i_2] [i_1] [i_1] [1] [i_0])))) ? var_12 : ((var_8 ? (~var_13) : (arr_17 [i_0 - 1])))));
                                arr_23 [i_6] [i_6] [i_6] [i_3] [i_6] [i_1] [i_0] = -18309;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            {
                arr_29 [i_8] = (~1756898441274460973);
                arr_30 [i_8] [i_8] = 57;
            }
        }
    }
    var_22 = 274476418;
    var_23 &= (!24124);

    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        var_24 = (min(var_24, ((((arr_33 [5]) | (arr_26 [i_9] [13] [i_9]))))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                {
                    var_25 = (min(var_25, (arr_34 [i_9] [i_10] [i_10])));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 18;i_13 += 1)
                        {
                            {
                                var_26 = (((((var_14 ? (arr_28 [i_9] [i_11]) : 1756898441274460973))) ? (!0) : ((((((arr_34 [10] [i_9] [i_9]) + (arr_31 [i_9])))) ? ((min(var_4, var_13))) : (arr_37 [i_11] [i_11] [i_11])))));
                                arr_42 [i_9] [i_11] [i_11] [i_11] [i_11] = (arr_28 [i_10] [i_10]);
                            }
                        }
                    }
                }
            }
        }
        var_27 ^= ((((516516414 + (((arr_31 [2]) * 0)))) % ((min((((arr_35 [i_9]) ? 64 : 3778450881)), (10143 * var_2))))));
    }
    #pragma endscop
}
