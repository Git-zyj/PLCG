/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(((((min(var_13, var_13))) < (var_13 <= var_4))), (max(var_1, var_6)));
    var_17 = (min(((min((((-127 - 1) ? 1 : 0)), var_9))), (((var_6 | var_3) & var_15))));
    var_18 &= var_7;
    var_19 = ((((((var_0 ? var_4 : -121)) <= ((max(1, 0))))) ? (max(-3, var_7)) : 4194240));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = (((!var_10) ? var_9 : -8483416466802075220));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_7 [i_0] = ((var_11 ? (arr_6 [i_0] [6]) : -1));
            arr_8 [i_1] = (~3989725704);
            arr_9 [i_1] [i_1] [i_0] = ((var_8 / ((2044 ? var_8 : var_6))));
        }

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_20 += (((arr_11 [i_0] [i_2]) ? var_4 : var_1));
            arr_14 [0] [i_2] [0] = (((arr_11 [i_0] [i_2]) + var_15));
            arr_15 [i_0] [i_2] = ((((arr_3 [i_2]) <= 18446744073709551615)) ? (arr_0 [i_0]) : (arr_6 [i_2] [i_0]));
        }
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            var_21 = (((((1 ? (arr_10 [6]) : 0))) ? (arr_3 [i_3 - 3]) : (arr_5 [i_3 - 3])));
            var_22 = (((~(arr_5 [i_0]))));
            arr_18 [i_3] [i_3 + 1] [i_3] = (((arr_0 [i_3 - 3]) > 1));
            var_23 += 174;
            arr_19 [i_0] [i_0] [i_3] = (((-127 - 1) ? (arr_12 [i_3 + 2] [i_3 - 2]) : (arr_1 [i_3 - 3] [i_3])));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_23 [i_0] [i_4] = var_1;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 12;i_7 += 1)
                    {
                        {
                            arr_32 [i_5] [i_6] [i_5 + 1] [i_0] [i_5] = arr_6 [i_0] [i_5];
                            arr_33 [i_5] [i_4] [i_5 + 1] [i_6] [i_5] = ((var_2 ^ (arr_25 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_7 + 1])));
                            var_24 = (1 <= -2454);
                        }
                    }
                }
            }
            arr_34 [i_4] = (((((var_6 ? (arr_21 [i_0] [i_4] [i_4]) : 0))) ? (arr_24 [i_0] [i_4] [i_4] [i_0]) : (arr_25 [i_4] [i_4] [i_0] [i_0])));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {
                        arr_42 [i_4] [i_4] [i_8] [i_9] = (6961388866812052422 > (arr_20 [i_0]));
                        arr_43 [9] = ((32209 ? var_4 : ((3682550383 ? 10 : 4294967295))));
                    }
                }
            }
        }
        arr_44 [i_0] = (((arr_26 [i_0] [i_0] [i_0] [i_0]) ^ (((arr_25 [i_0] [i_0] [i_0] [i_0]) ? var_1 : var_1))));
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        arr_48 [i_10] = 1;
        var_25 -= (((arr_46 [i_10]) > (arr_46 [i_10])));

        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            arr_53 [i_10] [i_10] [i_11] = var_14;
            var_26 += 127;
            arr_54 [i_10] |= var_12;
        }
        var_27 = (min(var_27, (arr_50 [17])));
        arr_55 [i_10] = 612416912;
    }
    #pragma endscop
}
