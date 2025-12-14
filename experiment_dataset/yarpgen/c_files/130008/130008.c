/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-((max(var_9, var_0)))));
    var_11 = (min(var_11, ((var_1 ? ((var_3 * (-45 / var_3))) : ((1 << (var_3 + 8055)))))));
    var_12 += 1338;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = (!var_0);

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_14 = (var_6 * 12655420083939223218);

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_15 |= (arr_8 [10] [i_1 + 1] [i_1]);
                            var_16 ^= (!(!var_4));
                            arr_16 [i_3] = ((var_8 ? (arr_0 [i_1 + 3] [i_1 + 3]) : (~3)));
                        }
                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 17;i_5 += 1)
                        {
                            var_17 ^= -1358;
                            arr_20 [i_0] [i_1 + 2] [i_1] [i_5] [i_5] [i_5] |= (((arr_18 [i_5 - 3] [i_5] [i_5 + 2] [i_5 - 2] [i_5 - 2]) ? (-3 / 8) : (~var_7)));
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            arr_26 [i_0] [i_7 + 1] [i_2] [i_6] [i_6] [i_1] = ((-(arr_12 [i_7])));
                            var_18 *= arr_6 [i_7 + 1];
                            var_19 &= -var_2;
                            var_20 = (~2147483647);
                            var_21 ^= ((-(1 & -322472646606958067)));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_22 += ((((29 ? var_0 : (arr_29 [i_8] [i_8] [i_6] [i_6] [i_2] [i_0] [i_0]))) != (~var_9)));
                            var_23 ^= (arr_2 [i_0]);
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 248;
                            var_24 = (max(var_24, ((62 + (arr_14 [i_0] [i_1 + 3] [i_6 - 1] [i_1 + 3] [i_8])))));
                            var_25 = (max(var_25, 2147483632));
                        }
                        var_26 ^= (((arr_15 [i_6 - 1] [i_6] [i_6 - 1] [i_1 - 1] [15]) ? var_8 : (arr_15 [i_6 - 1] [i_6] [i_0] [i_1 - 1] [i_0])));
                        var_27 += (((arr_0 [i_6] [i_6 - 1]) ? (arr_0 [i_6] [i_6 - 1]) : (arr_0 [i_6] [i_6 - 1])));
                        var_28 ^= -22517;
                        var_29 = (max(var_29, -8980908887725355963));
                    }
                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        var_30 += var_9;
                        var_31 = ((-(((((((arr_28 [i_0] [i_1] [17] [i_1] [i_2]) && 9483679941673914432))) != var_5)))));
                        var_32 *= ((!(arr_23 [i_9])));
                        var_33 += min((((((-(arr_1 [i_0])))) || 1)), ((!(!var_9))));
                    }
                    for (int i_10 = 1; i_10 < 16;i_10 += 1)
                    {
                        var_34 = (max(var_34, ((1359 ? (max(62, ((0 ? 23042 : 1)))) : 211))));
                        var_35 = ((~(arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])));
                    }
                    arr_38 [i_0] = var_2;
                    var_36 += 236;
                    var_37 *= ((((((1 ? 1 : 5092657003358707611)) >> (((arr_25 [i_1 + 1] [i_1] [i_1] [i_1 - 1] [i_1]) - 3709583979)))) != (arr_27 [i_2] [i_1 + 3] [i_2] [i_2] [i_2] [i_1 - 1] [i_2])));
                }
            }
        }
        var_38 -= (min((max((!748), (max((arr_30 [15] [i_0] [i_0] [i_0]), 1)))), -26));
        var_39 = (min(var_39, (arr_32 [1] [1] [i_0] [i_0])));
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        var_40 &= ((!(((127 ? (max(var_6, 9332699572823193594)) : 105)))));
        var_41 = (max(var_41, ((((((min((arr_40 [i_11]), 1))) ? ((var_4 ? 0 : var_2)) : 89))))));
    }
    #pragma endscop
}
