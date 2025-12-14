/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [6] = var_4;
        var_15 = ((((11169228559661428078 >> (834583835 - 834583817)))) ? (((-((-(arr_1 [i_0] [7])))))) : ((-(((arr_1 [i_0] [9]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))));
        var_16 = (min(var_16, (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            arr_8 [i_1] = -98;
            var_17 = (arr_7 [i_1] [i_2]);
            var_18 &= (min((arr_3 [i_2] [i_1]), (arr_5 [i_1])));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
        {
            var_19 = (max(var_19, ((min((((4 ? 5177230845204385135 : (arr_5 [i_1])))), 41)))));
            var_20 *= ((-(((arr_4 [i_3]) ? ((max(175, (arr_4 [2])))) : var_12))));
            arr_12 [i_1] [i_1] = (max((min((max(var_8, 834583835)), (((7277515514048123510 ? var_3 : (arr_6 [i_1] [i_3])))))), var_13));
        }
        var_21 = ((~((var_9 ? (arr_3 [i_1] [i_1]) : (arr_10 [i_1])))));

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        var_22 = (arr_20 [15] [6] [15] [i_6] [i_6]);
                        var_23 &= ((11169228559661428092 ? (((arr_5 [i_5]) ? 80 : 1763188551)) : (((((35 ? var_0 : var_8))) ? -159 : ((3460383476 ? var_7 : 834583816))))));
                        var_24 = (((((max(var_6, var_3)))) ? 834583826 : (((arr_16 [14] [i_5] [i_4] [i_1]) ? var_6 : ((64 ? 7277515514048123545 : 140737471578112))))));
                    }
                }
            }

            /* vectorizable */
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                var_25 = (-(arr_23 [21] [6] [i_1]));
                var_26 = var_0;
            }
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_27 = (max(2502696864635947869, (min(var_10, (arr_20 [i_1] [i_8] [11] [i_1] [i_1])))));

            /* vectorizable */
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                var_28 = var_8;
                var_29 = var_5;
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        {
                            var_30 = var_11;
                            arr_32 [i_9] = (arr_28 [i_11] [i_9] [i_9] [i_1]);
                            arr_33 [i_1] [i_9] [i_9] [i_10] [i_1] = (arr_21 [i_1] [i_1] [i_1] [i_1] [19]);
                        }
                    }
                }
            }
        }
        var_31 *= var_4;
        arr_34 [i_1] = var_6;
    }
    var_32 |= (((var_14 ? ((var_11 ? var_9 : var_12)) : var_3)));
    var_33 = (((((var_7 ? ((11169228559661428065 ? var_12 : 196)) : (81 >> var_2)))) ? ((var_0 ? var_8 : ((-2738927300423802994 ? var_3 : -2250022975291641434)))) : var_5));
    var_34 ^= var_1;
    #pragma endscop
}
