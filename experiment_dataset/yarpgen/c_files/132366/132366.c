/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (min(((((max(var_11, 1))) & var_6)), (min(-var_6, ((1 ? var_3 : var_13))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((-(((max(0, var_16)) ? ((max(var_13, var_14))) : (var_0 <= var_9)))));
                var_19 += (arr_2 [i_1] [i_0]);
                var_20 |= (((arr_3 [i_1]) << ((min((arr_1 [i_1]), (arr_0 [i_0] [i_0]))))));
                arr_6 [i_0] = (min(((0 ? (arr_4 [i_0] [1]) : (arr_0 [i_0] [i_0]))), ((min(var_16, 1)))));
                arr_7 [i_0] [i_0] = ((-((max((arr_2 [i_0] [i_1]), var_2)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                var_21 = var_4;

                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_22 = (((((var_9 ? (arr_20 [i_5] [i_3]) : var_6))) ? ((max(var_11, 0))) : (arr_20 [i_3] [i_3])));
                                var_23 = var_15;
                            }
                        }
                    }
                    var_24 = (min(var_24, var_5));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_25 |= (!(((~(arr_23 [i_7] [1] [i_3] [1] [1])))));
                                arr_29 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] [i_2] = (min((min((arr_17 [i_3 - 1] [i_7] [i_3] [i_8] [i_8] [i_8]), (~var_0))), (arr_28 [i_8])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_26 = max(1, 0);
                                var_27 *= 1;
                            }
                        }
                    }
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                {
                    var_28 = (((arr_20 [i_2] [i_3]) ? (((((1 ? (arr_36 [i_11] [i_3 - 1] [i_11] [i_2]) : var_12))) ? (~1) : (arr_31 [i_3] [i_3 - 1] [i_3]))) : (min((0 ^ var_13), (((!(arr_33 [i_2] [i_2] [i_2] [i_2] [1] [i_3]))))))));
                    arr_38 [i_3] [i_3] = (((max(var_1, (arr_32 [i_3] [i_3] [i_3] [i_3 - 1] [i_11]))) ? var_10 : (((!(var_12 * var_15))))));
                    var_29 += max(((((arr_31 [i_2] [i_3] [0]) ? (arr_14 [1]) : var_6))), (((arr_24 [1]) < (arr_24 [1]))));
                    var_30 = arr_33 [i_2] [i_3] [i_3] [i_11] [i_11] [i_3];
                    var_31 &= ((var_3 ? ((min((arr_27 [i_11] [i_3 - 1] [1] [i_3] [1] [i_3 - 1] [i_3]), (arr_15 [1] [i_3 - 1] [i_2] [1])))) : (((min(1, 1)) ? ((1 ? var_13 : (arr_32 [1] [1] [i_2] [1] [i_3]))) : (arr_10 [i_3] [i_2])))));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                {
                    var_32 = ((var_8 ? 1 : 0));
                    arr_41 [i_2] [i_3] [i_3] [i_12] = 0;
                    var_33 = (((arr_30 [i_2] [i_3] [i_12]) ? (arr_34 [i_3 - 1] [i_3]) : var_6));
                }
                var_34 = (max((min((((arr_8 [i_2]) ? (arr_24 [i_3]) : var_16)), (arr_22 [i_3] [i_3] [i_3]))), (((max((arr_22 [i_3] [i_3] [i_3]), (arr_8 [i_2]))) ? ((~(arr_19 [i_2] [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_3]))) : (arr_15 [i_3] [i_3] [i_2] [i_3 - 1])))));
            }
        }
    }
    var_35 = ((~((max((var_4 > var_17), (max(var_1, 1)))))));
    #pragma endscop
}
