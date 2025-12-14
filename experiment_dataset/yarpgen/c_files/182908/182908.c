/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_10 = 1;
                    arr_9 [1] [i_1] [i_1] [i_2] = ((!(((-71269180 ? 1154471269 : 1154471269)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_11 ^= 7;
                        var_12 = (min(var_12, (((((arr_19 [i_4 - 2] [i_4 - 1]) / (arr_19 [i_4 - 1] [i_4 - 1])))))));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_13 += ((arr_18 [i_3] [i_3] [i_3] [i_7]) / (((var_2 & 3988) ? 1963067114 : 7486734392172926400)));
                                var_14 += ((32767 ? (arr_23 [i_8]) : (max(25375, (arr_25 [i_7] [i_7] [18] [18] [i_7])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 16;i_10 += 1)
        {
            {

                /* vectorizable */
                for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 0; i_12 < 0;i_12 += 1)
                    {

                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            var_15 = 31;
                            var_16 &= var_4;
                            var_17 = (arr_17 [1] [i_10] [i_12 + 1] [i_12 + 1]);
                            arr_41 [i_9] [i_9] [4] [i_9] [1] = (4315 * -0);
                        }
                        for (int i_14 = 2; i_14 < 14;i_14 += 1)
                        {
                            arr_45 [i_14 - 1] [i_12] [i_9] [i_9] [0] [i_9] = -1;
                            arr_46 [i_9] [i_9] [1] [i_9] [i_9] = 2852;
                            var_18 = (((arr_25 [i_9] [i_10 + 1] [i_11] [i_12] [i_9]) ? (var_4 < 31) : 535));
                            var_19 = ((((((arr_24 [i_9] [i_9]) + var_1))) + (arr_31 [i_9])));
                            var_20 = (min(var_20, (((1 ? var_7 : 2331900171)))));
                        }
                        var_21 = ((-((var_6 ? -355955522 : 2283158605492312437))));
                        var_22 += var_0;
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 17;i_16 += 1)
                        {
                            {
                                arr_52 [i_9] [7] [i_9] [i_9] [i_9] [0] [i_9] = (!1);
                                var_23 = (((~111) ? 1 : var_7));
                                var_24 = ((!(var_3 ^ var_7)));
                            }
                        }
                    }
                    var_25 ^= (arr_47 [i_9] [i_11] [i_9]);
                    var_26 = 2852;
                }
                for (int i_17 = 0; i_17 < 17;i_17 += 1) /* same iter space */
                {
                    arr_55 [i_9] [i_10] [i_10] [i_9] = var_9;
                    var_27 = (arr_27 [i_10 + 1]);
                }
                var_28 |= 145;
                arr_56 [i_9] [i_9] = ((((81 ? (arr_27 [i_10 + 1]) : (arr_27 [i_9]))) % ((1 ? -355955526 : 50408))));
            }
        }
    }
    #pragma endscop
}
