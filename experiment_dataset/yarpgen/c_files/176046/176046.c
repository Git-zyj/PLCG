/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_15 & ((var_6 ^ (var_4 << var_14)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = (((((((!(arr_2 [10])))) << ((((-1709917897 ? 39505 : var_9)) - 39500)))) % (arr_1 [i_0])));
        var_20 = (max(var_20, ((max(39505, (arr_1 [i_0]))))));
        var_21 = (((!((((arr_2 [i_0]) | 117))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1] = 42;

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            arr_20 [i_1] [i_4] [i_3] [i_2] [i_1] = (((arr_19 [i_5] [i_1] [i_3] [i_4] [i_5]) ? var_8 : (arr_16 [i_1])));
                            arr_21 [i_1] [i_1] [i_1] [i_4] = (var_10 > 16522);
                        }
                    }
                }
                arr_22 [i_1] [i_1] [i_3 + 2] = (((((var_9 / (arr_17 [i_1] [i_1])))) ? 26028 : ((31 ? 26026 : 0))));
                arr_23 [i_1] [i_2] [i_1] = 39505;
                var_22 = ((-((((arr_10 [i_1] [i_2]) >= (arr_13 [i_1] [i_2] [i_3] [i_2]))))));
            }
            var_23 = arr_8 [1] [i_1];

            for (int i_6 = 2; i_6 < 18;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    arr_29 [i_1] [i_7] [i_6 - 2] [i_7] = (arr_8 [i_2] [i_1]);
                    var_24 ^= (((((var_12 ? (0 & var_8) : (arr_18 [i_6 + 1] [i_2] [i_6] [i_7] [i_6])))) ? ((~(arr_14 [i_1] [i_6 + 1] [i_6] [i_6]))) : (~65535)));
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    var_25 = ((((((max(26646, 26031))) ? ((((arr_12 [i_1]) ? (arr_11 [i_1] [i_1] [i_1] [i_1]) : (arr_24 [i_1] [i_2] [i_1])))) : ((-(arr_4 [i_1]))))) << (((((2147483647 > 1) - 26058)) - 18446744073709525547))));
                    arr_32 [i_8] [i_1] [i_1] [i_1] = ((((((((2147483640 << (57503 - 57503)))) ? 1696791836 : (arr_18 [i_1] [i_1] [i_1] [i_1] [i_1])))) ? -7496478053412812070 : -3662425369790751323));
                    arr_33 [i_1] [i_1] [i_1] [i_6 - 2] [i_8] = var_15;
                }

                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    arr_37 [i_1] [i_1] [i_1] [i_9] = (max((arr_27 [i_1]), (((1 - -7893667837751490008) ? -110 : 256))));
                    arr_38 [i_1] [i_1] = (arr_12 [i_2]);
                    var_26 = ((((((65532 << (26030 - 26030))))) ? var_8 : ((((((max(2296409449, var_3))) && ((max(var_3, 1984)))))))));
                    var_27 ^= (max(((-83 - (arr_31 [i_1]))), (!-22325)));
                }
            }
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_28 -= (((((-(arr_11 [i_1] [i_1] [i_11] [i_1])))) * (arr_5 [i_1] [i_2])));
                            var_29 = (min(var_29, ((max((max(26030, (((arr_25 [i_1] [i_10]) ^ (arr_35 [i_1] [i_2] [13] [i_2] [i_12]))))), (((var_13 ? 24025 : (arr_15 [i_11] [i_2] [i_2] [i_1])))))))));
                            var_30 = 9223372036854775807;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
