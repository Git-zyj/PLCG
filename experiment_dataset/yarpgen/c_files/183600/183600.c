/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (((((var_1 ? 204 : -971114078))) >= (var_7 <= var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (((((max((arr_5 [i_0]), var_6)))) ? ((var_6 ? (max(1048575, (arr_1 [i_0]))) : var_4)) : (min(((var_7 ? (arr_5 [10]) : (arr_1 [i_1]))), ((((arr_1 [15]) ? var_7 : (arr_4 [i_0] [17] [19]))))))));
                arr_6 [1] [i_0] [i_0] = ((-114 ? ((min(((~(arr_3 [18] [18]))), (arr_4 [i_0] [6] [15])))) : ((-(arr_1 [i_0])))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_12 [4] [i_2] [i_2] [i_2] = min(117, 200);
                        arr_13 [i_2] [6] = ((var_4 == ((var_4 ? var_1 : (((!(arr_8 [i_2] [16] [i_0] [3]))))))));
                        var_16 = (min(var_16, (((((((((1591550875 ? 12 : 200))) + 8388608))) ? (max(((max((arr_5 [i_0]), -1937090297))), (4193792 - 2))) : (((arr_5 [i_1]) ? (arr_5 [i_2]) : 2596880583)))))));
                    }
                    var_17 = ((9546609548669330293 ? ((((arr_1 [i_2]) ? (max(8191, (arr_8 [i_2] [13] [i_2] [i_1]))) : (((((arr_11 [14] [14] [i_1] [14] [i_2]) && (arr_4 [i_2] [i_1] [i_0])))))))) : ((-11895 ? (arr_9 [i_2] [0] [i_1] [i_2]) : 14123348667661937027))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        var_18 |= (((-69 && 226) ? (!13) : ((25 ? 2048 : 16))));
                        arr_16 [i_2] [11] [2] [i_4] [7] [i_4] = (arr_8 [i_2] [i_1] [i_1] [i_1]);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_19 = (max(var_19, (((~(arr_4 [i_0] [i_6] [i_6]))))));
                            var_20 = (((200 + 123) ? 237 : var_2));
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_21 = (min(var_21, ((((arr_0 [i_0]) ? (arr_18 [i_0] [i_1] [16] [i_0] [4] [i_7]) : -57)))));
                            var_22 = ((~(((var_13 < (arr_15 [12] [i_1] [15] [18] [i_2]))))));
                            var_23 = 119;
                            var_24 = ((-(arr_25 [i_0] [i_2] [i_0] [i_5] [11])));
                            var_25 = -var_12;
                        }
                        var_26 = (arr_19 [i_2] [1] [i_2] [4] [1] [i_5]);
                        arr_26 [i_2] = (arr_5 [i_0]);

                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_27 ^= ((((((arr_25 [20] [i_1] [i_2] [i_5] [10]) ? 30 : var_0))) ? -69 : (~15629492821354857345)));
                            var_28 ^= (((((var_10 ? (arr_9 [1] [i_1] [4] [i_1]) : 4))) ? 384 : (arr_14 [i_1])));
                        }
                    }
                }
                arr_29 [i_0] = (((-(((arr_2 [i_0]) ? var_7 : 50)))));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_29 -= (((+(((arr_21 [2] [i_9 + 2] [i_10]) ? 65535 : (arr_25 [i_0] [i_10] [i_0] [i_9] [i_0]))))));
                            arr_34 [i_9] [19] = (max((((arr_21 [i_9 + 3] [8] [i_9]) ? (arr_10 [i_9] [i_9]) : 0)), (((!(arr_20 [7] [16] [i_1] [i_1] [i_1]))))));
                            var_30 = ((var_2 ? ((1 ? 6823 : 91)) : ((1494961125 >> ((((~(arr_20 [i_0] [18] [18] [1] [i_10]))) + 142))))));
                            var_31 = (arr_8 [i_9] [11] [15] [5]);
                        }
                    }
                }
            }
        }
    }
    var_32 = ((!(((46698 && var_5) == (30 < var_12)))));
    var_33 = var_1;
    var_34 -= (min((((((((var_9 + 2147483647) >> (var_8 - 18094084824622812110)))) % var_13))), (~15629492821354857337)));
    #pragma endscop
}
