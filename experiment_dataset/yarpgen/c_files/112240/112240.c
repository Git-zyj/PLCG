/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_16 = ((max(-var_10, (~var_5))));
                            arr_10 [i_3] [i_2] [i_3] = (max((((!(arr_6 [i_0 + 3] [i_1] [i_1])))), (max(1, 12288))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_17 = ((4696187274326992875 + (5261711818704735008 - 3145728)));
                            var_18 = (min(var_18, (((((-(arr_3 [i_5 - 1] [i_0]))) != (max((arr_3 [i_0] [i_0 + 3]), var_15)))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 18;i_8 += 1)
                        {
                            {
                                arr_26 [i_6] [10] [i_6] [i_6] = var_9;
                                var_19 -= (max(249, (((-65 % 4559331953927272179) % 1))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_20 += (1 != 249);
                            var_21 = (min(var_21, ((max((max(var_2, -6436771484280969225)), 27)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 12;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 13;i_15 += 1)
                        {
                            {
                                var_22 = (min(var_22, var_9));
                                var_23 = (max(var_23, (max(32320, (max((var_11 + 127), (max(1, var_5))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 11;i_17 += 1)
                        {
                            {
                                var_24 = (arr_13 [1] [i_12 - 1] [1]);
                                var_25 = (min(var_25, ((((9223372036854775807 == 65535) % (((var_4 ? 32750 : var_3))))))));
                                var_26 = (min(var_26, (((-(((var_15 >= (arr_35 [i_17 + 1])))))))));
                                var_27 = (arr_28 [i_11] [i_13] [i_13] [i_13]);
                                arr_49 [i_11] [i_12] &= (max(var_15, -11));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 2; i_18 < 12;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 1;i_19 += 1)
                        {
                            {
                                var_28 = var_12;
                                var_29 = (max(var_29, var_12));
                                var_30 = (max(var_4, -1666));
                                var_31 -= (506826473 || 0);
                                var_32 = (max((max((max(9046969833774148713, var_15)), ((max((-2147483647 - 1), (arr_20 [i_11])))))), (((8 + (arr_2 [i_11] [i_11] [i_19 - 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
