/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] = arr_6 [i_0] [i_2] [i_2 + 1];
                    var_14 ^= -139;

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_0] [1] [i_4] &= var_4;
                            arr_15 [i_4] [i_3] [i_2] [i_2] [3] [7] = var_13;
                            arr_16 [i_0 - 1] [i_1] [4] [4] [i_4] &= -var_2;
                        }
                        var_15 = (arr_2 [i_2 - 4]);
                        var_16 = ((-25 % (arr_3 [i_3 - 1] [i_3 + 1])));
                        arr_17 [i_0] [i_0] [i_0] [i_2] = (arr_2 [6]);
                    }
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        var_17 = (((((arr_12 [2] [i_0] [15] [i_5]) ? 8513005123435746263 : var_0)) <= var_7));

                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            var_18 = var_2;
                            var_19 ^= (~-1193549731);
                            arr_24 [i_6] [i_1] [i_2] [i_5] [i_6 + 1] = 1;
                            var_20 = (max(var_20, ((((arr_19 [i_6] [i_6 + 1] [i_6] [i_1] [i_6]) <= var_2)))));
                            var_21 = ((15659455286518533579 ? (arr_2 [13]) : (arr_1 [i_0 - 1])));
                        }
                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            var_22 += 8;
                            var_23 = (((((arr_18 [6] [i_1]) ? var_0 : 16)) * ((((arr_26 [i_2] [i_2] [i_2] [i_2]) / var_5)))));
                            var_24 *= (((arr_7 [i_1]) ? (arr_7 [i_5 - 2]) : var_7));
                            var_25 = var_3;
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_26 ^= (arr_31 [i_9] [i_8 + 1] [1] [i_2 - 3] [i_1] [i_0]);
                                var_27 = (arr_30 [6] [i_2] [i_8 + 2] [11]);
                                var_28 = arr_29 [i_1] [2] [8];
                            }
                        }
                    }
                }
            }
        }
        var_29 = (min(var_29, (-120 / -25)));
    }
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        var_30 *= ((((((max(var_7, (arr_34 [i_10])))) ? (((arr_32 [i_10]) >> (var_6 - 1941941806))) : (((var_5 ? var_8 : var_5)))))) ? (((var_13 * var_7) ? (min(15659455286518533579, 25)) : ((-982179072 ? var_8 : var_3)))) : ((((var_10 || ((((arr_33 [1]) ^ -120))))))));
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                {
                    arr_40 [i_10] [i_11] [i_10] [22] = (min(58, var_2));
                    var_31 = var_1;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 25;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 23;i_15 += 1)
            {
                {
                    var_32 = -1;
                    var_33 -= (min(((((max((arr_41 [15] [15]), (arr_45 [i_14] [i_14])))) ? ((0 ? 0 : 125)) : (((arr_49 [4] [i_14]) ? (arr_49 [i_14] [i_15]) : (arr_41 [i_13] [5]))))), var_11));
                    var_34 |= (max(0, -1570293881));
                    var_35 += (max(1570293861, ((-(arr_42 [i_15])))));
                }
            }
        }
    }
    #pragma endscop
}
