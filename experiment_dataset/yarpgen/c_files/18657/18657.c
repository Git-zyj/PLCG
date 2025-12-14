/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3] [i_1] [i_1] [i_0] = max((arr_12 [i_3 - 1] [i_3 - 1] [i_4] [i_4] [i_4]), var_3);
                                var_15 = var_4;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_16 = 25726;
                            arr_20 [i_5] [i_6] [i_1] [i_6] = 64848;
                            var_17 = ((((var_14 ? (arr_7 [i_1] [22] [i_6]) : ((64827 ? (arr_2 [i_0]) : (arr_6 [i_0 + 2])))))) ? ((((!((((arr_16 [i_0] [i_5] [i_5]) ? var_5 : var_13))))))) : (~var_13));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] = ((((((var_7 % (arr_0 [i_0] [i_1])))) ? (((var_2 ? (arr_18 [i_0] [i_7] [i_1] [i_0]) : (arr_22 [i_0] [i_0] [7])))) : 3075784107013748314)));
                            arr_27 [i_1] = ((+(((arr_6 [i_7]) - (arr_10 [i_1] [i_7] [i_8])))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 6;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        {
                            var_18 = ((((max((arr_30 [i_11 - 1]), (arr_30 [i_11 - 3])))) & (min(((((arr_18 [i_9] [i_10] [i_11 + 2] [i_12]) < var_2))), (arr_34 [i_12] [i_10] [i_10] [i_9])))));
                            var_19 = max((max((arr_24 [i_11 - 1] [i_11] [i_11 + 3] [i_11 + 2] [i_12] [0]), -var_4)), ((((arr_33 [i_11 - 3] [i_11 + 3] [i_11 - 3] [i_12]) - (arr_33 [i_11 + 3] [i_11 + 2] [i_11 + 1] [i_12])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 7;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_20 += max((~var_8), (((arr_23 [i_9] [i_10] [i_13] [i_14]) | (arr_23 [i_9] [i_10] [i_13] [10]))));
                            var_21 = (max(((max(var_5, (arr_24 [i_9] [i_9] [i_10] [2] [i_13] [i_14])))), (((!64865) / (max((arr_13 [i_9] [i_9] [i_10] [i_10] [21] [i_13] [i_14]), (arr_13 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_14])))))));
                            var_22 = (max(var_22, ((((((!(arr_40 [i_9] [i_10] [i_14] [i_9]))) ? 683 : (64857 <= -2305843009213693952)))))));
                            arr_43 [i_14] [i_10] [i_14] = ((~(arr_13 [i_9] [i_10] [i_13 + 2] [i_14] [1] [i_9] [i_14])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
