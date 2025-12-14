/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((((133169152 ? 18446744073576382463 : (var_10 || -75))) <= (var_3 + var_4)));
        var_15 = (((((min((arr_1 [i_0]), var_2))) > 94)));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_16 = (min(var_16, (((((min(var_0, var_7))) ? ((((min(976446126, var_7))) ? var_1 : (arr_0 [i_1] [i_0]))) : ((((min(5286, (arr_4 [i_1] [i_0]))) * ((var_0 ? var_6 : var_3))))))))));

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_17 = (i_1 % 2 == 0) ? ((min((arr_7 [i_1] [i_1] [i_2]), ((484794830 >> (((arr_7 [i_1] [i_0] [i_2]) + 20354))))))) : ((min((arr_7 [i_1] [i_1] [i_2]), ((484794830 >> (((((arr_7 [i_1] [i_0] [i_2]) + 20354)) - 11394)))))));
                var_18 = (((((arr_7 [i_1] [i_0] [i_1]) ? (arr_7 [i_1] [i_1] [i_1]) : (arr_7 [i_1] [i_1] [i_2])))) ? ((var_13 | (min(8152108767852402097, 6)))) : ((((((min(var_4, var_4)))) & (min((arr_0 [i_0] [i_2]), var_14))))));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_19 = (max(var_19, ((((((82 | (arr_3 [i_3 - 2])))) ? (arr_11 [i_3 + 1] [i_0] [i_0] [i_0] [i_0]) : ((((arr_13 [i_0] [i_1] [i_3 + 1] [i_0] [i_2]) ? var_2 : (arr_7 [i_2] [i_3 - 2] [i_3])))))))));
                            arr_15 [i_4] [i_1] [i_2] [i_2] [i_1] [i_0] = ((((((15094 ^ var_7) ? ((40210 ? var_9 : 55706)) : var_0))) ^ (min(var_5, (min(var_6, var_10))))));
                            arr_16 [i_2] [i_1] [i_1] [i_3 + 1] [i_4] = ((((arr_6 [i_0] [i_1] [i_2] [i_3]) ? var_8 : 165)));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_20 = (min(var_20, (((arr_10 [i_0] [i_0] [i_5] [i_5] [i_5]) ^ (arr_11 [i_0] [i_1] [i_0] [i_1] [i_1])))));
                var_21 -= (var_6 + 72057594037927932);
                arr_19 [i_1] [i_1] = ((var_3 ? var_2 : 137));
            }
            /* vectorizable */
            for (int i_6 = 2; i_6 < 12;i_6 += 1)
            {
                arr_22 [i_0] [i_1] [i_1] = ((184 ? var_2 : (arr_8 [i_0] [i_1] [i_1] [i_1] [i_6] [i_6 + 1])));
                var_22 = ((7684375021009072348 ? var_8 : 896));
            }
            var_23 = (min(var_23, ((((min(var_11, var_2)))))));
        }
        /* vectorizable */
        for (int i_7 = 2; i_7 < 11;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 11;i_9 += 1)
                {
                    {
                        var_24 = ((26291 | (arr_12 [i_8 + 1] [i_7 - 2])));
                        arr_31 [i_8] [i_7 + 2] [i_8 - 1] [i_9] = ((var_14 ? var_4 : (-2147483647 - 1)));
                        var_25 &= ((62 ? (arr_7 [i_0] [i_8 - 1] [i_9 - 1]) : ((var_0 ? var_2 : var_6))));
                    }
                }
            }

            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                var_26 = (min(var_26, (((0 | (arr_27 [i_7] [i_7 - 2] [i_7]))))));
                arr_34 [i_0] [i_0] [i_0] [i_0] = (((arr_33 [i_7 + 2] [i_7 + 1] [i_7 + 1]) ? 49335 : var_2));
                var_27 = (var_5 > var_11);
            }
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    arr_41 [i_0] [i_0] [i_0] [i_0] = var_0;
                    var_28 = (var_11 != var_6);
                }
                arr_42 [i_11] [i_11] [i_11] = (((arr_29 [i_0] [i_7 + 2] [i_11]) && (arr_29 [i_0] [i_7] [i_11])));
            }
            for (int i_13 = 1; i_13 < 10;i_13 += 1)
            {
                var_29 = 1;
                var_30 = ((var_10 ? (arr_26 [i_0]) : var_11));
                arr_45 [i_0] [i_7 - 1] = ((var_8 / (((arr_13 [i_0] [i_7 + 2] [i_0] [i_0] [i_7]) ? var_5 : var_3))));
                var_31 = ((-1 / ((var_14 | (arr_35 [i_0] [i_7] [i_7 - 2] [i_0])))));
            }
            arr_46 [i_0] = (arr_13 [i_7] [i_7] [i_0] [i_0] [i_7]);
            var_32 = (max(var_32, var_9));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            arr_49 [i_0] [i_14] [i_14] = ((89 | (arr_13 [i_14] [i_14] [i_14] [i_0] [i_14])));
            arr_50 [i_14] = var_2;
            /* LoopNest 3 */
            for (int i_15 = 1; i_15 < 11;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 13;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 13;i_17 += 1)
                    {
                        {
                            arr_57 [i_0] [i_14] [i_15] [i_14] [i_17] = var_2;
                            var_33 ^= 133169152;
                            var_34 = var_7;
                        }
                    }
                }
            }
        }
    }
    var_35 = ((var_4 ? var_14 : var_4));
    var_36 = (min(var_36, var_11));
    #pragma endscop
}
