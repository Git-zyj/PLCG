/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = max((max((arr_1 [i_0]), (arr_1 [i_0]))), (arr_0 [i_0] [i_0]));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_1] = var_9;
            var_15 = var_7;
        }
        var_16 = var_7;
        arr_8 [i_0] = var_12;
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_17 = (max(var_17, var_12));
            var_18 -= (max(var_13, (arr_1 [i_2])));
            var_19 = (arr_6 [i_2] [i_2] [13]);
            arr_15 [i_2] [i_2] [1] = (min((arr_11 [i_2] [i_3]), (arr_5 [i_2] [13] [11])));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_20 ^= arr_13 [4] [4];
            arr_18 [2] |= var_2;
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        arr_27 [i_2] [i_5] [i_6 - 2] [i_2] = (min((arr_26 [i_2] [2] [8]), (arr_22 [12] [i_5] [i_6] [i_7])));
                        arr_28 [i_2] [i_5] [i_2] = (arr_5 [i_2] [i_7] [i_2]);
                    }
                }
            }
        }
        var_21 = (arr_3 [i_2] [i_2] [i_2]);
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
    {
        var_22 = (max(var_22, (arr_6 [i_8] [i_8] [i_8])));

        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        {
                            arr_42 [i_8] [i_8] [i_10] = var_11;
                            var_23 = (min(212693823230703361, 212693823230703361));
                        }
                    }
                }
            }

            for (int i_13 = 2; i_13 < 13;i_13 += 1)
            {

                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {

                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        var_24 = (max(var_24, ((min((arr_49 [i_9 - 1] [i_13 - 2] [i_13 - 2] [9] [i_13 - 1]), (arr_29 [i_9 - 1]))))));
                        arr_51 [i_8] [i_8] [i_15] [1] [1] = max((arr_24 [7] [i_13 - 2] [i_13 - 1] [i_9 - 1]), var_4);
                        arr_52 [i_8] [i_9] [i_13] [i_14] [i_15] [1] [i_14] = (arr_31 [i_8]);
                        arr_53 [i_8] [i_9] [i_8] = var_7;
                    }
                    arr_54 [i_8] [i_9 - 1] [i_8] [8] = (min((min((arr_16 [i_9 - 1] [i_13 - 2]), -212693823230703361)), 1));
                    arr_55 [i_8] = (arr_31 [i_13 + 1]);
                    var_25 = (arr_41 [i_9 - 1] [i_9] [i_8] [i_9 - 1] [1]);
                }
                arr_56 [i_8] [i_9] [7] [10] = (arr_32 [i_8] [i_9]);
                var_26 = (min(var_26, (arr_48 [i_8] [i_9] [1] [i_8])));
            }
        }
    }
    for (int i_16 = 2; i_16 < 24;i_16 += 1)
    {
        var_27 = (min(var_27, var_7));
        var_28 = (arr_58 [i_16]);
    }
    var_29 |= var_0;
    #pragma endscop
}
