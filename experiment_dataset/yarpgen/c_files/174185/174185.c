/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0 - 1] = var_6;
                arr_7 [i_0] = ((+((min((!var_1), (arr_3 [i_0] [i_0] [17]))))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_11 = ((((min(0, (min(-2670996062045381638, var_5))))) ? var_4 : (!var_0)));
                    var_12 = var_6;
                }
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    arr_14 [12] [i_0] = (min((min((arr_12 [i_3 + 3] [13] [i_1] [i_1]), (((463815931706583419 ? (arr_5 [i_0] [i_0]) : var_9))))), ((max(32, var_6)))));
                    arr_15 [i_0] [5] [5] [2] = var_8;
                }
                for (int i_4 = 3; i_4 < 18;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_13 = (min(var_13, ((min(134201344, ((((arr_8 [i_1] [i_4 - 3] [i_4 - 3] [i_4 - 3]) < (arr_23 [i_1] [i_4 - 3])))))))));
                                var_14 -= (!var_4);
                                arr_25 [i_0 - 1] [i_0] [i_4] [i_5] [i_6] = var_3;
                            }
                        }
                    }

                    for (int i_7 = 3; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        var_15 = (arr_28 [i_0] [i_0] [15] [13]);
                        arr_29 [i_0] = -2670996062045381625;
                        arr_30 [i_1] [i_0] [i_1] = (((((((!(arr_9 [i_0] [i_4] [i_7])))))) ? ((((!(arr_28 [i_0] [i_1] [i_4 - 3] [i_7 - 1]))))) : (arr_28 [i_0] [i_0] [i_0] [i_0])));
                    }
                    for (int i_8 = 3; i_8 < 16;i_8 += 1) /* same iter space */
                    {
                        var_16 -= ((!(((1 ? var_9 : 1)))));
                        var_17 = (min(var_17, 897840338));
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        arr_35 [i_0] [i_0] [i_9] = ((((!(arr_20 [i_0] [i_0] [8] [i_4] [6] [i_9])))));
                        arr_36 [i_0] [i_0] [i_9] [i_9] = var_8;
                    }
                }
            }
        }
    }

    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 9;i_12 += 1)
            {
                {
                    arr_44 [4] [i_11] [i_11] [i_11] = ((+((((((arr_32 [i_10] [i_11] [i_12] [i_11]) ? -2670996062045381610 : 2147483647)) < (((66 ? var_7 : -134217728))))))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                arr_51 [1] [i_11] [i_11] [i_13] [i_11] [i_13] [i_11] = ((-463815931706583419 ? -29 : -38));
                                arr_52 [i_11] [i_11] = ((var_2 ? 4 : var_6));
                            }
                        }
                    }
                }
            }
        }
        arr_53 [i_10] = (max((((arr_13 [i_10] [i_10] [i_10] [i_10]) ? var_4 : var_7)), 64));
        var_18 ^= ((((((var_9 ? (arr_8 [i_10] [10] [10] [12]) : -1459036028))) ? (!var_7) : (var_10 && var_10))));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 22;i_15 += 1)
    {
        arr_57 [i_15] [i_15] = (((arr_55 [i_15]) ? (((arr_55 [i_15]) ? var_10 : 25283)) : (896 && 263110610)));
        var_19 = (arr_56 [i_15] [i_15]);
    }
    var_20 = 118;
    #pragma endscop
}
