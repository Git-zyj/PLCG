/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-((max(0, 65535)))));
    var_12 = ((((max(var_8, (-2147483647 - 1)))) ? (((((var_9 ? var_3 : 1))) ? (~var_9) : ((0 ? var_5 : -29193)))) : 58651));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [19] [i_0] = -6;
        var_13 = (arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_3] [i_0] [i_0] [i_1] [i_0] = (min((~1), (((arr_7 [i_0] [i_0] [i_2]) ? ((min(22, 16256))) : 1))));
                        var_14 = (min(var_14, ((max((((arr_4 [i_1 - 1] [i_1] [i_1]) ? (arr_4 [i_1 + 2] [i_1] [i_1 + 2]) : (arr_7 [20] [i_1] [i_2]))), ((max(255, (arr_6 [i_1 - 1] [i_1 + 2])))))))));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                arr_19 [i_0] = 1;
                var_15 = (((arr_15 [i_0] [1] [i_5]) && (arr_15 [i_5] [i_0] [i_0])));
                var_16 = ((-(((233 == (arr_6 [i_0] [14]))))));
                var_17 = 3648187129;
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_18 = (((65534 & 19) ? (((65516 << (244399422 - 244399414)))) : (((arr_7 [i_0] [i_7] [17]) / 9223372036854775807))));
                            var_19 = ((((1 ? 4294967295 : -748776826030499586)) | (65534 ^ 2)));
                            arr_25 [i_0] [i_0] [i_5] [i_0] [i_0] = ((2554648235 || ((((-29651 + 2147483647) >> (65535 - 65509))))));
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            arr_33 [0] [i_10] [i_0] [i_8] [i_0] [i_0] [i_0] = (((arr_9 [8] [i_4] [i_8] [i_4] [i_0]) ? (arr_0 [i_4]) : (((arr_17 [i_0] [15] [i_0] [i_0]) ? 244399445 : 65521))));
                            var_20 = (((((4294967281 ? -1 : 65535))) ? -244399431 : (((arr_22 [i_0] [i_0] [i_4] [i_0] [i_9 + 1] [16]) ? (arr_9 [i_0] [0] [i_8] [i_9] [i_0]) : 4))));
                        }
                    }
                }
                var_21 = (((arr_13 [i_0] [i_4] [17]) ? ((((arr_29 [2]) % (arr_30 [i_0] [i_4] [21] [21])))) : ((65525 ? (arr_26 [i_0] [i_0]) : 15245467335271184615))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_22 = (max(var_22, (((3763642653 > (((arr_31 [i_0] [i_4] [i_8] [i_8] [i_11] [i_8] [i_8]) ? 240 : -244399446)))))));
                            var_23 = (arr_14 [i_0]);
                        }
                    }
                }
                var_24 = (arr_28 [i_0] [0] [19] [i_4] [i_4] [1]);
                var_25 ^= ((-244399423 ? 0 : 65535));
            }
            arr_39 [i_0] [i_4] = 54144;
            var_26 &= (arr_4 [i_4] [i_0] [i_0]);
            var_27 = 1;
        }
    }
    #pragma endscop
}
