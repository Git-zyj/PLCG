/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_7 [i_0 + 2] [i_1] [i_2] [i_0 + 1] = var_4;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_15 = 34;

                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            arr_13 [i_4] [i_3] [i_2] [i_1 + 1] [i_3] [i_0 + 1] = (-(arr_1 [i_0 + 2] [i_0 + 2]));
                            arr_14 [i_0] [i_1] [i_3] [i_3] [7] = -34;
                            arr_15 [i_0] [i_1] [i_3] [i_3] [i_3] = ((var_13 + ((1 ? (arr_2 [i_0] [i_2] [i_3]) : (((!(arr_1 [i_3] [i_4]))))))));
                        }
                        arr_16 [i_3] [i_2] [i_3] = max(-34, ((34 * (!1119585372))));
                        var_16 = (((1579725299 > (arr_9 [i_3]))) ? (min((arr_5 [i_2 + 1]), var_2)) : (1 + -1122848046));
                        arr_17 [i_3] [i_1] [i_1] [i_1 + 2] = arr_1 [i_0 + 1] [i_2 - 1];
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_17 = (arr_0 [i_2 - 1] [i_0 + 1]);
                        arr_20 [i_5] [i_5] [i_2] [i_5] [i_1] = ((58 ? (arr_11 [i_5]) : (arr_11 [i_5])));
                        arr_21 [i_0] [i_1] [i_5] [i_5] = 34;

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            arr_25 [i_0] [i_0] [i_0 - 1] [i_5] [i_0] = ((4294967275 ^ (((10876 ? var_9 : 0)))));
                            var_18 = var_14;
                        }
                        var_19 = -var_3;
                    }
                }
            }
        }
    }
    var_20 = (var_0 <= var_7);
    var_21 = var_13;
    var_22 = (((max(var_10, -103)) | -1754422854));
    #pragma endscop
}
