/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = 38416;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, (((((max((arr_2 [20] [i_4 - 1] [i_1 - 2]), (arr_2 [i_0] [i_4 + 1] [i_1 + 1])))) ? (1 ^ 27139) : ((-(arr_5 [i_0] [i_4 - 1]))))))));
                                arr_15 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0] = 12500;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_20 [i_1] = ((-(895946928 * 255)));
                                var_16 = (min(var_16, (((1 ? (arr_12 [i_1 - 1] [i_1 - 1] [i_1] [i_6 - 2] [i_6 + 1]) : (((arr_5 [i_1 - 1] [i_5]) ? (arr_12 [i_1 - 1] [i_2] [i_1 - 1] [i_6 - 2] [i_6 + 1]) : (arr_5 [i_1 - 1] [i_1 - 1]))))))));
                                var_17 = (arr_1 [0] [i_1 - 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_10;
    var_19 = var_2;

    for (int i_7 = 2; i_7 < 13;i_7 += 1)
    {
        var_20 *= (arr_5 [i_7] [18]);
        var_21 += (((((arr_23 [i_7 - 1]) * 137)) / ((max((arr_23 [i_7 - 2]), (arr_6 [i_7] [i_7 - 1] [i_7 - 1]))))));
        arr_24 [8] = (arr_17 [20] [i_7] [i_7] [20]);
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        var_22 = (min((((~(arr_7 [i_8] [i_8] [i_8])))), 38416));
        var_23 = (min(3, (((arr_14 [i_8] [i_8] [i_8] [i_8]) ? (arr_14 [i_8] [i_8] [22] [1]) : 216))));
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 18;i_10 += 1)
            {
                {
                    arr_33 [i_10] [i_8] = 139;
                    var_24 = (((arr_28 [i_8] [1] [i_10]) / ((-(((arr_1 [14] [i_10]) % var_7))))));
                    arr_34 [i_9 + 1] [9] [i_8] [9] = (min(-var_12, ((((arr_14 [i_10] [i_10] [19] [1]) || (arr_32 [i_8] [i_9] [i_9] [i_10]))))));
                    var_25 = 10924124249151615689;
                }
            }
        }
    }
    #pragma endscop
}
