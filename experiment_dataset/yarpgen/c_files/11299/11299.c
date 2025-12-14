/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~28359);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_18 = (min(var_18, ((((arr_1 [1]) ? (arr_1 [i_0]) : (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_19 = ((1 >= (arr_4 [i_0 - 1] [i_0] [i_2 - 3])));
                        var_20 = ((var_6 ? (arr_1 [i_0 - 2]) : (((arr_6 [i_1] [i_1] [i_1] [i_1]) * 1))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_1] [i_1] [i_1] [12] = ((-(arr_3 [i_0] [i_1])));
                        var_21 = (min(var_21, (((!(arr_7 [i_0] [i_2 - 1] [i_2 + 1]))))));
                        arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] = (arr_5 [i_2] [i_2 + 1] [i_1] [i_1]);
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        arr_17 [i_5] [i_5] [10] [i_5] |= (arr_4 [i_2 + 1] [i_0 + 1] [i_0 + 2]);
                        arr_18 [i_5] [0] [i_1] [i_1] [i_1] [0] = (~1);
                    }
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        var_22 = (arr_19 [i_6 + 2] [i_6 + 2] [i_6] [i_6 + 2]);

                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            var_23 ^= (((arr_23 [i_0 + 1] [i_0] [14] [i_2 - 3] [i_6 - 1] [i_6 - 1]) * -1026997153));
                            var_24 = (arr_1 [i_2 - 3]);
                            arr_25 [i_1] [i_1] [i_2] [i_6] [i_6] [i_7] = (((arr_7 [i_1] [i_2 - 1] [i_6 - 2]) ? (arr_7 [i_1] [i_2 - 1] [i_6 - 2]) : (arr_7 [i_1] [i_2 - 1] [i_6 - 2])));
                        }
                    }

                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        arr_28 [i_8] [i_1] [i_2] [i_1] [i_0] = (((arr_6 [i_1] [i_2 - 1] [i_1] [i_1]) ? 32739 : (arr_2 [i_2 + 1] [i_1] [i_0 - 1])));
                        arr_29 [i_1] = (arr_9 [i_1] [0] [i_2 - 2] [i_2 - 2] [i_8]);
                        arr_30 [i_1] [20] = (arr_8 [i_0] [i_1] [i_2 - 3] [i_1] [i_1] [i_0 + 1]);
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_1] = (arr_26 [i_1] [i_8 - 1] [i_2 - 3] [i_0]);
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_25 = (arr_3 [4] [i_1]);
                        arr_34 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1] [i_0] = (((arr_7 [i_1] [i_1] [i_2 - 1]) ? (arr_7 [i_1] [i_1] [i_0]) : (arr_7 [i_1] [i_1] [i_1])));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                var_26 = (arr_24 [i_10] [i_0 - 1] [i_2 - 2] [i_10] [i_2 - 2]);
                                arr_39 [18] [i_1] [i_2] [i_10] [i_11] [i_1] = 37168;
                            }
                        }
                    }
                    arr_40 [i_1] [i_1] = (arr_20 [i_0] [i_1] [i_0] [i_1]);
                }
            }
        }
    }
    var_27 |= (!var_11);
    var_28 = var_7;
    #pragma endscop
}
