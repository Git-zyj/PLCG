/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_15 = ((((~((max(var_9, var_4))))) <= ((((-(arr_1 [i_1]))) ^ 32))));

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                var_16 = (min(var_16, ((((arr_4 [i_0]) ? (((arr_1 [i_0]) ? ((min((arr_2 [i_0]), 2))) : (!-2))) : (~1))))));

                for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    var_17 = (((((var_7 ? var_10 : (arr_0 [i_2])))) ? ((~(arr_4 [i_1]))) : (((arr_0 [i_2]) ? (arr_0 [i_1]) : var_4))));
                    var_18 = (max(var_18, -2));
                    var_19 *= (((arr_3 [i_0] [i_2] [i_3]) ? ((min((63 == var_7), (arr_6 [i_0] [i_0] [i_0] [i_0])))) : -18));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_0] [i_1] [9] [i_4] [i_4] = ((-(arr_12 [i_2])));
                    arr_14 [i_0] [i_1] [i_2] [i_0] [i_1] [i_0] = ((((((arr_3 [i_4] [6] [i_0]) > var_1))) % 2));
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_20 = (((((((max((arr_3 [i_0] [i_2] [i_0]), (arr_15 [i_0] [i_1] [i_2] [i_5])))) >= ((var_2 ? (arr_0 [i_2]) : var_10))))) < ((var_13 ? ((-(arr_7 [i_0] [4] [i_5] [i_2] [i_5]))) : ((((arr_11 [i_0] [i_0] [i_2] [i_2] [i_5]) || var_8)))))));
                    var_21 = var_5;
                    var_22 = ((-((-(arr_8 [i_5])))));
                }
            }
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 3; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 9;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 11;i_9 += 1)
                    {
                        {
                            var_23 = var_11;
                            var_24 = (((arr_3 [i_0] [i_6] [3]) <= ((min((min((arr_7 [i_0] [i_0] [i_8] [i_8] [2]), 2)), (arr_23 [i_0]))))));
                        }
                    }
                }
            }
            var_25 |= var_10;
            var_26 = 2;
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
        {
            var_27 = (arr_1 [11]);
            var_28 = (((-2136983405 + 8) == 1837368582));
        }
        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
        {
            var_29 = (arr_16 [i_0] [i_11]);

            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                var_30 = (((((((var_13 ? 2 : (arr_27 [i_0] [3])))) ? (arr_8 [i_12]) : (((var_12 ? (arr_3 [0] [i_11] [i_12]) : (arr_19 [i_0] [i_0] [i_0] [i_0])))))) ^ (arr_7 [i_12] [9] [i_12] [i_0] [i_0])));
                arr_36 [i_0] [i_12] [i_12] = var_13;
                arr_37 [i_12] [i_11] [i_12] = ((((arr_32 [i_0]) ? var_13 : (arr_32 [i_0]))));
            }
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                var_31 = (~-0);
                var_32 = (arr_2 [i_0]);
                arr_42 [i_0] [i_11] [i_0] [i_11] = (((arr_11 [i_0] [i_11] [i_11] [i_13] [i_13]) | -var_8));
            }
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                var_33 = ((var_8 ? (arr_15 [i_0] [9] [9] [i_14]) : (min(var_6, ((((arr_5 [11] [i_11] [i_11] [i_11]) / -2)))))));
                var_34 = ((max(var_8, 2147483647)));
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 12;i_15 += 1)
            {
                for (int i_16 = 3; i_16 < 9;i_16 += 1)
                {
                    {
                        var_35 = (min(var_35, (arr_22 [9] [i_11] [i_15] [i_16 - 1])));
                        var_36 = (arr_5 [i_16 - 3] [i_15] [i_11] [i_0]);
                    }
                }
            }
        }
        var_37 = ((~((-((((arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]) <= 1)))))));
    }
    #pragma endscop
}
