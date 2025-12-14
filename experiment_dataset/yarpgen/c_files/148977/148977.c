/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (max(var_18, (((+(((arr_2 [i_0] [i_0]) ? var_8 : (arr_2 [i_0] [i_0]))))))));
        var_19 = (min(var_19, ((((~(arr_0 [i_0] [i_0])))))));
    }
    var_20 -= ((var_4 - (var_0 / var_11)));

    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_21 -= ((~(arr_4 [i_1 + 3])));
        arr_5 [i_1 + 1] [i_1 + 2] = (((((((((1894642649 >= (arr_3 [i_1])))) == ((~(arr_3 [i_1]))))))) | ((((-(arr_2 [i_1] [i_1 - 2]))) << (((arr_1 [i_1]) - 3056686409))))));
        var_22 = (max((arr_4 [i_1 - 2]), (((((var_8 ? var_9 : (arr_2 [i_1 + 1] [i_1])))) ? var_17 : (124841255 + 4170126041)))));
        var_23 = 124841255;
        var_24 = ((((((arr_2 [i_1 + 3] [i_1 - 2]) % var_2))) ? ((((var_6 || (arr_4 [i_1 + 1]))))) : (arr_2 [i_1] [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 12;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_25 = (((arr_11 [i_3 + 1] [i_3 + 1]) < (arr_11 [i_3 - 1] [i_3 - 1])));
                                arr_22 [i_4] [i_5 - 3] = var_16;
                            }
                        }
                    }
                    var_26 ^= var_11;
                    arr_23 [i_2] [i_4] [i_2] [i_2] = ((((-(arr_18 [i_4] [i_2] [i_4] [i_3] [i_2] [i_2]))) * (((var_12 ^ (arr_13 [i_2] [i_3] [i_3] [i_3 + 1]))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    var_27 = (arr_11 [i_2] [i_8]);
                    var_28 = (((((arr_24 [i_2] [6] [1]) ? var_14 : (arr_8 [i_7] [i_2]))) >= -var_13));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 12;i_11 += 1)
                {
                    {
                        var_29 = ((~(arr_6 [i_2])));
                        var_30 = (arr_1 [i_10 - 3]);
                        var_31 = (var_5 && var_10);
                        var_32 ^= (~(arr_2 [i_11 + 1] [i_11 + 1]));
                    }
                }
            }
        }
    }
    #pragma endscop
}
