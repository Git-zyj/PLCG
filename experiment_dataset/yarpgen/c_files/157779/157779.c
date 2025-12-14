/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= ((~(max(((1114776090090540330 ? 213 : var_4)), var_10))));
    var_17 = (((((var_3 ^ var_1) ? -1 : (-2147483647 - 1)))) ? (((~((var_9 ? var_9 : var_10))))) : var_1);

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_18 &= (max(var_12, (min((arr_1 [i_0] [i_0 - 2]), -6951))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                var_19 &= (arr_4 [i_0] [i_0 + 1] [i_2] [i_2]);
                arr_6 [i_2] = ((arr_0 [i_0 - 2]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 4]));
            }
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {

                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    var_20 = var_6;
                    arr_11 [7] [i_1] [7] [i_1] [i_1] [i_4] = ((~(arr_10 [i_0] [i_0 - 1] [i_4] [8] [i_0 - 2] [i_0 + 1])));
                    var_21 = ((-(arr_4 [i_0 - 2] [i_1] [i_3] [i_4])));
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_22 = ((((arr_8 [i_1]) + 9223372036854775807)) << (((var_8 + 11095) - 48)));

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_23 &= (((((var_2 ? 4294967278 : (arr_1 [i_6] [3])))) ? var_11 : (arr_9 [i_6] [i_1] [i_1])));
                        var_24 ^= (arr_14 [i_0 - 2] [i_0 - 4]);
                        arr_19 [i_0] [i_1] [i_1] [i_6] = var_14;
                        var_25 = (arr_10 [i_0 - 2] [i_0] [i_3] [2] [i_0 - 3] [i_0 - 1]);
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        arr_23 [1] [i_1] &= (arr_7 [i_5] [i_1] [i_0 - 2]);
                        arr_24 [i_7] [7] [i_0 - 1] [i_1] [i_0 - 1] = (arr_20 [i_0 - 1] [i_1] [i_3] [9] [i_1] [i_5]);
                        var_26 = (((arr_21 [i_0 - 1]) >= 0));
                    }
                }

                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    var_27 = (arr_21 [i_8 - 1]);
                    arr_28 [i_8] [5] [i_1] [i_0] = ((-10214 ? -var_6 : (((arr_3 [i_0]) ? 4925 : (arr_17 [i_0] [i_1] [i_3])))));
                    var_28 = (((arr_12 [i_8 + 1] [i_3] [i_0] [i_0]) ? 3695103149 : (arr_12 [i_0 - 4] [i_0 - 4] [i_3] [i_8])));
                }
            }
            arr_29 [i_0] [i_1] [i_1] = ((~(arr_14 [i_0] [i_1])));
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                var_29 ^= (arr_12 [i_0] [i_0 - 2] [i_0 - 1] [i_9]);
                arr_34 [i_0] [i_0] = 214054657;
            }
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 4; i_12 < 8;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        {
                            var_30 = ((((min(var_1, var_15))) == var_11));
                            var_31 = ((max(var_15, (arr_32 [i_0] [i_9]))));
                        }
                    }
                }
                var_32 = (((arr_25 [i_0 + 1] [i_0 + 1] [i_0 - 2] [8] [i_0 - 2]) ? (((arr_12 [i_0] [i_9] [i_9] [i_11]) ? (arr_17 [i_0] [i_9] [i_11]) : var_14)) : (((var_8 + 2147483647) << (arr_21 [i_0 - 4])))));
            }
            var_33 = var_10;
            arr_42 [i_0] [i_0] = (arr_21 [i_0]);

            /* vectorizable */
            for (int i_14 = 1; i_14 < 7;i_14 += 1)
            {
                var_34 = var_3;
                var_35 -= var_10;
            }

            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                var_36 ^= (!(((arr_44 [i_0 - 4] [i_0 - 3] [i_0 - 3]) && (arr_44 [i_0 + 1] [i_0 - 4] [i_0 - 1]))));
                var_37 = ((!(arr_0 [i_0])));
            }
        }
        var_38 = ((-(min(var_11, (arr_16 [i_0] [i_0] [i_0] [3] [i_0] [3] [2])))));
        var_39 = ((~(max(var_11, (((arr_2 [i_0] [i_0 - 1]) ? var_7 : var_12))))));
        arr_50 [i_0] = (((((min((arr_8 [i_0]), (arr_14 [i_0] [i_0 - 1])))) ? ((((arr_30 [i_0 - 2] [i_0]) ? 3677698091212625609 : (arr_35 [i_0] [i_0])))) : ((~(arr_1 [i_0] [i_0]))))));
    }
    #pragma endscop
}
