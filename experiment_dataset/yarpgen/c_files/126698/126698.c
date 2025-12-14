/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 65532;
    var_21 = (((((~7210072948531002748) * var_5)) ^ (((min(23393, -24462))))));
    var_22 = ((!(((((min(65535, var_12))) ? var_11 : 3883119701)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_2] [i_1] [i_2] [i_0] = (((((((61075 ? -14306 : 32753)) || 1565081748)))));

                            for (int i_4 = 1; i_4 < 12;i_4 += 1)
                            {
                                arr_17 [i_2] [i_1] [i_2] [i_3] [i_3] [2] = (min(6512684062055403392, ((max(756238819661824974, 1261312976)))));
                                var_23 -= (min((arr_13 [i_4 + 1] [i_3] [i_2] [i_1] [i_0]), (!9323340912835197525)));
                            }
                            for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                            {
                                arr_22 [i_0] [i_1] [i_2] [i_3] [i_1] &= (arr_14 [i_0] [i_0] [i_2] [i_3] [i_0] [i_1]);
                                arr_23 [i_2] [i_3] [10] [2] [i_2] = (arr_7 [i_2]);
                                var_24 -= (min(61105, 31));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                            {
                                var_25 = (min(var_25, (((~(arr_21 [i_0] [i_1] [i_2] [i_3] [i_6]))))));
                                arr_26 [i_0] [i_1] &= (arr_25 [i_0] [i_0] [i_0]);
                                var_26 -= (arr_3 [i_0]);
                            }
                            var_27 -= (max((((((~(arr_13 [4] [i_0] [1] [4] [i_0])))) ? 1575172189 : (!15655388838131780294))), (arr_5 [i_1])));
                        }
                    }
                }
                arr_27 [i_0] [i_0] = (((arr_1 [i_1]) ? ((min((arr_15 [i_0] [7] [i_1] [i_1] [7] [i_1]), (arr_15 [i_0] [i_1] [i_1] [i_0] [12] [12])))) : 1467728602));
                var_28 += (min(((var_17 ? 30644 : var_2)), var_1));
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_29 -= ((+(min((arr_15 [i_8] [i_7 + 3] [i_7] [i_7 + 1] [i_7 - 2] [i_7]), (arr_15 [i_8] [i_7 + 3] [i_7] [i_7 - 1] [i_7 + 4] [i_1])))));

                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 15;i_9 += 1)
                            {
                                var_30 += ((-(arr_4 [i_7 + 1] [i_7 + 4] [i_7])));
                                var_31 |= var_5;
                            }
                        }
                    }
                }
                arr_38 [i_0] [13] = var_4;
            }
        }
    }
    #pragma endscop
}
