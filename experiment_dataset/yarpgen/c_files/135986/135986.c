/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_6 == 8064);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((45294 ? (((min((arr_0 [i_0]), (arr_0 [i_0]))))) : var_1));
        var_11 = (max((((((var_5 ? 45294 : (arr_0 [i_0])))) ? (arr_0 [i_0]) : (var_8 - var_6))), ((((var_5 | (arr_0 [1])))))));
        var_12 = var_6;
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_13 = (min(var_13, (((var_3 ^ (max((arr_1 [i_1 + 1]), (arr_1 [i_1]))))))));
            var_14 = ((var_8 ? (arr_1 [i_1]) : (min((arr_1 [i_1 - 2]), (arr_0 [i_1 + 1])))));
            var_15 = (min(var_15, ((max((arr_0 [i_1 + 1]), (arr_5 [12] [12]))))));
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_11 [i_1] [i_1] = (arr_6 [i_1]);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        var_16 = (max(var_16, ((max(0, (max(((((arr_4 [i_1] [i_5]) < 45294))), (min(20235, (arr_7 [i_3] [i_3] [i_4]))))))))));
                        arr_18 [i_1] [i_3] [i_4] [i_5] [i_1] &= ((max(163, (arr_9 [i_1 + 1] [i_1 + 2]))));
                    }
                }
            }
            var_17 -= arr_5 [i_1 + 1] [1];
            arr_19 [i_1] [i_1] [i_3] = (min((-1 ^ 80), (((-(arr_7 [5] [i_1] [i_1 - 2]))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_18 = (((arr_0 [i_1 + 2]) - var_9));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {
                        var_19 = 62;
                        arr_30 [i_8] [1] [i_6] = ((~(arr_0 [i_1 + 2])));

                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            arr_33 [11] [i_6] = (~15);
                            var_20 = (((arr_9 [i_1 - 1] [i_1]) ? (arr_23 [i_1 - 1] [i_1 - 1] [i_1 + 2]) : (arr_9 [i_1] [15])));
                            var_21 ^= 80;
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            var_22 = (min(var_22, (arr_27 [i_6] [i_1] [i_1] [i_1 + 1] [i_1 + 2] [i_1 + 1])));
                            var_23 = (max(var_23, var_5));
                        }
                        for (int i_11 = 0; i_11 < 0;i_11 += 1)
                        {
                            var_24 = 18446744073709551614;
                            var_25 *= ((~(arr_25 [i_1 + 2] [i_1 - 2] [i_1 - 1] [i_1 - 2])));
                        }
                        var_26 &= (~var_5);
                        arr_40 [i_1 - 2] [i_1] [i_6] [5] [i_7] [i_8] = var_9;
                    }
                }
            }
        }
        arr_41 [i_1] = (max((((((((arr_35 [i_1] [i_1 + 2] [i_1]) - (arr_8 [i_1] [i_1 - 2] [i_1 + 1])))) && -19))), (((arr_8 [i_1 + 1] [i_1] [i_1 + 2]) ? (arr_8 [i_1 + 2] [i_1] [i_1 - 1]) : (arr_8 [16] [i_1 + 1] [i_1])))));
    }
    for (int i_12 = 0; i_12 < 13;i_12 += 1)
    {
        arr_44 [i_12] [i_12] = var_6;
        arr_45 [i_12] = ((((!(((var_3 >> (var_0 - 3617693908591240283)))))) ? (((~((max((arr_21 [i_12] [i_12]), (arr_22 [i_12] [i_12] [i_12]))))))) : (((min(7650, var_4)) ^ ((((((arr_23 [i_12] [i_12] [i_12]) + 2147483647)) >> (((arr_0 [i_12]) - 11045)))))))));
    }
    #pragma endscop
}
