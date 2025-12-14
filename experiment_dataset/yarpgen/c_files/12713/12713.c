/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = 50;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_18 = (max(var_18, 210));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_19 = (max(var_19, 1398123045));
                        arr_11 [6] [6] [11] [i_2] [i_2] [i_2] = 1;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            arr_15 [i_0] [i_0] [i_0] = 1;
            arr_16 [i_4] = 78;
            var_20 |= -1726034255678648782;
        }
    }
    for (int i_5 = 2; i_5 < 13;i_5 += 1)
    {
        var_21 *= 40433;

        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            arr_23 [i_5] [i_5] = 1;

            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {

                for (int i_8 = 1; i_8 < 12;i_8 += 1) /* same iter space */
                {
                    var_22 = 0;
                    arr_28 [i_5] [i_6] [i_6] [i_6] [i_7] [i_5] = 1;
                }
                for (int i_9 = 1; i_9 < 12;i_9 += 1) /* same iter space */
                {
                    arr_32 [i_7] [i_5] [i_5] [10] = -531153983;
                    arr_33 [i_5] = 5276554880978382744;

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_36 [i_6] |= -7382923611642059070;
                        arr_37 [i_10] [i_5] [i_7] [i_5] [i_5] = -7382923611642059070;
                        var_23 -= 3;
                    }
                }
                arr_38 [i_5] [i_5] [i_5] [i_5] = -7382923611642059069;
            }
            for (int i_11 = 3; i_11 < 14;i_11 += 1)
            {
                var_24 = (max(var_24, -125));
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        {
                            arr_48 [i_5 + 2] [i_13] [6] [i_11 - 3] [i_13] |= 41;
                            var_25 = 97;
                            var_26 = (max(var_26, -7382923611642059070));
                        }
                    }
                }
            }
        }
        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {
            var_27 = -7026827907751875873;
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        {
                            arr_59 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] = 7026827907751875856;
                            var_28 = 2741096294102560150;
                            arr_60 [7] [i_16] [i_5] [1] [i_5 - 2] = 19955;
                            arr_61 [i_5 + 1] [i_5] [i_14] [i_5 + 1] [i_16] = 15744748727297195651;
                        }
                    }
                }
            }
            var_29 = (min(var_29, 9923));
            arr_62 [i_5] = 4294967295;
        }
        /* vectorizable */
        for (int i_18 = 3; i_18 < 14;i_18 += 1)
        {
            var_30 = 531153973;
            arr_67 [0] &= 10788378671732284060;
        }
        for (int i_19 = 4; i_19 < 12;i_19 += 1)
        {
            arr_71 [i_5] = 7382923611642059070;
            var_31 = 0;
        }
        var_32 *= 48;
        arr_72 [i_5] [i_5] = -1;
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 15;i_20 += 1)
        {
            for (int i_21 = 2; i_21 < 11;i_21 += 1)
            {
                {
                    var_33 = 1;
                    var_34 = (max(var_34, 7382923611642059074));
                    var_35 *= 0;
                }
            }
        }
    }
    for (int i_22 = 0; i_22 < 0;i_22 += 1)
    {
        var_36 = 9183763241992332348;
        arr_80 [i_22] = 1;
        var_37 = -10568;
    }
    for (int i_23 = 0; i_23 < 1;i_23 += 1)
    {
        var_38 = (max(var_38, 4051623230092730227));
        arr_83 [i_23] = 2027948082166096083;
        arr_84 [12] |= 114;
    }
    var_39 = var_9;
    #pragma endscop
}
