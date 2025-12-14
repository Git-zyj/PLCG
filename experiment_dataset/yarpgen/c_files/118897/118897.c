/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1 + 1] [i_1] = (((((((max((arr_2 [i_0] [i_0] [i_1]), 32741))) ? -111 : var_8))) <= (max(var_0, (arr_4 [i_1 - 1])))));
                arr_6 [i_1] = var_3;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_13 [i_1] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 - 1] = (arr_4 [i_1 + 1]);
                        var_10 *= (-127 - 1);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                var_11 = ((~(arr_8 [i_1 - 1] [i_4] [i_1])));
                                var_12 = (((((-7160062045575402311 ? -21548 : 127))) <= 791135265));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            {
                arr_28 [i_6 - 1] [i_6 - 1] [i_7] = ((-(arr_8 [i_6 - 1] [i_6 - 1] [i_7])));

                /* vectorizable */
                for (int i_8 = 3; i_8 < 17;i_8 += 1)
                {
                    var_13 = ((1 ? 116 : (arr_17 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1])));
                    var_14 = (min(var_14, var_9));
                }
                /* vectorizable */
                for (int i_9 = 4; i_9 < 17;i_9 += 1)
                {

                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        var_15 += ((var_8 <= (arr_14 [16] [i_7])));
                        var_16 *= (arr_11 [i_9 - 2] [1] [i_6]);
                        var_17 = (((arr_17 [i_6 - 1] [i_10 - 1] [i_9] [i_10 - 1] [i_6]) ? (arr_25 [i_9 - 1] [i_10 - 1] [i_6 - 1]) : var_5));
                        arr_37 [i_6 - 1] [i_6 - 1] [i_9 - 3] [15] [i_9] [14] = (arr_25 [i_6 - 1] [i_6] [i_6 - 1]);
                    }
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        arr_40 [i_6 - 1] [i_6 - 1] [i_9] [i_11] = ((4294967295 <= ((((arr_33 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_7]) ? 9864 : (-127 - 1))))));
                        var_18 += (~25324);

                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            arr_44 [i_6] [i_6] [i_6] [i_11] [i_6 - 1] [i_6 - 1] [i_6] = (((arr_12 [i_6 - 1]) + (arr_1 [i_6 - 1] [i_9 - 4])));
                            arr_45 [i_6 - 1] [i_11] [i_11] = ((((~(arr_12 [i_9 + 3]))) << (((~0) + 32))));
                        }
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            arr_48 [i_11] [i_11] [i_9 - 2] [i_9] [i_13] [i_11] [i_13] = ((-18615 < (arr_18 [i_11] [i_13] [i_13] [i_6 - 1] [i_9 + 2])));
                            var_19 = (max(var_19, (((((((arr_18 [i_7] [14] [i_9 + 3] [i_11] [i_13]) + 32767))) ^ (arr_20 [i_6 - 1] [i_7] [i_9 - 4] [i_9 - 3] [1]))))));
                        }
                    }
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        var_20 = (159 <= 1);
                        var_21 = ((3132112165 ? -8506 : 16161535711986267971));
                    }
                    var_22 = (max(var_22, ((((arr_12 [i_6 - 1]) ? (((arr_1 [i_7] [i_9 + 1]) & 65)) : (arr_51 [i_7] [i_7]))))));
                }
                arr_52 [i_6 - 1] [i_7] = ((((max(((1 >> (((arr_17 [i_7] [i_7] [i_7] [i_7] [i_7]) - 38252)))), ((-(arr_33 [i_7] [i_6] [i_6 - 1] [i_6])))))) * 5977661469996889350));
            }
        }
    }
    var_23 = (max(var_23, (((var_1 ? (~var_0) : 0)))));
    #pragma endscop
}
