/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 = ((((((((var_12 ? (arr_12 [i_4] [i_3] [i_2] [i_1] [i_0]) : (arr_4 [i_0 - 1] [i_0 - 1] [i_4])))) ? (!var_14) : (arr_10 [i_1] [16] [i_2] [i_1] [16] [16])))) ? (~8192) : (((arr_0 [6] [i_2]) ^ var_1))));
                                var_16 = ((((32752 ? 19431 : var_8)) > (arr_7 [i_0] [i_0 - 1] [i_0 + 1])));
                                var_17 = (((arr_8 [i_1] [i_3] [i_4]) && (((arr_3 [i_0] [i_0 - 1]) != ((8192 - (arr_3 [i_0] [i_1])))))));
                            }
                        }
                    }
                }
                arr_13 [17] [i_1] = (((!var_12) >= ((min((arr_4 [i_0] [i_0] [i_0]), var_1)))));
                arr_14 [5] [18] = ((!(((max((arr_8 [12] [i_1] [i_1]), var_5))))));
                arr_15 [4] [4] = ((~((((var_13 ? 8192 : var_13))))));
                var_18 = (((arr_11 [i_0] [i_0 + 1] [i_0 - 1] [i_1]) || ((max(var_7, (arr_12 [i_1] [i_1] [i_1] [10] [3]))))));
            }
        }
    }
    var_19 = -var_2;

    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        var_20 = ((~((28830 ? var_14 : -21493))));
        var_21 = (max(var_21, var_2));
        var_22 = (((-256 + 2147483647) << (30749 == 22793)));
        arr_18 [i_5] [i_5 + 3] = (min(var_12, (arr_2 [i_5 + 3])));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        arr_21 [i_6] = (((arr_3 [i_6] [7]) ? ((-(arr_6 [i_6] [i_6] [i_6] [i_6]))) : (var_2 - 21878)));
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    {
                        arr_28 [i_8 - 3] [i_8 + 2] [i_8 - 1] [i_8 - 1] &= ((((var_4 ? var_7 : var_5)) - (arr_19 [i_7 + 2])));

                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            arr_31 [2] [i_7 + 2] [i_7 + 2] [i_9] [7] [i_10] [i_8] = 19431;
                            arr_32 [i_10] [i_9] [i_8 + 1] [i_6] = (((arr_23 [i_6] [i_8]) ? (arr_2 [i_7]) : (arr_17 [i_7 + 2] [i_7 + 2])));
                        }
                    }
                }
            }
        }
    }
    var_23 *= -var_14;
    #pragma endscop
}
