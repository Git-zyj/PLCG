/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 = (min(var_13, ((min((arr_2 [i_0 - 1] [i_0 - 1]), (((arr_2 [i_0 - 1] [i_0 - 1]) ? var_10 : var_1)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_14 = (max(((-47 ? 1 : 225)), (((var_8 <= (arr_10 [i_0 - 1] [i_0] [i_1] [i_1] [i_2] [i_3]))))));
                        var_15 = min((24576 && 2288923010), (~8869));
                        var_16 -= (((var_8 ^ var_4) ? var_12 : var_1));
                    }
                    var_17 *= (((max((((var_6 ? (arr_10 [14] [i_1] [i_0] [i_0] [i_1] [i_0]) : var_12))), ((var_8 ? var_10 : (arr_6 [i_1]))))) << (arr_4 [i_0] [i_1])));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {

        for (int i_5 = 2; i_5 < 23;i_5 += 1)
        {
            var_18 ^= (3193695068 / var_5);
            arr_16 [i_5] [i_4] [i_5] = var_12;
            var_19 *= var_11;
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            var_20 = (max(var_20, (1 == 1)));
                            var_21 ^= (min((((((15341 ? 0 : 107))) ? var_7 : -var_1)), var_2));
                            var_22 = (min(((((var_8 ? (arr_19 [6] [i_5 - 2] [i_6] [i_6]) : var_8)) / (arr_21 [i_5] [19] [0] [0] [i_4] [i_6 - 1] [i_8]))), (arr_14 [i_5] [i_8])));
                            arr_23 [i_4] [i_6] &= (arr_17 [i_5 + 1] [i_4] [i_5] [i_5 + 1]);
                        }
                    }
                }
            }
            var_23 -= (4294967294 >> 1);
        }
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                var_24 += ((((max((arr_0 [i_10] [i_10]), (arr_21 [i_4] [i_4] [4] [i_9] [i_9] [i_10] [i_10])))) ? (((min(var_2, (arr_1 [i_10]))))) : var_6));
                arr_29 [i_4] [i_9] [24] [24] = var_5;
            }
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                arr_32 [17] [18] [i_11] = (~1);
                arr_33 [i_4] [i_9] [i_11] [i_4] = -0;
                arr_34 [i_4] [9] = (!var_4);
            }
            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 23;i_14 += 1)
                    {
                        {
                            var_25 &= ((((arr_6 [i_9]) ? ((~(arr_11 [i_9] [i_13] [i_14]))) : (arr_35 [i_12 - 1] [i_12 - 1] [i_14 + 2] [i_14 - 1]))));
                            var_26 = ((((((((var_10 ? var_4 : var_11))) ? var_9 : var_5))) ? ((((!(((var_9 ? var_6 : var_0))))))) : (min(var_7, (1 / 1)))));
                            arr_46 [i_14] [i_13] [i_12] [i_13] [i_9] [i_13] [i_4] = (~-678086554);
                        }
                    }
                }
                var_27 += ((arr_42 [i_12] [i_12 - 1] [i_12 - 1] [i_12]) ? (min((arr_42 [i_9] [i_12 - 1] [i_12 - 1] [i_12 - 1]), (arr_8 [i_4] [i_9] [i_12 - 1]))) : (arr_21 [i_9] [i_12 - 1] [i_12] [i_12 - 1] [i_12] [i_12 - 1] [i_12]));
                arr_47 [i_4] [i_4] [i_12] = (((((arr_36 [i_12 - 1] [i_12 - 1] [i_12 - 1]) > (arr_36 [i_12 - 1] [11] [i_12 - 1]))) ? (((((arr_36 [i_12 - 1] [14] [i_12 - 1]) == (arr_36 [i_12 - 1] [i_12] [i_12 - 1]))))) : (((arr_36 [i_12 - 1] [i_12] [i_12 - 1]) ? (arr_36 [i_12 - 1] [i_12 - 1] [i_12 - 1]) : (arr_36 [i_12 - 1] [i_12] [i_12 - 1])))));
            }
            /* vectorizable */
            for (int i_15 = 4; i_15 < 24;i_15 += 1)
            {
                arr_51 [i_4] [i_4] [i_15 + 1] &= ((~(~var_7)));
                arr_52 [1] [i_9] [i_9] [i_4] = (40040 ? 1 : 255);
            }
            var_28 = var_11;
            var_29 -= ((!var_1) >> (var_4 - 28620));
        }
        for (int i_16 = 0; i_16 < 25;i_16 += 1)
        {
            arr_55 [i_16] [i_16] = (530734324085552312 || -3200628060859152830);
            var_30 = (min(var_30, var_4));
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 25;i_17 += 1)
        {
            var_31 = ((!(arr_21 [i_4] [i_17] [i_17] [i_17] [0] [i_17] [i_17])));
            var_32 = (~(arr_11 [i_4] [i_4] [i_17]));
            var_33 = (~var_4);
        }
        var_34 -= var_5;
        var_35 = min(((0 ? 1 : 1)), (((arr_44 [i_4] [i_4] [i_4] [i_4]) ? (arr_44 [i_4] [i_4] [i_4] [i_4]) : (arr_44 [i_4] [i_4] [i_4] [i_4]))));
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {
        arr_61 [i_18] = ((((var_10 ? var_1 : var_2)) <= var_1));
        var_36 &= ((var_10 ? (arr_35 [i_18] [i_18] [i_18] [i_18]) : var_2));
        var_37 = (arr_48 [i_18]);
        arr_62 [i_18] = (arr_54 [i_18] [i_18]);
    }
    var_38 = var_4;
    #pragma endscop
}
