/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, (22088 && 0)));
                                arr_13 [i_1 - 4] [i_1 - 4] [i_1 - 4] [i_1] [i_2] [i_1] = (410714522401208036 >= 9);
                                arr_14 [i_2] [i_1 - 1] = (((arr_0 [i_3] [i_1]) / (22065 * -22084)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_15 ^= (((((min((arr_0 [i_0 + 3] [i_1 - 2]), 1))) <= (~1))));
                                arr_21 [i_0] [i_1] [i_2] [i_1] [i_1] = (arr_9 [i_0 + 3] [i_1] [i_2] [i_5]);
                                var_16 = 1;
                                arr_22 [i_2] [i_2] = (((arr_8 [i_0 - 1] [i_2] [i_6]) > ((((min((arr_19 [i_1] [i_1] [i_2] [i_5] [i_1 + 1] [i_5] [i_5]), (arr_20 [i_6] [i_2] [i_0] [i_2] [i_0])))) ? ((((arr_11 [i_0] [i_0] [i_2] [i_5] [i_6]) != (arr_16 [i_0] [i_1] [i_2] [i_5] [i_5] [i_6])))) : (arr_19 [i_0] [i_0] [i_2] [i_0] [i_6] [i_1] [i_2])))));
                                var_17 = (min(var_17, ((min((-26406 + 9), 22088)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 14;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 13;i_11 += 1)
                        {
                            {
                                var_18 += (((arr_17 [i_11] [i_7] [i_9] [i_8 + 1] [i_7] [i_7]) ? (arr_33 [i_7] [i_7] [i_7] [i_7 + 1]) : (min((((~(arr_18 [i_10] [i_10] [i_10] [i_10])))), (max((arr_4 [i_7] [i_8]), (arr_17 [i_7 + 1] [i_8] [i_9 - 1] [i_11] [i_11] [i_11 - 1])))))));
                                var_19 = (min(var_19, (((((((((-(arr_29 [i_7] [i_8 - 3] [i_10])))) ? (((arr_30 [i_10]) * (arr_10 [i_7 - 1] [i_8] [i_9] [i_10] [i_11 + 1]))) : (arr_30 [i_7])))) ? (((((arr_33 [i_7 + 2] [i_11] [i_9] [i_7 + 2]) || (arr_0 [i_8] [i_11]))))) : ((((((arr_5 [i_11] [i_7]) ? (arr_19 [i_7] [i_8 - 2] [i_7] [i_9] [i_10] [i_11 + 3] [i_11]) : (arr_29 [i_10] [i_8 - 3] [i_10])))) ? (arr_33 [i_7] [i_7] [i_7] [i_7 - 1]) : ((((arr_17 [i_7] [i_7] [i_9] [i_9 + 2] [i_7] [i_10]) ? (arr_17 [i_7] [i_8] [i_9 + 2] [i_9 + 1] [i_10] [i_8]) : (arr_10 [i_7] [i_8] [i_8] [i_10] [i_11])))))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 14;i_13 += 1)
                        {
                            {
                                var_20 += (min((((((!(arr_33 [i_7] [i_9] [i_12] [i_13])))))), (min((arr_36 [i_7] [i_7] [i_13]), (arr_12 [i_7] [i_7] [i_7] [i_7] [i_7])))));
                                arr_41 [i_8] [i_9] [i_12] = (((((((arr_38 [i_13] [i_12] [i_9] [i_8] [i_7]) ? (arr_39 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7 - 1]) : (arr_29 [i_9 + 2] [i_9 + 2] [i_8]))))) ? (arr_25 [i_7] [i_8]) : ((((~100) != ((1 ? -3500073038159491165 : 12251348353133751492)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
