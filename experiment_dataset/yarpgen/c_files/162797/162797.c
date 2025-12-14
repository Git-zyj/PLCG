/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_2;
    var_12 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = ((var_3 ? ((((arr_0 [8] [8]) ? 63 : (arr_0 [i_0] [i_0])))) : (arr_1 [i_0] [i_0])));
        arr_2 [1] = (0 * var_9);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_14 = 63;
                var_15 = var_8;
                var_16 = ((~(arr_0 [i_0] [7])));
            }
            var_17 = ((!(~49)));
            var_18 = var_7;
            arr_8 [i_0] [i_1] = (arr_0 [i_0] [i_1]);
        }
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            var_19 = ((((((arr_0 [9] [9]) ? 2180346361 : 9223372036854775789))) ? (536805376 >= 57) : var_6));

            for (int i_4 = 4; i_4 < 7;i_4 += 1) /* same iter space */
            {
                var_20 = (min(var_20, (((((((-9223372036854775790 ? -9223372036854775769 : 1571187082)) + 9223372036854775807)) << 1)))));
                arr_14 [i_0] [i_0] = (~(-2147483647 - 1));
            }
            for (int i_5 = 4; i_5 < 7;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 2; i_6 < 8;i_6 += 1)
                {
                    var_21 = (min(var_21, (((-555633983932994333 || (((arr_19 [i_6] [i_0] [i_0] [i_0]) > var_5)))))));
                    arr_20 [i_0] [i_3] [i_5] [i_6 - 1] [i_0] [7] = (-9223372036854775785 >= -55);
                    var_22 *= ((((var_0 ? var_8 : -142833489)) < ((1187631141 ? (arr_18 [4] [1] [4] [4]) : var_5))));
                    arr_21 [i_0] [i_5] = (arr_3 [i_5]);
                    var_23 = ((9223372036854775784 ? (9200420955895199080 + var_9) : (arr_16 [i_3 - 2] [i_5] [i_5 - 3] [i_6 + 2])));
                }
                arr_22 [i_5] [i_3] [i_5 - 4] [1] = 61;
                arr_23 [i_5] [1] [i_5] = ((var_7 ? (((arr_4 [i_0] [i_3 + 1] [i_3 + 1]) ? (arr_3 [i_5]) : (arr_0 [i_3] [i_3 - 3]))) : (arr_6 [i_5] [i_0] [i_5] [i_5 + 1])));
                arr_24 [i_5] = (arr_12 [i_0] [4] [i_3 - 2]);
            }
            var_24 = (max(var_24, ((((arr_11 [i_3 - 1] [i_3 + 1]) + (((((arr_1 [8] [6]) != var_8)))))))));
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            var_25 *= (arr_27 [i_0]);
            var_26 ^= ((!(arr_5 [3] [i_0] [i_0])));
            arr_28 [i_0] [i_7] [i_0] = var_1;
            var_27 *= ((4406137048533445990 << (((((-1356868909809562736 / 17592051826688) + 77151)) - 21))));
        }

        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            var_28 = (max(var_28, var_0));
            arr_32 [i_0] [i_8] = (var_9 & var_5);
        }
    }
    #pragma endscop
}
