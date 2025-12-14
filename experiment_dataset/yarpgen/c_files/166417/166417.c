/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = 77;

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_12 = (arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]);
                        var_13 = ((!(!1)));
                        var_14 ^= (-76 <= var_2);
                        arr_10 [i_0] [i_1 - 3] [i_0] [i_0] [i_0] [i_2] = ((6204474884775493644 ? -84 : 19810));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_15 = ((~((~((var_2 ? var_6 : 19824))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] = max((arr_2 [i_0]), var_4);
                    }
                    var_16 -= (arr_2 [0]);
                    var_17 = -32751;
                    var_18 = (min(var_18, (~-105)));

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_16 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1] = ((((((11782 ? 2680465712 : -16384))) ? -9159088813215993891 : ((32745 / (arr_9 [i_0] [i_1] [i_1 - 3] [i_0] [i_1] [i_5]))))));
                        var_19 = (min(var_19, ((((((-11782 ? (((var_8 ? var_3 : 36029))) : (arr_0 [i_0 + 4] [i_5])))) ? 565852214 : (((~(arr_11 [i_0] [i_0] [i_1] [i_5] [i_1] [i_5])))))))));
                        arr_17 [i_0] [i_2] [i_0] [i_5] = (((63 & 8940511592973951358) ? (arr_1 [i_0]) : (((arr_4 [i_0 + 4] [i_1 + 1] [i_0 + 4]) ? 45726 : (max((arr_12 [i_0] [i_1] [11] [i_0]), (arr_0 [i_1] [i_1])))))));
                    }
                }
                arr_18 [i_0] [1] = (((arr_14 [i_0] [i_0] [i_0]) ? (max(-2118602517, var_4)) : 27130));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_0] = ((-((16382 ? (arr_20 [i_1] [i_0] [i_7]) : 19))));
                            arr_25 [i_0] [i_0] [4] [i_0] [4] [i_7] = ((var_6 + -18763) - (arr_7 [i_0] [i_0 - 1]));
                            var_20 = (min(var_20, (arr_20 [i_0] [16] [i_7])));
                        }
                    }
                }
                var_21 = (min(var_21, ((max((arr_1 [i_0 + 2]), ((-(((arr_7 [i_0] [i_1]) - 6603)))))))));
            }
        }
    }

    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        arr_28 [i_8] = (max(var_6, (((arr_27 [i_8]) ? (((22665 ? 19804 : (arr_23 [i_8])))) : 16777152))));
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 12;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        arr_36 [i_8] = 31865;
                        var_22 = ((-(!22421)));
                        var_23 = (min(var_23, ((max((arr_32 [5] [5]), var_6)))));
                    }
                    arr_37 [i_8] [i_8] [i_8] [i_8] |= ((~((-((var_1 ? 375 : -16373))))));
                }
            }
        }
    }
    #pragma endscop
}
