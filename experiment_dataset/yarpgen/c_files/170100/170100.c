/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 914728027;
    var_19 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 = (min(var_20, (((arr_1 [i_0]) || (12500749844977495959 - -30)))));
        arr_2 [i_0] = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 *= 38;
                    var_22 = (-939969060 + 1);

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_13 [i_2] [i_1] = ((-(arr_8 [i_0] [i_1] [i_2] [i_3])));
                        var_23 = ((1 ? 1 : 17942570549136436411));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                arr_20 [i_0] [i_4] [i_5] = ((133 ? (arr_19 [i_0] [i_0] [7] [i_0] [1]) : (arr_4 [3] [3] [i_5])));
                                var_24 = (min(var_24, var_7));
                            }
                        }
                    }
                }
            }
        }
        arr_21 [i_0] = var_6;
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        arr_25 [i_6] = (((arr_22 [15]) ? (~504173524573115222) : -29));

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            var_25 = ((((arr_23 [i_7]) ^ 33)) | (arr_27 [i_7] [i_6]));
            var_26 ^= (arr_23 [i_6]);

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_27 = (min((1 < 1), var_11));
                arr_32 [i_7] [i_7] &= (min(((min((arr_28 [i_6]), (arr_28 [i_8])))), (max(((504173524573115227 ? var_9 : (arr_22 [i_6]))), (((var_2 ? 65535 : var_7)))))));
                var_28 = 0;
                var_29 = (var_2 ? (((arr_31 [i_6] [1] [i_8]) ? (min(2565256247, 1)) : (arr_26 [i_7]))) : (arr_29 [i_6] [i_6] [i_6]));
            }
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                var_30 = (min(var_30, ((((arr_35 [i_6] [i_6] [i_7] [i_9]) ? (12 || -28) : ((max((arr_29 [i_9] [i_6] [i_6]), var_5))))))));
                arr_36 [i_6] [i_7] = ((1 ? (((((arr_30 [i_6] [i_7] [i_9]) < var_2)) ? (var_5 >> 0) : ((1 ? 12 : -30)))) : -30));
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                arr_40 [i_6] [i_10] = (arr_24 [i_7] [i_7]);
                var_31 = (arr_31 [i_10] [i_7] [i_6]);
            }
            var_32 ^= ((((((((arr_30 [i_6] [1] [i_7]) || (arr_23 [i_6]))) ? 49 : var_17))) || (--0)));
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        arr_43 [i_11] [i_11] = 2251486054791664787;
        var_33 = (min(var_33, 1));
        arr_44 [i_11] &= arr_24 [i_11] [i_11];
        var_34 = ((~(arr_22 [i_11])));
        arr_45 [i_11] = (5712046833375510163 ? (((arr_24 [i_11] [i_11]) ? (arr_37 [i_11] [i_11] [i_11] [i_11]) : 0)) : -27);
    }
    var_35 &= (max(((var_6 ? 1729711048 : 0)), ((var_17 * (var_15 / var_2)))));
    var_36 = var_14;
    #pragma endscop
}
