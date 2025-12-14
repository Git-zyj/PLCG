/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_14 = (arr_4 [i_0] [i_0] [i_0]);
                        arr_9 [i_0] [i_3] [i_2] [i_2] = -95;
                        var_15 = (((94 | 95) ? -var_1 : (max((max(72, (arr_5 [i_0] [i_0] [i_0] [i_0]))), var_12))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_16 = ((((-(arr_6 [i_0] [i_0] [i_2] [i_0]))) < (arr_11 [i_4])));
                            var_17 = ((~((14701919547411693726 ? ((max(68, 7))) : (max(var_8, (arr_1 [i_5])))))));
                            arr_16 [i_0] [i_0] [i_2] [i_4] [i_2] = (649936339 % 96);
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_1] [i_1] [i_4] [i_0] [i_0] = ((-((min(var_8, (max((arr_3 [i_6]), (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                            arr_20 [i_4] [i_4] [i_4] [i_4] [i_4] [0] = (max((max(((-83 ? var_2 : -95)), (((arr_3 [i_0]) - (arr_3 [i_4]))))), 65535));
                            arr_21 [i_6] [i_4] [7] [i_4] [i_0] = ((-(3 < 26901)));
                            var_18 = (max(var_18, (((var_7 ? (arr_18 [i_0] [1] [1] [1] [i_6]) : ((((max(1, 26901))) ? (min((arr_8 [i_6] [i_6] [i_6] [6]), var_4)) : -var_10)))))));
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_4] = (max((((((max(-4, 0)))) / 7975507621895820250)), ((((arr_4 [i_0] [i_1] [1]) ? ((((arr_11 [i_4]) == (arr_11 [i_4])))) : ((94 ^ (arr_25 [i_4] [i_4]))))))));
                            var_19 = (min(var_19, ((min(3, 194)))));
                            var_20 = (max((max(((var_5 ? 1059880501852986115 : (arr_23 [i_0] [i_0] [i_2] [i_2] [i_7]))), (((var_12 ^ (arr_25 [i_4] [i_4])))))), ((max((arr_17 [i_0] [i_0]), (!var_12))))));
                            var_21 = ((var_1 == ((max((arr_11 [i_4]), var_8)))));
                        }
                        var_22 = (max(((((1692954850 ? 92 : 9207360681090765579)) | (((max(var_4, var_12)))))), ((((!-15771) ? -95 : (arr_23 [i_0] [i_1] [i_1] [i_0] [i_4]))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                    {
                        var_23 = (arr_1 [i_0]);
                        arr_29 [i_8] [i_8] [i_8] [i_0] = (((!20132) ? ((-37 ? 48 : 49)) : 255));
                        var_24 = (((arr_15 [i_2]) ? 1495455660 : var_4));
                        arr_30 [i_8] = ((~(arr_8 [i_0] [i_0] [i_8] [i_8])));
                        var_25 = (min(var_25, ((((1 ? var_3 : var_10))))));
                    }
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        var_26 = (min(var_26, -95));
                        var_27 = ((((max(var_1, 15777))) ? 63648 : ((-((min((arr_18 [i_0] [5] [i_0] [i_2] [i_0]), (arr_10 [i_0] [i_9]))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 9;i_11 += 1)
                        {
                            {
                                var_28 = (max(var_28, ((min(((max((~var_4), (~var_12)))), ((-((-96 ? (arr_40 [i_0] [i_0] [i_2] [i_10] [i_11]) : var_9)))))))));
                                var_29 ^= (arr_10 [i_0] [i_0]);
                                var_30 = (min(var_30, ((max(((max((arr_7 [i_0] [i_11] [i_11 + 1] [i_0]), (arr_7 [i_1] [i_0] [i_0] [i_1])))), (((arr_7 [i_0] [i_1] [i_0] [i_0]) ? var_7 : var_8)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            {
                                var_31 = (max((arr_40 [i_0] [i_1] [i_2] [i_12] [i_13]), var_2));
                                var_32 = (arr_41 [i_13] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                    arr_47 [i_0] = ((38609 ? 63644 : 206));
                }
            }
        }
    }
    var_33 ^= var_8;
    var_34 = -61;
    #pragma endscop
}
