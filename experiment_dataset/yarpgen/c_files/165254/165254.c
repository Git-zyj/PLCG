/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = (max(var_12, 0));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = 75;
                    arr_6 [i_0] = 193;
                }
            }
        }

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        {
                            var_14 = 71;
                            var_15 -= 1;
                        }
                    }
                }
            }
            var_16 -= 1;
            var_17 += 181;
            var_18 = 166;
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_19 = (min(var_19, 75));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 10;i_9 += 1)
                {
                    {
                        arr_23 [i_7] [i_7] = 0;
                        arr_24 [i_7] [i_7] [i_7] = 755850165;
                        arr_25 [i_0] [i_0] [i_8] [i_7] [i_7] [i_0] &= 79;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                var_20 -= 181;
                var_21 = 74;
                arr_33 [i_0] [i_0] [i_11] [i_0] = 0;
                var_22 = 0;
            }
            arr_34 [i_0] = 3290932581;

            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                arr_37 [i_0] [i_10] [i_0] = 181;
                var_23 = 73;
            }
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        {
                            arr_47 [i_15] [i_0] [i_14] [i_13] [i_0] [i_0] &= 166;
                            arr_48 [i_13] [1] [i_13] [i_14] [i_15] [i_15] [i_15] = 88;
                            arr_49 [i_0] [i_10] [7] [i_15] [i_15] = 1;
                        }
                    }
                }
            }
        }
    }
    for (int i_16 = 1; i_16 < 1;i_16 += 1)
    {
        var_24 = 57344;
        arr_54 [i_16] = 75;
        var_25 = 1827165331;
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 18;i_17 += 1)
    {
        var_26 *= 91;
        arr_58 [i_17] [i_17] = 0;
        /* LoopNest 2 */
        for (int i_18 = 1; i_18 < 15;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 18;i_19 += 1)
            {
                {
                    var_27 -= 616387446;
                    arr_64 [15] [i_17] [i_18 + 2] [i_17] = 181;
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 18;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 18;i_21 += 1)
                        {
                            {
                                var_28 = 3385555250;
                                arr_69 [8] [i_18 + 3] [i_17] = 0;
                            }
                        }
                    }
                    arr_70 [i_17] [i_18] [i_19] [i_18 + 2] = 0;
                }
            }
        }
        arr_71 [i_17] [i_17] = 107;
    }
    for (int i_22 = 0; i_22 < 13;i_22 += 1)
    {
        var_29 = 12185;
        arr_75 [i_22] = 0;
        var_30 = 246;
    }
    var_31 = 255;
    var_32 = 3290932581;
    #pragma endscop
}
