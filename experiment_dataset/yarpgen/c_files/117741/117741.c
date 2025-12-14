/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = (arr_6 [i_0 - 1] [i_0 + 1]);

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_15 = ((((-(arr_9 [i_2] [i_2] [i_1 + 2]))) == (!-113)));
                        var_16 = arr_4 [i_0];
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_17 = (min(var_17, (arr_13 [i_1] [i_1 + 3] [i_1 - 1] [2] [i_0 - 3])));
                        var_18 = ((+(((arr_5 [i_0] [i_1 + 1] [i_2]) * (arr_14 [1] [i_2] [i_1] [i_0])))));
                        var_19 = ((~((~(arr_0 [i_1 + 3] [i_0 - 1])))));
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_2] [i_5] [i_0] |= (-(arr_11 [i_0] [i_1] [i_1] [i_2] [i_2] [i_5]));

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_20 = (-(arr_0 [i_0] [i_0]));
                            var_21 = ((~(arr_2 [i_1] [i_5])));
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_22 = (arr_8 [i_7] [i_5] [i_0]);
                            var_23 = (((((~((((arr_10 [i_7] [12] [i_2] [12] [i_0] [i_0]) && (arr_15 [i_0] [i_0] [i_2] [i_5]))))))) == (((~(arr_20 [i_0] [i_1] [i_2] [i_5] [i_5] [i_7]))))));
                            arr_24 [i_5] [i_5] [i_2] [i_1] [i_0] = ((-(arr_10 [i_0 - 1] [i_1] [i_2] [9] [1] [i_0 - 1])));
                        }
                        var_24 = ((-(arr_19 [i_5] [i_5])));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                    {
                        var_25 = (((arr_2 [i_2] [i_1]) < (arr_23 [i_1] [i_0])));
                        arr_28 [i_0] [i_0] [i_0] [1] [i_0] = (arr_21 [i_1 + 3] [i_1 + 3]);
                    }
                    var_26 = (max(var_26, (((~(arr_12 [i_0] [i_1] [i_2] [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            {
                                var_27 = (~(arr_15 [14] [i_1] [i_1] [i_1]));
                                var_28 = ((-((-(arr_18 [i_9] [i_9] [i_9] [i_9] [i_9])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = var_7;
    var_30 = (~var_8);
    var_31 = ((!(~var_5)));
    #pragma endscop
}
