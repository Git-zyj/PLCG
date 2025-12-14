/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [3] [i_0] = (arr_0 [8]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_12 = (arr_1 [i_2] [5]);
                            var_13 &= (min((max(2083482962, ((var_5 + (arr_3 [i_3]))))), (arr_1 [i_1] [i_1])));
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_14 &= (-2083482985 < 2083482962);
            arr_17 [4] = (~20144);
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            arr_22 [7] [i_4] [i_4] = ((arr_12 [i_4] [i_6]) && (-63 - var_10));
            var_15 = var_10;
        }
        for (int i_7 = 2; i_7 < 9;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        var_16 = (-4 && 16203592742253467327);
                        var_17 -= ((16203592742253467327 == (arr_11 [i_4])));
                    }
                }
            }
            arr_32 [i_4] [i_4] = var_1;
        }

        for (int i_10 = 3; i_10 < 11;i_10 += 1)
        {
            var_18 += (arr_7 [i_4] [10] [2] [i_4]);
            arr_36 [i_4] = var_2;
            arr_37 [i_10 - 1] [i_4] [1] = ((var_3 ? (((arr_21 [i_10]) | var_0)) : (arr_1 [i_4] [i_10 - 3])));
            var_19 = -577613976;
            var_20 = 18446744073709551615;
        }
    }
    for (int i_11 = 2; i_11 < 19;i_11 += 1)
    {
        var_21 = (((((max((((var_4 <= (arr_39 [i_11] [i_11])))), (max(-18, (arr_39 [i_11] [9]))))))) == -var_8));

        /* vectorizable */
        for (int i_12 = 2; i_12 < 17;i_12 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 4; i_14 < 16;i_14 += 1)
                {
                    {
                        var_22 ^= (((arr_47 [i_12 + 3]) ? (arr_41 [i_14 - 4] [i_12 - 1] [i_11 - 2]) : (arr_41 [i_14 - 3] [i_12 + 3] [i_11 - 1])));
                        arr_48 [i_11] [i_14] [10] [i_14] &= var_11;
                        arr_49 [i_13] = ((~(arr_39 [i_11] [i_14 + 2])));
                        var_23 = ((-(arr_44 [i_14 - 4] [i_11 - 1])));
                    }
                }
            }
            arr_50 [i_11] [i_12] = ((255 ? (arr_42 [i_12] [i_12 - 1] [i_12 - 2]) : var_4));
            arr_51 [i_11] = (!253);
        }
        for (int i_15 = 2; i_15 < 17;i_15 += 1) /* same iter space */
        {
            var_24 = min(5942051700286799573, -111);
            arr_54 [i_11 - 2] [i_11] [i_11 + 1] = ((max(-1711031195, 65512)));
        }
    }
    #pragma endscop
}
