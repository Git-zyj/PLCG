/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = ((((((~(arr_2 [i_0] [i_0]))) + 2147483647)) << (((((arr_0 [i_0] [i_0]) ? 18446744073709551606 : (arr_1 [i_0]))) - 18446744073709551606))));
        arr_4 [i_0] [i_0] = var_5;

        /* vectorizable */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = (arr_1 [i_1]);
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_13 = (min(var_13, ((((var_8 * var_3) ? 230 : (arr_13 [i_2 + 2] [11] [i_1 + 1] [i_1 - 1]))))));
                        var_14 = ((-(arr_1 [i_0])));
                    }
                }
            }
            var_15 = (((var_4 ? var_12 : var_12)));
            arr_14 [i_0] = ((var_10 ? 10592 : (arr_12 [i_1 - 1] [i_1 - 2] [0] [i_1 + 1])));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_16 += (44958 / 43427);
            arr_18 [i_4] = ((58280 ? 255 : 1));
            arr_19 [i_0] [i_4] [i_4] = ((arr_1 [i_0]) < (arr_1 [i_0]));
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 21;i_5 += 1)
        {
            arr_23 [i_0] [i_5] = (arr_12 [i_5 - 1] [i_5 - 3] [i_5 - 3] [i_5 + 1]);
            var_17 = (min(var_17, ((((arr_12 [i_5 - 2] [i_5 - 1] [i_5 + 1] [i_5 - 3]) ? 15 : var_6)))));
            var_18 *= ((49283 && (arr_16 [i_5 - 1] [12])));
            arr_24 [i_0] [20] = var_5;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 20;i_7 += 1)
                {
                    {
                        arr_32 [i_5] [i_0] = (arr_1 [i_0]);

                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            arr_35 [i_5] = ((!(arr_6 [i_0] [i_0] [i_0])));
                            var_19 = (!var_4);
                            var_20 = (((arr_29 [i_8 + 1] [i_7 - 2] [i_5 - 1]) ? (arr_6 [i_5 - 2] [i_7 - 1] [i_8 + 1]) : (arr_33 [i_8] [i_8] [i_8] [12] [i_8 - 1] [i_8 - 1] [15])));
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            var_21 = ((var_12 ^ ((-20009 ? (arr_6 [i_0] [i_0] [i_0]) : (arr_6 [i_9] [i_9] [i_0])))));
            arr_38 [i_0] [i_0] = (max((((arr_28 [i_0] [12] [i_9] [i_9]) << ((var_9 ? (arr_34 [i_9] [i_0] [i_9] [i_0]) : 4294443008)))), (((!(((var_8 >> (116 - 90)))))))));
            var_22 = (max(var_22, ((~(arr_10 [i_0] [i_0] [i_0] [i_0])))));
        }
        var_23 = (arr_27 [i_0] [i_0] [7]);
        /* LoopNest 3 */
        for (int i_10 = 3; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 20;i_12 += 1)
                {
                    {

                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            var_24 = ((((21 ? var_4 : var_12)) >= (((max((arr_47 [i_12 + 1] [4] [i_12] [i_10 - 1]), (arr_47 [i_12 + 1] [i_10 - 2] [i_10 - 1] [i_10 - 1])))))));
                            var_25 ^= (max((arr_49 [i_0] [i_11] [0]), (var_8 / var_11)));
                        }
                        arr_50 [i_0] [i_0] [i_11] [i_12] = (max(((1 - (((arr_5 [i_0] [i_10] [i_11]) ? (arr_11 [i_12 - 2] [13] [13] [i_0]) : var_6)))), (min((arr_27 [i_0] [i_10 - 2] [i_10 - 2]), var_6))));
                        var_26 = (min(var_26, (((((max(var_10, (arr_33 [i_12] [i_12 - 3] [i_12] [i_12] [i_11] [i_11] [i_11])))) ? ((min(1, 665744481))) : (((arr_13 [i_12] [i_12] [2] [i_11]) ? (arr_33 [i_12] [i_12 + 1] [17] [i_12] [17] [i_12 - 2] [i_11]) : (arr_13 [i_11] [i_10] [i_10] [i_10]))))))));
                        var_27 = ((~((((arr_46 [i_12 + 1] [i_10 - 1] [i_0] [21]) || 25)))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 2; i_14 < 22;i_14 += 1)
    {
        for (int i_15 = 1; i_15 < 23;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                {
                    var_28 += (max((arr_58 [i_15] [i_15 + 1] [i_15 + 1]), ((~(arr_58 [i_15] [i_15 - 1] [i_15 - 1])))));
                    arr_60 [i_14] [i_15] [i_16] [i_16] = var_2;
                }
            }
        }
    }
    #pragma endscop
}
