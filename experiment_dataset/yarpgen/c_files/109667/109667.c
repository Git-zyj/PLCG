/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((((var_2 * var_7) ? -var_11 : ((var_9 ? 9223372036854775807 : var_13)))) * var_2))));
    var_17 = (((max(((max(27, 9188))), var_10)) | ((min(var_14, var_0)))));
    var_18 = (min((max((~1), var_11)), 1));
    var_19 = var_14;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 &= var_10;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = (arr_6 [i_0] [i_1 - 1] [i_2] [i_2 - 2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_22 += min(1, ((4957827349945107958 && (arr_1 [i_2 - 2] [i_1 + 1]))));
                                var_23 = (((((-(arr_8 [i_2 - 1] [i_1 + 1])))) % (max((arr_12 [i_3] [i_3] [i_2 + 1] [i_1 - 1] [i_1 - 1]), (arr_6 [i_2] [i_2 - 1] [i_1 - 1] [i_1])))));
                                arr_13 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((1 ? (((((((arr_8 [i_2] [i_4]) ? (arr_10 [i_0] [i_0] [i_2 - 1] [8] [0]) : var_6))) ? ((min((arr_6 [i_0] [0] [0] [i_4]), 1))) : (arr_1 [i_0] [i_1 - 1])))) : ((min(13488916723764443632, 4294967295)))));
                                var_24 = var_1;
                            }
                        }
                    }
                    var_25 = (max((((arr_12 [i_0] [i_2 + 1] [10] [i_1 - 1] [i_0]) ? (arr_1 [i_0] [i_2 + 1]) : (arr_12 [i_0] [i_2 + 1] [i_2] [i_1 - 1] [i_0]))), (((arr_1 [i_0] [i_2 + 1]) ? (arr_1 [i_2] [i_2 + 1]) : (arr_12 [i_0] [i_2 + 1] [i_2] [i_1 - 1] [i_1 - 1])))));
                    var_26 = ((!(arr_9 [i_2] [i_0] [i_0])));
                }
            }
        }

        /* vectorizable */
        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            var_27 ^= (((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_12 [i_5] [i_5] [i_0] [i_0] [i_0]))) ^ (((((arr_8 [i_0] [1]) == -94))))));

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                var_28 = (arr_7 [i_0]);
                var_29 += (arr_1 [i_6] [i_0]);
                var_30 = (((arr_0 [i_5 - 2] [i_5]) ? (arr_0 [i_5 - 2] [i_5]) : (arr_0 [i_5 - 2] [i_5])));
            }
            for (int i_7 = 1; i_7 < 11;i_7 += 1)
            {
                var_31 &= var_7;
                arr_21 [i_0] [i_0] [i_7] [3] = ((-(arr_15 [i_0] [i_5] [i_5])));
                var_32 = ((!(arr_10 [3] [3] [9] [i_7] [i_7 + 1])));
            }
            var_33 = ((~(arr_5 [i_0] [i_5])));
            var_34 *= ((((~(arr_19 [i_0] [i_0]))) ^ 536870912));
            var_35 = ((-11528 | (arr_6 [i_5] [i_5] [i_5 - 2] [i_5 + 1])));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_36 = (arr_11 [i_8] [i_8] [i_8] [i_8] [i_8] [0] [i_8]);
            arr_24 [2] [2] = var_4;
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        arr_27 [16] = -11528;
        var_37 = (1 * 1);
        arr_28 [i_9] = (arr_26 [i_9] [i_9]);
    }
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        var_38 = (min(var_38, var_6));
        arr_32 [i_10] = ((((max(((-536870895 ? 65535 : 0)), ((((arr_26 [i_10] [i_10]) && -9220)))))) > (min(13, 16769994428482221923))));
        arr_33 [i_10] [i_10] = (((min((min(var_6, -536870909)), (~var_9))) + ((-(arr_31 [i_10])))));
    }
    #pragma endscop
}
