/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_16, var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_21 = (var_0 ? (min(((var_7 ? (arr_11 [i_0] [i_0] [i_1] [i_0] [i_3]) : (arr_9 [i_0] [i_0] [i_2] [9]))), (arr_8 [i_0] [9] [4] [i_3]))) : (arr_6 [6] [6]));
                            var_22 = -8071495365671806849;
                            arr_14 [i_0] [i_1] [2] [2] &= ((150 <= (min(678680936043024991, var_8))));
                            arr_15 [i_0] [i_0] [i_1] [7] [7] [i_3] = min((arr_11 [i_0] [i_3] [i_2 - 1] [i_0] [i_2 - 1]), ((-(arr_0 [i_0]))));
                            var_23 = (max(var_23, (~var_11)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_24 = (~(min((arr_21 [i_4] [i_4 + 1] [i_4 - 1] [i_0] [0] [i_4 + 3]), 107)));
                                var_25 += (max(110, (((236 ? 19 : var_12)))));
                                var_26 |= var_17;
                                var_27 = (max(var_27, var_15));
                            }
                        }
                    }
                }
                arr_25 [i_0] = var_10;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            {
                                var_28 = 48;
                                arr_38 [i_7] [i_10] [i_9] [i_9] [4] [i_11] = ((((min(var_12, (~3335834194636682288)))) ? ((((((min((arr_28 [i_11] [i_9]), 205)))) <= (max(245, var_6))))) : (((max(var_2, var_19))))));
                                arr_39 [2] [9] [i_9] [i_10] [i_11] = ((var_6 ? var_2 : (((-(arr_37 [i_7] [i_7] [i_7] [i_10] [i_11]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 16;i_13 += 1)
                        {
                            {
                                arr_45 [i_13] [i_12] [i_12] [i_12] [i_7] [i_7] = ((150 ? 36 : 155));
                                var_29 = (arr_30 [i_7] [7]);
                            }
                        }
                    }
                    arr_46 [i_7] [i_8] [14] [9] = (((arr_42 [16] [16] [i_8] [i_8]) << (var_12 - 29)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 1; i_14 < 22;i_14 += 1)
    {
        for (int i_15 = 2; i_15 < 21;i_15 += 1)
        {
            {
                var_30 = (min(var_30, ((((((-1042171510311481544 ^ (arr_47 [i_15])))) && 19)))));
                var_31 -= (((var_10 >= (arr_48 [i_15]))));
                arr_52 [21] [i_15] [i_14] = (max((arr_49 [i_14 - 1]), ((((arr_49 [i_14 - 1]) & var_8)))));
            }
        }
    }
    #pragma endscop
}
