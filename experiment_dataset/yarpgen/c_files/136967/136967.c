/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    {
                        var_12 = (((-(arr_4 [i_0] [i_1] [i_2] [i_3]))));
                        var_13 = ((((min((arr_7 [i_3 + 1] [i_3 - 3] [i_3] [i_3 + 1] [i_3] [i_3 + 1]), (arr_7 [i_3] [i_3 + 1] [i_3] [i_3 - 2] [i_3 - 1] [i_3 - 1])))) ? 4271334253813327553 : (arr_7 [i_3] [i_3] [i_2] [i_2] [i_1] [i_0])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_17 [i_0] [i_0] [i_5] [i_6] = ((-(max(58153, 18446744073709551595))));
                        arr_18 [i_0] [i_5] [i_5 + 4] [i_5 - 2] [i_5] [i_0] = (min((((arr_14 [i_5 + 3] [i_5 - 1] [i_5]) ? (arr_14 [i_5] [i_5 - 1] [i_0]) : (arr_14 [i_5 + 4] [i_5 - 1] [i_0]))), ((~(arr_4 [i_0] [i_4] [i_0] [i_6])))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            var_14 = ((var_3 && ((var_3 || (arr_4 [i_0] [i_6] [i_5] [i_0])))));
                            var_15 = -4271334253813327553;
                            var_16 = (((arr_0 [i_5 - 3] [i_5 + 1]) ? (arr_0 [i_5 + 3] [i_5 + 2]) : (arr_11 [i_5 + 4] [i_4])));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            var_17 = 18374686479671623680;
                            var_18 = ((-((-(arr_5 [i_5] [i_5 + 3] [i_5] [i_5 + 2])))));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            arr_28 [i_5] [i_5] [i_6] = var_10;
                            var_19 = var_3;
                            var_20 = (((min(-4271334253813327553, (arr_12 [i_0] [i_5] [i_4]))) - var_10));
                            var_21 = ((min(var_10, (arr_2 [i_6] [i_9]))));
                        }
                    }
                }
            }
        }
        arr_29 [i_0] [i_0] = (min(((-(arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((arr_6 [i_0] [i_0] [i_0] [i_0]) ? (arr_4 [i_0] [i_0] [i_0] [i_0]) : (~var_9)))));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 22;i_12 += 1)
                {
                    {
                        arr_37 [i_11] [i_10] = ((!(arr_24 [i_0] [i_12])));
                        var_22 = var_10;
                    }
                }
            }
        }
    }
    var_23 = ((0 / ((~(max(var_5, var_1))))));

    for (int i_13 = 0; i_13 < 22;i_13 += 1)
    {
        var_24 = (min((arr_22 [i_13] [i_13] [i_13] [i_13]), var_7));
        var_25 = arr_34 [i_13] [i_13] [i_13] [i_13];
    }
    #pragma endscop
}
