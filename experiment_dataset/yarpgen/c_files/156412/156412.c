/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (63 == var_6);
    var_11 |= ((var_4 ^ (~1984)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [7] [i_2] [i_3] [i_4] [i_3] [i_0] = (((-1994 + 2147483647) >> (((arr_3 [i_2] [i_0] [i_0]) + 19154))));
                                var_12 ^= (~var_9);
                                var_13 -= (!var_6);
                            }
                        }
                    }
                    var_14 = (min(var_14, -28));
                    var_15 -= 1776639705;

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_16 = ((~(((2058308426386504090 * -1776639717) ? (arr_7 [i_1]) : (((arr_0 [i_2] [i_1]) - var_3))))));
                        arr_14 [i_0] [i_1] |= 15;
                        arr_15 [i_0] [i_1 + 2] [i_1] [i_5] [13] = (arr_5 [i_5] [i_5] [i_0] [i_5]);
                    }
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        var_17 = (((arr_16 [14] [i_1 + 1]) * (1776639693 < -1962205002)));
                        var_18 |= 0;
                    }
                    var_19 = (min(var_19, -1776639714));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_20 &= (var_3 | var_8);
                                var_21 = arr_3 [i_9] [i_9] [i_8];
                                arr_30 [i_7] [12] [i_8] [12] [12] = (((((-(var_5 + 14338)))) ^ (-1166810668299538263 / -1166810668299538288)));
                                arr_31 [i_0] [i_7] [16] [i_8] [i_8] [i_0] [i_0] &= 6;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            {
                                var_22 = var_5;
                                var_23 = (min(var_23, var_9));
                                var_24 = (min(var_24, (((((((var_6 || (arr_29 [i_0]))) ? ((-52 ? (arr_26 [i_0]) : 32767)) : (arr_27 [i_11] [i_11] [i_8] [i_11] [i_12] [i_8] [i_11]))) != (((((193 ? (arr_20 [i_0]) : 1)) | ((-139375603 ? -124267341 : -10))))))))));
                            }
                        }
                    }
                }
            }
        }
        var_25 = ((((((((-22077 ? 15989489025765289809 : -32169)) < (arr_17 [i_0] [i_0] [i_0] [i_0]))))) > (~-1166810668299538312)));
    }
    var_26 &= -368011537;
    #pragma endscop
}
