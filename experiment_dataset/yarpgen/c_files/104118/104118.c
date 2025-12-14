/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((var_3 + var_2) ? ((((var_3 >= 13042) > (var_4 / 4)))) : var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    arr_6 [i_0] [i_0] [i_2 - 2] = (min(var_0, (160175642 % 160175642)));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, (arr_5 [i_1])));
                                var_12 = -122;
                                arr_12 [i_4] [7] [i_2] [i_3] [i_4] [i_4] [i_0] = -160175624;
                                arr_13 [i_0] [i_0] [i_3] [i_3] [i_4] [10] = (min((((!2042627265) + (11 || 42066))), 25689));
                            }
                        }
                    }
                    var_13 = (max(42898, -160175647));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_14 = (max(var_14, (((~((max(-88, 79))))))));
                                var_15 = 127;
                            }
                        }
                    }
                }
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    arr_20 [i_0] [i_7] [i_7] = (((((var_5 & 1579545163) ^ var_7)) | var_8));

                    /* vectorizable */
                    for (int i_8 = 4; i_8 < 13;i_8 += 1)
                    {
                        var_16 = (var_0 ? 160175647 : 23470);
                        var_17 = 45330;
                    }
                    var_18 -= (min(((min((var_1 > 33554416), var_4))), var_7));
                }
                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {

                    for (int i_10 = 1; i_10 < 10;i_10 += 1)
                    {
                        arr_28 [i_9] [0] [2] [i_10] = (i_9 % 2 == 0) ? ((min((((((arr_21 [i_0] [i_9] [i_9] [5] [i_9 + 1]) + 2147483647)) >> (var_4 - 58))), 45321))) : ((min((((((((arr_21 [i_0] [i_9] [i_9] [5] [i_9 + 1]) - 2147483647)) + 2147483647)) >> (var_4 - 58))), 45321)));
                        var_19 = (1010897357 / 81);
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        var_20 = -11;

                        for (int i_12 = 1; i_12 < 13;i_12 += 1)
                        {
                            var_21 += ((var_2 < (var_2 % -33554416)));
                            var_22 = (max(var_22, (35905 * 0)));
                            var_23 = ((64979 < (var_4 < -42)));
                        }
                        arr_33 [i_9] [i_1] [i_1] = (arr_8 [i_0] [11] [i_9] [i_9]);
                    }
                    for (int i_13 = 3; i_13 < 12;i_13 += 1)
                    {
                        arr_37 [i_9] [i_9] [i_9] = max((min((min(-93, var_0)), (26254 * var_4))), (-2 || 65535));
                        var_24 += 35890;
                    }
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        var_25 = (max(var_25, ((min((((-160175670 && (-2147483647 - 1)))), (arr_8 [i_9 - 1] [i_9 + 1] [i_9 - 1] [4]))))));
                        arr_40 [i_9] [i_1] [i_9 - 1] [i_9 - 1] = (-88 / (-435108315 % 65535));
                    }
                    arr_41 [i_0] [10] [i_9] |= ((~((((((arr_0 [i_0]) & (-127 - 1)))) ? ((1860083136 ? 117 : (arr_7 [i_0] [i_0] [1]))) : (arr_3 [i_0] [i_1] [i_9])))));
                }
                var_26 = (max(var_26, (29645 < 35901)));
                arr_42 [4] [i_0] [2] = ((60 << (((~10120) + 10131))));
            }
        }
    }
    #pragma endscop
}
