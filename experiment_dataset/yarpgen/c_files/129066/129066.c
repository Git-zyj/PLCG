/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_15, var_11));
    var_19 = 1;
    var_20 = var_8;
    var_21 = ((((60959 ? (var_17 || 21643) : ((max(var_10, var_2))))) + (60952 > 28)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_22 = (((((503316480 ? 4581 : 4581)) | 87)));
        var_23 = (~var_8);
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_17 [i_1] [i_2] [i_3] [i_1] [i_5] = (arr_0 [6]);
                            var_24 = (var_5 >= (arr_13 [3] [i_1] [i_1] [i_1 + 2]));
                            var_25 = (max(var_25, ((((arr_16 [i_1] [i_1 + 1] [i_2] [1] [i_2] [i_2]) ? var_4 : -9223372036854775788)))));
                            var_26 = (((((var_7 ? var_14 : var_9))) ? (~-87) : (arr_0 [i_1 + 1])));
                            var_27 = (((arr_0 [i_1 - 1]) || 3791650813));
                        }
                        var_28 = (max(var_28, var_17));
                        arr_18 [i_1] [i_2] [i_2] [i_3] [2] [i_1] = (((((arr_3 [i_3 + 2]) ? (~var_13) : var_4))) ? (min(var_16, -87)) : var_11);
                        var_29 = (max(var_15, -87));
                        var_30 = (((arr_6 [i_3 + 3] [i_4 + 1]) ? (((11363365021018957189 < (((94 ? var_9 : var_14)))))) : ((((arr_8 [i_1] [8]) || (((var_9 ? var_13 : var_9))))))));
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            arr_22 [i_1] [i_6] = (min(1048575, ((((arr_11 [i_1] [i_1] [i_1]) ? -1903206720 : (var_10 * var_13))))));
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 7;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        {
                            arr_32 [6] [i_1] [i_7] = (~-83);
                            var_31 = (min(var_31, ((max(((((var_2 ? (arr_13 [i_1] [i_1 - 1] [i_1] [i_1]) : (arr_24 [i_6]))) * (162 >> 1))), (((arr_10 [i_9] [i_7 - 1] [i_1 - 1] [i_1]) * (arr_6 [i_1 + 2] [i_1]))))))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    {

                        for (int i_12 = 2; i_12 < 7;i_12 += 1)
                        {
                            var_32 &= (max((min((arr_23 [i_6] [i_10] [6]), (arr_3 [i_1 + 2]))), ((((((arr_23 [i_1] [i_6] [i_6]) > 564575753)) || (((var_6 ? 1903206732 : (arr_34 [i_1] [i_6] [i_11] [i_12])))))))));
                            var_33 += ((((min(3791650809, 34))) ? (arr_26 [i_12 + 4] [i_11] [i_11] [i_1 + 1]) : var_13));
                            arr_43 [i_1] [i_11] [i_10] [i_6] [i_1] = ((((((arr_10 [i_1] [i_1 + 2] [i_12] [i_12 + 1]) == (arr_10 [i_1] [i_1 + 2] [i_10] [i_10])))) / 3791650797));
                            var_34 |= (((((~var_1) && var_12))) < (((max(63, (arr_6 [6] [6]))))));
                        }
                        var_35 = 2972621189;
                        var_36 += ((16 % (max((arr_37 [10]), (max((arr_12 [0] [0] [i_10] [i_10] [0] [i_10]), 5057679666696950578))))));
                        arr_44 [i_1] [9] [i_10] = ((~((((var_8 >= 512) && (arr_42 [i_1] [i_1] [i_1] [i_1] [i_1 + 2] [9] [2]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
