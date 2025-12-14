/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_9));
    var_18 = (((((6741591029528497954 ? 0 : var_14))) <= var_13));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 |= (((arr_0 [i_0] [14]) != (arr_0 [1] [i_1])));
                    var_20 = (arr_0 [i_0] [i_2]);
                    var_21 = (1785303193976252529 || var_12);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_11 [i_0] [i_0 + 2] [16] = (((((-(arr_1 [i_0 - 1] [i_0 - 1])))) ? (!var_10) : (arr_0 [i_0] [i_0])));
                    var_22 = arr_0 [7] [7];
                    arr_12 [i_3] = (arr_8 [17] [i_3] [i_3] [i_4]);
                }
            }
        }

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_15 [8] [8] &= ((((arr_3 [0] [i_0] [i_0]) / 56643)));
            var_23 = -var_7;
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
        {
            arr_20 [i_0] [9] = (((arr_4 [i_6] [i_0] [i_0 + 1] [i_0 + 1]) * 1));
            var_24 -= ((~(arr_18 [i_0] [i_0] [i_6])));
            arr_21 [i_0] [14] = (var_0 && (arr_8 [16] [16] [i_0] [i_6]));
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 17;i_9 += 1)
                    {
                        {
                            arr_33 [i_7] = var_4;
                            var_25 = ((((~(arr_6 [i_6] [i_6] [i_7]))) <= -17840));
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
        {
            arr_37 [i_0] [i_0] [i_0] = ((((var_6 ? -17824 : 17826)) * -var_2));
            var_26 = (max(var_26, 1));
            var_27 = (((arr_26 [i_0]) ? ((1 ? var_6 : 17839)) : (arr_5 [i_0] [i_0 - 4])));
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    {
                        arr_48 [i_0] [i_0] [i_12] [i_13] [i_0] = (var_11 - var_6);
                        arr_49 [i_13] [1] [11] [i_12] [11] [11] = (((arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (arr_13 [i_0 - 2] [i_11] [i_0])));
                        var_28 = ((~(arr_7 [4] [17] [4])));
                    }
                }
            }
        }
        var_29 -= var_16;
    }
    var_30 = (((((((var_13 ? var_1 : var_15) + 2147483647)) << (((var_14 - var_10) - 7153193178788072968))))));
    var_31 = (((((var_14 + (3722265572 * var_13)))) ? (((852023120 ? ((var_13 >> (var_15 + 1679805231))) : var_1))) : (var_9 >> var_7)));
    #pragma endscop
}
