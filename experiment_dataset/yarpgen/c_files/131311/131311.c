/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 |= 8725724278030336;
                    var_14 ^= var_4;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 24;i_4 += 1)
            {
                {
                    arr_12 [i_0] [i_0] [i_3] [i_3] = var_0;
                    arr_13 [i_3] [i_0] [i_3] [i_4 + 1] = (!51515);
                    var_15 &= -86;
                    arr_14 [i_3] = var_5;
                    arr_15 [i_4] [i_3] [i_3] [i_0] = 109;
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        var_16 -= 46;
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_17 = (max(var_17, 14022));
                                arr_31 [i_5] [i_6] [i_6] [i_8] [i_6] [i_6] [i_5] |= 856908222;
                            }
                        }
                    }
                    arr_32 [1] [i_5] = var_8;
                    var_18 += 51502;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            {
                                var_19 -= -86;
                                arr_39 [i_5] [i_10] = 14034;
                                var_20 = 14006;
                            }
                        }
                    }
                    arr_40 [i_5] = -1;
                }
            }
        }
        arr_41 [i_5] [i_5] = 51502;
    }
    var_21 = var_6;

    for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
    {
        var_22 = (min(var_22, (~var_4)));

        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            arr_47 [i_12] [i_12] = var_7;
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        {
                            arr_56 [i_12] [i_13] [i_13] [i_15] [i_16] = 1;
                            arr_57 [i_12] [i_13] [14] [i_13] [i_16] [i_15] [14] = var_5;
                            var_23 = (min(var_23, 0));
                            var_24 = ((~(!4294967279)));
                            var_25 = var_4;
                        }
                    }
                }
            }
            var_26 = var_0;
        }
        var_27 = 15465;
        arr_58 [i_12] &= var_6;
    }
    for (int i_17 = 0; i_17 < 19;i_17 += 1) /* same iter space */
    {
        arr_61 [i_17] = -var_5;
        arr_62 [i_17] = -33;
        arr_63 [i_17] = 2635586263;
    }
    #pragma endscop
}
