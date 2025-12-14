/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_2 + 2] [i_1] [i_0 - 1] |= var_13;
                    arr_9 [i_2 - 1] [i_0 + 3] [i_0 + 3] = ((((((((var_5 ? var_1 : 103))) ? var_6 : (((arr_4 [i_2] [i_0]) % (arr_4 [i_0] [i_1])))))) ? 156 : (arr_5 [6])));
                    arr_10 [i_0] [i_0] [i_0 - 2] = 2584163182198850010;
                    arr_11 [i_0] [i_0] [i_0] [i_2 + 1] |= (((arr_0 [i_0] [i_1]) ? (((var_2 && (arr_3 [i_2 + 2] [i_0 + 1] [i_0 - 1])))) : (var_9 >= 6699801524644468487)));
                    arr_12 [i_0 + 1] [2] [i_2] [i_2] |= (min((((!(arr_3 [i_2 + 2] [i_2] [i_2])))), (((arr_3 [i_2 - 1] [i_2 - 2] [6]) ? var_11 : var_10))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        arr_25 [i_3 - 1] = var_1;
                        arr_26 [i_3] [i_4] [i_5] [i_6] = (((((var_9 ? 27078 : 153))) % 15249774097100627364));
                    }
                }
            }
        }
        arr_27 [i_3] [i_3 + 1] = ((var_3 || (arr_18 [i_3 + 1] [i_3 - 2] [i_3 - 2])));
        var_15 *= ((1289703116 ? 1 : 12781));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 11;i_10 += 1)
                    {
                        {
                            arr_39 [i_7] [i_9] [i_9 + 2] [i_10] = (((((arr_34 [i_8 + 1] [i_9 + 3] [i_10 + 1]) ^ var_0)) % ((-30788 * (arr_34 [i_8 + 1] [i_9 + 3] [i_10 + 1])))));

                            for (int i_11 = 1; i_11 < 9;i_11 += 1)
                            {
                                arr_42 [i_7] [i_9] [11] [i_10] [i_11] = ((((var_1 || (arr_7 [i_10 + 2] [i_10 + 2] [i_10] [13]))) ? ((6818412239601923405 ? -84 : var_14)) : (((arr_7 [i_10 + 2] [10] [i_10] [i_10]) ? var_14 : var_3))));
                                arr_43 [i_7] [i_8] [i_9] [i_7] [i_9] [10] [8] = ((((((34431 ? var_12 : var_8)) ? var_5 : (arr_41 [3] [i_8 + 1] [i_9 - 2] [8] [3])))));
                            }
                            /* vectorizable */
                            for (int i_12 = 3; i_12 < 12;i_12 += 1) /* same iter space */
                            {
                                var_16 = (max(var_16, (((var_3 ? ((var_1 ? 4029062262 : var_6)) : var_3)))));
                                var_17 *= ((88 ? ((var_0 ? var_6 : var_10)) : (~var_14)));
                            }
                            for (int i_13 = 3; i_13 < 12;i_13 += 1) /* same iter space */
                            {
                                var_18 = ((((((~var_14) ? ((var_5 ? var_7 : var_8)) : ((((arr_13 [i_7] [11]) ? var_9 : (arr_1 [8]))))))) ? var_8 : ((var_4 ? ((var_10 ? var_1 : var_14)) : var_7))));
                                var_19 = (min(var_19, var_2));
                                arr_48 [i_7] [i_9] [5] [6] [i_13 - 2] [i_9] = (15059865968663797951 % var_12);
                                var_20 = (((var_3 | var_8) ? ((var_2 ? (arr_4 [i_8 + 1] [i_9 + 1]) : var_10)) : (((var_2 % (arr_4 [i_8 + 2] [i_9 + 2]))))));
                            }
                        }
                    }
                }
                var_21 = ((((min(var_1, (arr_41 [i_8 - 1] [i_8] [i_8 + 1] [i_8 + 2] [i_8 + 2])))) ? (((var_1 >= (arr_41 [1] [i_8] [i_8] [i_8 + 2] [i_8])))) : ((var_9 ? (arr_18 [i_8 + 2] [i_8 + 2] [i_8 + 2]) : (arr_41 [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8])))));
                /* LoopNest 2 */
                for (int i_14 = 3; i_14 < 12;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 12;i_15 += 1)
                    {
                        {
                            var_22 *= ((((min((arr_15 [i_8 + 1] [i_8 + 1] [i_14 - 1]), var_14))) ? (((arr_52 [i_15] [i_15 - 2] [i_15 - 2] [i_15] [i_15 - 2]) % (arr_52 [i_15] [i_15 + 1] [i_15 + 1] [i_15] [i_15 + 1]))) : (min((26386 >= var_11), 6333078519129130826))));
                            arr_55 [i_8 + 1] [i_8 + 1] = var_13;
                            arr_56 [i_7] [i_7] [i_7] [i_15] = (min(var_6, (~var_13)));
                        }
                    }
                }
                var_23 += 241;
                var_24 += ((min(var_9, (~var_14))));
            }
        }
    }
    var_25 = var_14;
    var_26 = (max(var_26, var_9));
    #pragma endscop
}
