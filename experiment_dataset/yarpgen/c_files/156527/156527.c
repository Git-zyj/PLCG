/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] &= (~-119);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_16 = (max(var_16, (~25)));
            arr_5 [i_1] [i_1] = 4294967295;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {

                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            var_17 = (min(var_17, ((((20226 ? 8511132655815995052 : 45300))))));
                            var_18 = -var_15;
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            arr_15 [i_5] [i_1] [i_1] [i_1] [i_5] = (arr_11 [i_0] [i_1] [i_0] [i_3] [i_5]);
                            var_19 = ((82 && (arr_8 [i_0] [i_1] [1] [i_2] [i_2] [i_5])));
                        }
                        arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] = 197;
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            var_20 = ((((4294967279 / (arr_18 [i_6] [i_6] [i_6]))) * 0));
            var_21 = var_12;
            arr_19 [i_6] = (((1 * 4294967291) * (197 / 45310)));
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {

            /* vectorizable */
            for (int i_8 = 2; i_8 < 22;i_8 += 1)
            {
                arr_25 [i_7] [i_0] [i_7] [i_8 + 1] = (((arr_8 [i_8] [i_8] [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_0]) ? (arr_8 [i_8] [3] [12] [i_8 - 1] [i_8 - 1] [i_7]) : 4052081993755758913));
                arr_26 [i_0] [i_0] [i_7] [i_7] = 0;
                arr_27 [i_0] [i_7] [i_7] [i_7] = (var_3 % var_12);
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    {
                        var_22 = (((((((max(29738, var_6))) ? var_1 : ((min(var_6, 19591)))))) ? -32765 : (var_15 == -1)));
                        var_23 -= var_13;
                    }
                }
            }
        }
    }

    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        var_24 = (min(var_24, var_1));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                {
                    arr_40 [i_11] [i_12] [i_11] [i_11] = (arr_36 [i_13] [i_12]);
                    arr_41 [i_12] [i_12] [i_12] [i_13] = 189;
                    arr_42 [i_11] [i_11] [i_12] [i_13] &= (((((var_5 && var_8) >> (63 - 34))) * -19600));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 13;i_14 += 1)
    {
        var_25 = (max(var_25, (var_13 >> 1)));
        arr_46 [i_14] = (~55042);
        arr_47 [1] [i_14] = var_10;
        arr_48 [i_14] [i_14] |= ((!((((arr_44 [i_14]) ? var_2 : (arr_24 [i_14] [i_14]))))));
    }
    /* vectorizable */
    for (int i_15 = 1; i_15 < 19;i_15 += 1)
    {
        var_26 &= (arr_17 [i_15 + 2]);
        var_27 = (((arr_9 [21] [i_15 + 1] [i_15] [21]) ? -6189913840829014270 : var_5));
    }
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        var_28 ^= ((((((82 ? 0 : 26214))) / var_7)));

        /* vectorizable */
        for (int i_17 = 1; i_17 < 8;i_17 += 1)
        {
            arr_58 [i_16] = ((((arr_36 [i_16] [i_16]) | -26214)));
            var_29 = var_14;
        }
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            var_30 += (1 == 150);
            arr_61 [i_16] [i_16] = (i_16 % 2 == 0) ? ((max(((max(0, 19553))), (((arr_12 [i_16] [i_18] [11] [i_18] [i_18] [i_16]) >> (((arr_59 [i_16]) + 3262))))))) : ((max(((max(0, 19553))), (((arr_12 [i_16] [i_18] [11] [i_18] [i_18] [i_16]) >> (((((arr_59 [i_16]) + 3262)) + 2714)))))));
        }
        arr_62 [i_16] = ((((((arr_20 [i_16] [i_16]) % ((174 >> (120 - 117)))))) < (-var_14 * var_2)));
    }
    var_31 = 195;
    #pragma endscop
}
