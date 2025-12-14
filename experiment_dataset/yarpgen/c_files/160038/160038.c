/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_4;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = (min(((((min((-2147483647 - 1), (arr_3 [i_0] [15]))) > (((var_1 ? 1057517288 : (arr_1 [i_0]))))))), (((((min(255, (arr_3 [i_0] [i_0]))) + 9223372036854775807)) >> (arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_13 = (min(var_13, ((((((-(arr_5 [i_0] [8] [i_0])))) ^ ((3237450008 ? 32767 : 4331228220979614381)))))));
            var_14 = (min(var_14, (arr_6 [8] [i_1])));
            var_15 *= (arr_8 [i_1] [i_1]);

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_16 = (max(var_16, (arr_8 [i_3] [i_1])));
                            var_17 = (arr_12 [i_1] [i_1] [i_1] [i_4 - 3]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_18 = (max(-8, 32742));
                            var_19 = (max(var_19, var_9));
                        }
                    }
                }
            }
            var_20 = (i_1 % 2 == 0) ? (((!((((((arr_3 [i_1] [i_1]) ^ var_3)) ^ ((((arr_13 [6] [6] [i_1] [14] [i_1] [i_1] [i_1]) >> (1057517312 - 1057517294)))))))))) : (((!((((((arr_3 [i_1] [i_1]) ^ var_3)) ^ ((((((arr_13 [6] [6] [i_1] [14] [i_1] [i_1] [i_1]) + 2147483647)) >> (1057517312 - 1057517294))))))))));
        }
        var_21 = (((min(((7340032 ? (arr_11 [i_0] [i_0] [i_0]) : (arr_14 [8] [i_0] [i_0] [8] [i_0]))), ((var_4 ? (arr_14 [2] [i_0] [i_0] [i_0] [2]) : 6720726789127162085)))) >= ((((var_10 * 1) ? ((((var_6 >= (arr_0 [i_0] [i_0]))))) : (arr_2 [i_0]))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 9;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    {
                        arr_31 [i_7] [i_7] [i_9 - 2] [i_10] = (arr_6 [i_10] [i_8]);
                        var_22 = var_10;
                        var_23 -= (((~(arr_29 [i_7] [i_7] [i_9] [i_10]))));
                        var_24 ^= (((arr_7 [i_7] [1]) ? (((((arr_16 [i_7] [i_8] [i_9] [i_10] [i_8] [i_8]) > var_1)))) : (arr_3 [i_9 + 1] [i_9 + 2])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    {
                        var_25 = ((var_11 >= (arr_10 [i_7] [0] [i_12] [i_13])));
                        var_26 = (((var_3 ? (arr_30 [i_7] [i_7] [10] [i_12] [i_11]) : (arr_22 [i_7]))));
                        var_27 &= var_11;
                    }
                }
            }
        }
    }
    var_28 = (-var_0 / -var_2);
    #pragma endscop
}
