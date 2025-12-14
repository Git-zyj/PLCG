/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((((var_0 * (min(var_15, var_8))))))));
    var_19 = (max(var_19, ((((min(11759974795440818926, 2505587018)) ^ (~var_0))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (((((-(arr_3 [i_0])))) ? ((var_15 | (arr_3 [i_0]))) : (max(var_5, (arr_3 [14])))));
                    var_20 = (max((((!(arr_2 [i_0] [i_2])))), (max((((arr_1 [i_0]) << var_11)), (arr_4 [i_0] [24] [i_2])))));
                    arr_8 [i_0] [i_1] [i_2] = -18446744073709551610;

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1) /* same iter space */
                    {
                        var_21 = ((~(arr_0 [i_3 - 1])));
                        arr_12 [i_3] [i_2] [i_1] [i_0] [i_0] [19] = (((arr_10 [20] [i_3 - 2] [i_3 + 3] [i_3] [i_3 - 1]) ? (arr_10 [i_2] [1] [1] [i_2] [i_3 + 4]) : (arr_10 [i_3] [22] [i_3 + 3] [6] [i_3 + 4])));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_4] [11] [i_2] [i_1] [i_1] [i_0] = ((var_0 ? (arr_10 [i_4 - 2] [i_4 + 3] [i_4 + 3] [i_4] [i_4 + 2]) : (arr_10 [i_4] [i_4 + 2] [14] [i_4] [i_4 - 2])));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_22 ^= ((~(arr_16 [i_0] [i_4 + 4] [i_4 - 2] [i_4 + 3] [i_4 + 4])));
                            var_23 = (~var_1);
                            var_24 = (arr_13 [i_4 + 3] [0] [5] [i_5] [5]);
                            var_25 = var_17;
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_26 = (min(var_26, ((((((var_14 < (arr_16 [i_0] [i_1] [i_0] [i_1] [i_1])))) ^ (arr_9 [i_4 + 4] [i_4 + 1] [i_1] [9]))))));
                            arr_20 [17] [i_4 + 2] [6] [i_0] = var_3;
                        }
                        var_27 = ((!(arr_9 [i_4 - 2] [i_4 + 4] [i_4] [1])));
                    }
                }
            }
        }
    }
    var_28 = ((var_4 % ((((((~235) + 2147483647)) >> ((((max(var_12, var_8))) + 44)))))));
    #pragma endscop
}
