/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = min((min((arr_2 [i_1] [i_1] [i_0]), var_9)), ((((arr_0 [i_1] [1]) < (arr_3 [i_0] [i_1] [i_1])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 = (((arr_10 [i_2] [i_4] [i_3] [i_2] [i_1] [i_0] [i_0]) / ((min(var_1, var_2)))));
                                arr_12 [i_4] [i_3] [i_1] [i_4] = ((var_10 ? var_6 : (!var_4)));
                                var_13 = -var_2;
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_16 [i_5] &= var_7;
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    var_14 = (~-var_3);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_15 = (((arr_23 [i_8] [i_7] [i_6 - 1]) ? (arr_15 [i_6]) : (var_5 < -13372)));
                                var_16 = (((arr_24 [i_9 + 1] [i_6 + 1]) ? var_2 : (arr_24 [i_9 + 1] [i_6 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_10 = 3; i_10 < 7;i_10 += 1)
    {
        arr_27 [i_10] [i_10] = ((min(((16418532056228345531 + (arr_1 [i_10])), (((~(arr_26 [1] [i_10]))))))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                {

                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        arr_37 [i_12] [i_11] = ((((max(var_6, (var_9 / var_1)))) ? (arr_11 [i_10 - 2]) : (min(var_6, (~var_5)))));
                        var_17 ^= var_9;
                    }
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        var_18 = (((~var_6) < ((min((((!(arr_10 [i_10] [i_11] [16] [i_12] [i_12] [i_14] [i_14])))), ((var_6 ? var_5 : (arr_34 [i_10] [i_11]))))))));
                        var_19 = var_0;
                        arr_42 [i_11] = (min(((((!var_4) <= (arr_22 [i_10] [i_10] [i_10] [i_10 + 2])))), (var_8 + var_7)));
                        var_20 &= (var_3 < -var_5);
                    }
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        arr_46 [i_11] [1] [1] = (((min((var_7 + 11451146793386092118), var_6)) > ((max((arr_25 [i_11] [i_10 + 1]), ((min(2436, var_5))))))));
                        var_21 = ((((!(arr_9 [i_10] [i_10 - 3] [8] [i_12])))));
                        var_22 = (min((min(((min(var_8, (arr_38 [i_11] [i_12] [i_12] [i_11] [i_10])))), ((var_3 ? var_5 : 140737454800896)))), var_5));
                    }
                    /* vectorizable */
                    for (int i_16 = 2; i_16 < 7;i_16 += 1)
                    {
                        arr_49 [7] [i_11] [i_12] [i_11] [i_16 - 1] [i_16] = (~var_8);
                        var_23 = (11451146793386092118 + 1073);
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 10;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 10;i_18 += 1)
                        {
                            {
                                arr_54 [i_10] [i_11] [1] = (((((min(154, var_10)) + -32755))) ? (max(((max(var_5, var_5))), var_3)) : var_4);
                                var_24 = (max(((((65535 > var_3) + (min(var_9, var_10))))), ((-32755 ? (!var_1) : (22 * var_5)))));
                                var_25 = (max(var_25, var_7));
                            }
                        }
                    }
                }
            }
        }
        var_26 = (((arr_29 [i_10 + 2] [i_10 + 2]) >= (((((arr_29 [i_10 - 3] [i_10 + 3]) && (arr_29 [i_10 + 1] [3])))))));
    }
    for (int i_19 = 4; i_19 < 20;i_19 += 1)
    {

        for (int i_20 = 1; i_20 < 20;i_20 += 1)
        {
            arr_59 [i_19] [i_20] = (((((-(arr_8 [i_19] [i_20] [i_19 - 3] [i_19] [i_20])))) ? var_3 : -var_4));
            arr_60 [i_20 - 1] [i_20] [i_19] = (((((arr_8 [i_19] [i_20 - 1] [i_20 - 1] [1] [i_20]) << (var_6 - 5883325297135356700))) <= (((-((((arr_5 [i_19] [18] [i_19 - 1] [i_19]) > var_5))))))));
        }
        var_27 = ((~(max((var_4 / var_5), var_1))));
    }
    var_28 = var_10;
    #pragma endscop
}
