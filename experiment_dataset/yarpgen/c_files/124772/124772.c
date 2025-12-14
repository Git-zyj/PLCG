/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = (arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (arr_6 [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 -= ((var_13 ? 12 : (-506864559 ^ 1369883308)));
                                arr_12 [i_4] [i_2] [i_2] [i_2] [i_0] = ((~(((arr_8 [i_1] [i_1] [i_2] [i_2] [i_1]) ? (arr_2 [i_0]) : var_7))));
                                var_18 |= ((-(arr_6 [i_1])));
                            }
                        }
                    }
                    var_19 = (max(var_19, var_6));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    var_20 = (((arr_1 [i_0]) ? -var_7 : 1571495583113116425));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                arr_25 [i_0] [i_0] [i_6] [i_8] [i_8] = (arr_0 [i_0] [i_7]);
                                var_21 = var_9;
                            }
                        }
                    }
                    var_22 = var_14;
                    arr_26 [i_5] [i_6] [i_5] [i_6] &= ((506864557 ? ((-(arr_2 [i_0]))) : (((arr_21 [i_0]) ? 4294967295 : (arr_21 [i_0])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                {
                    arr_32 [i_10] [i_10] [i_9 - 3] [i_10] = (!1695652924);
                    arr_33 [i_0] [i_10] [i_0] [i_0] = (506864549 ? (arr_2 [i_0]) : (arr_23 [i_10] [i_9] [i_9] [i_9] [i_9]));
                    var_23 ^= ((2925083987 ? 4294967289 : (arr_11 [i_9] [i_9 - 3])));
                }
            }
        }
        var_24 = (min(var_24, (((2599314374 ? var_14 : (arr_5 [i_0] [i_0] [i_0]))))));
    }
    var_25 = 9047148372467289722;
    #pragma endscop
}
