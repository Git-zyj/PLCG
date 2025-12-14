/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= -var_5;
    var_12 = (min(-4548542916584355432, (var_8 ^ 1)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    var_13 = ((max((var_0 ^ 27076), (min(var_1, (arr_3 [2] [i_0]))))));
                    var_14 -= min(((!(var_9 % 38460))), ((!(((var_6 ^ (arr_2 [i_0 + 2])))))));
                }

                for (int i_3 = 4; i_3 < 12;i_3 += 1)
                {
                    arr_12 [i_1] [i_1] [i_1] [i_0] = ((-((var_5 ? (arr_1 [i_1]) : var_6))));
                    var_15 = (min((((var_0 || (arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 2])))), ((~(arr_2 [i_0 + 1])))));
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    var_16 = (max(var_16, (arr_8 [i_1])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_17 = (1187910040 / 1250571300952147061);
                                var_18 = (max(var_18, ((-(((arr_14 [i_0] [i_0 - 1]) ? (arr_3 [i_0 + 1] [i_0]) : (arr_14 [i_0 - 2] [i_0 - 2])))))));
                                var_19 -= var_5;
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    var_20 = (max(var_20, (arr_15 [i_0] [i_0])));
                    var_21 = (min(var_21, (arr_22 [i_0 - 1] [i_0 + 1] [i_0 + 2])));
                    var_22 = (((((((min(-112, (arr_16 [i_0 - 2] [i_1] [i_1] [i_7]))) + 2147483647)) >> (min(6, 1)))) + ((((arr_9 [i_0 + 2]) || 120)))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    var_23 = (min(var_23, (((((var_9 ? (arr_27 [i_0] [i_0] [4] [i_0]) : (arr_20 [i_0] [i_0] [i_0 - 1] [i_8] [i_1] [i_0]))) < var_3)))));

                    for (int i_9 = 4; i_9 < 12;i_9 += 1)
                    {
                        var_24 ^= 1;

                        for (int i_10 = 1; i_10 < 12;i_10 += 1)
                        {
                            var_25 = (max(var_25, (((((((arr_19 [i_0] [i_1] [i_0] [13] [i_10]) >= (arr_11 [i_0] [i_0 - 2] [i_0] [i_0])))) + (arr_8 [i_10 + 2]))))));
                            arr_34 [i_0] [i_10] = (!var_10);
                            arr_35 [i_10] [i_1] [i_1] [i_9] = (arr_13 [i_10 + 1] [i_10]);
                            arr_36 [i_10] [i_10] = (((arr_20 [i_10 - 1] [i_10] [i_10] [i_10] [i_10] [i_10]) || var_6));
                        }

                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            var_26 |= (var_8 ? (arr_39 [i_0 + 2] [i_0 + 2] [i_9 + 1] [9]) : (arr_31 [i_0 + 1] [i_9 + 1]));
                            var_27 ^= 240;
                            arr_40 [i_0] [i_1] [i_8] [i_8] [i_0] = (arr_14 [i_0 + 2] [i_0 + 2]);
                            arr_41 [i_11] [13] [i_8] [3] [3] [i_0] = -12394;
                        }
                        var_28 = (min(var_28, ((((1 << var_2) ? -1250571300952147062 : var_6)))));
                    }
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        arr_46 [i_0 + 2] [i_12] [i_12] [i_0] = 0;
                        var_29 = (min(var_29, ((((!(arr_39 [i_0 - 2] [i_0] [i_0] [i_0])))))));
                        var_30 += (((38460 ? 3888844867 : (arr_5 [i_0] [i_0 - 2] [i_0]))));
                        arr_47 [i_0] [i_0] [12] [i_12] [i_0] [i_0] = var_9;
                    }
                }
                var_31 *= (arr_4 [i_0] [11]);
            }
        }
    }
    var_32 ^= var_3;
    var_33 = ((max((max(285570174020083460, 6)), (min(1, var_9)))));
    #pragma endscop
}
