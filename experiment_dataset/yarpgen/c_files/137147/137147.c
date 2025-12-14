/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_7 ? (max((max(var_8, 2147483647)), ((max(var_9, 253))))) : (!18446744073709551598)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = (max(var_12, var_7));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_13 |= arr_4 [i_0] [i_1] [i_0] [i_0];
                var_14 = arr_3 [24] [i_2] [i_2];
                arr_6 [i_2] [i_1] [i_1] [i_2] = (arr_2 [i_2]);
            }
            for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
            {
                var_15 = (arr_1 [i_0]);
                arr_9 [i_0] [i_1] [i_3] = 16971055518678219036;
                arr_10 [i_0] [i_0] = ((-(arr_2 [i_1])));
                arr_11 [i_0] [i_0] [i_3] |= var_1;
            }
            for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
            {
                var_16 = var_9;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_17 = ((var_3 ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : 12));
                            arr_18 [i_0] [i_1] [i_4] [i_4] [i_5] [i_5] = ((2147483647 ? var_8 : (arr_12 [i_0] [i_4] [i_5] [i_6])));
                            arr_19 [i_5] [i_1] [i_4] [22] = (~var_7);
                            var_18 = 18446744073709551585;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    {
                        arr_26 [9] [i_7] [i_1] [i_0] = (arr_22 [1] [i_1] [i_1] [i_0]);
                        var_19 = (arr_2 [i_0]);
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {

            for (int i_10 = 3; i_10 < 23;i_10 += 1)
            {
                var_20 *= (((arr_12 [i_0] [i_9] [5] [i_10]) ? (arr_12 [i_0] [i_0] [i_9] [i_10]) : var_7));
                var_21 = (min(var_21, (arr_28 [i_0] [i_9] [i_10])));
            }
            for (int i_11 = 3; i_11 < 22;i_11 += 1)
            {
                var_22 += ((-2147483640 ? (arr_22 [1] [i_0] [i_0] [i_0]) : (arr_14 [i_0] [i_9] [i_11] [i_11 + 3])));
                arr_34 [i_0] [i_9] [i_11 + 2] = arr_4 [i_9] [i_9] [i_11] [i_0];
            }
            var_23 = (min(var_23, (((~((~(arr_32 [15] [i_9] [1] [i_9]))))))));
            var_24 *= 1;
        }
        var_25 = (max(var_25, ((((arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                {
                    var_26 = 2147483636;
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 0;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 0;i_15 += 1)
                        {
                            {
                                var_27 -= (~var_10);
                                var_28 ^= (+(((arr_28 [i_0] [i_13] [i_14]) ? var_8 : var_0)));
                            }
                        }
                    }
                    arr_46 [i_0] &= -2147483639;
                }
            }
        }
    }
    var_29 *= ((var_5 ? (min(var_9, 1797502244)) : 1));
    #pragma endscop
}
