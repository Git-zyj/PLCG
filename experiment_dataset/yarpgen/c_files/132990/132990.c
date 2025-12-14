/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_19 += 12139;
        arr_2 [i_0] [16] = 1;

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_20 -= 253;
            var_21 &= 65523;
            var_22 -= 1;
        }
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        var_23 = 1;
        var_24 *= 0;
    }
    for (int i_3 = 3; i_3 < 16;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_23 [i_3] = -17;

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            arr_27 [i_3] [i_4] [i_5] [i_7] [i_3] = 77;
                            var_25 = -5;
                            arr_28 [i_3] = (-127 - 1);
                            var_26 |= 21814;
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_27 = (max(var_27, -5536590100765777294));
                            arr_31 [i_3] = 7;
                            arr_32 [i_3] [i_3] = 1;
                        }

                        for (int i_9 = 3; i_9 < 15;i_9 += 1)
                        {
                            var_28 = 1;
                            arr_35 [i_9] [i_3] [i_5] [i_6] [i_3] = 1;
                        }
                        for (int i_10 = 4; i_10 < 16;i_10 += 1)
                        {
                            arr_40 [i_3] = 1;
                            arr_41 [i_3] [i_3] = 227;
                            arr_42 [i_3] [i_4] [i_5] [i_5] [1] [i_3] &= 255;
                            var_29 -= 0;
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            var_30 = 5536590100765777294;
                            arr_45 [i_3] [i_4] [i_11] [i_6] [i_6] [5] [i_5] = 21814;
                        }
                        arr_46 [i_6] [4] [i_3] [i_6] [i_5] = -3;
                    }
                }
            }
        }
        var_31 = 13724;
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                {
                    var_32 = (min(var_32, 12924));
                    var_33 ^= -5536590100765777294;
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 18;i_14 += 1)
    {
        var_34 = (max(var_34, 0));
        var_35 *= 52611;
    }
    #pragma endscop
}
