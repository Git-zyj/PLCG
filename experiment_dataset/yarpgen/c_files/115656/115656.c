/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_14 = (((((~(-127 - 1))) == -122)));
                    var_15 += (arr_4 [i_0] [i_1] [i_0] [i_0]);
                }
            }
        }
    }
    var_16 = ((((((min(18446744073709551615, var_13))) ? var_2 : var_5)) + var_10));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 22;i_4 += 1)
        {
            {
                arr_11 [i_4] = ((~(arr_9 [i_4] [i_4 - 4])));
                var_17 = ((!((((~(arr_10 [i_3] [i_3] [i_3])))))));

                for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_18 = (max((max(413749907, 6)), ((((arr_8 [i_4] [i_4 - 3] [i_7 - 2]) ? -39 : (arr_8 [i_4] [i_4 - 3] [i_7 - 2]))))));
                                var_19 = (min(var_19, (((((((arr_17 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 - 3] [i_5]) * 122))) ? var_12 : (min(var_12, 18446744073709551593)))))));
                                arr_20 [13] [i_4 + 1] [13] [i_6] [i_4] = (((((-287379418 - (arr_12 [i_4]))) + 2147483647)) >> ((((((arr_16 [i_7] [i_6] [i_3] [i_4] [i_3]) ? 0 : var_10))) ? (arr_12 [i_4]) : (var_1 > 19))));
                            }
                        }
                    }
                    var_20 = var_12;
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                {
                    arr_23 [i_8] [i_4] [i_4] [i_3] = ((~(arr_22 [i_4 + 1])));
                    var_21 = arr_14 [i_8] [i_4] [11];
                    var_22 &= (!var_11);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            {

                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    arr_31 [i_9] [i_9] [i_10] [i_11] = (((((arr_30 [i_10] [i_10] [i_10] [i_10]) + 1))) ? ((16687 + (arr_26 [i_9] [i_10] [i_11]))) : (arr_26 [i_9] [i_10] [i_11]));
                    arr_32 [i_9] [i_10] [i_11] = (min(var_13, (min(var_4, ((~(arr_24 [13])))))));
                }
                var_23 -= ((((((arr_26 [i_9] [i_9] [i_10]) >> (var_2 - 60197)))) ? ((max((var_3 & -1), (arr_29 [i_10] [i_9] [i_10])))) : (min(var_11, (var_13 == var_11)))));
                var_24 -= (arr_27 [i_10]);
                /* LoopNest 3 */
                for (int i_12 = 1; i_12 < 22;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 23;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            {
                                var_25 = (min((-127 - 1), ((((min(var_12, 19))) ? (-32767 - 1) : 103))));
                                arr_40 [i_9] [i_9] [i_12] [i_13] [2] [i_12] [i_10] = ((+(((arr_38 [i_12 + 2] [20] [i_12 + 1]) ? (arr_38 [i_12 + 1] [i_12] [i_12 + 2]) : 65532))));
                                var_26 = (min((min(((-(arr_34 [i_10] [i_10]))), ((4294967295 ? var_3 : -1)))), (arr_34 [21] [i_12])));
                                var_27 *= (min((arr_33 [i_14]), (((var_12 > (arr_29 [i_12 - 1] [i_12] [i_12 + 2]))))));
                            }
                        }
                    }
                }
                var_28 = (((((var_12 ? ((var_5 ? var_4 : -4096)) : -1))) ? (((((arr_30 [i_9] [0] [i_10] [i_10]) < (((var_1 >> (((arr_30 [1] [1] [i_10] [i_10]) - 910205357))))))))) : var_12));
            }
        }
    }
    #pragma endscop
}
